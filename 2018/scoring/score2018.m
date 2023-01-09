%% Function to compute scores for the 2018 PhysioNet/CinC Challenge.
%%
%% This function aggregates the outputs of a proposed classification
%% algorithm, and calculates the overall (gross) area under the
%% precision-recall curve, as well as the area under the receiver
%% operating characteristic curve.
%%
%% 'truth' is a vector of arousal values: zero for non-arousal
%% regions, positive for target arousal regions, and negative for
%% unscored regions.
%%
%% 'predictions' is a vector of probabilities produced by the
%% classification algorithm being tested.  This vector must be the
%% same length as 'truth', and each value must be between 0 and 1.
%%
%% Call this function once for each record being tested; it will
%% return the gross AUPRC and AUROC (of all records so far), as well
%% as the per-record AUPRC and AUROC (which will be NaN if the record
%% contains no arousals.)  Call the function with no arguments to
%% re-initialize.

function [auprc_g, auroc_g, auprc_r, auroc_r] = score2018(truth, predictions)
    vscale = 1000;
    persistent all_pos_values;
    persistent all_neg_values;

    if nargin == 0 || isempty(all_pos_values)
        all_pos_values = zeros(1, vscale + 1);
        all_neg_values = zeros(1, vscale + 1);
    end
    if nargin == 0
        return;
    end

    %% Check if length is correct
    if length(predictions) ~= length(truth)
        error('length of predictions does not match truth');
    end

    %% Compute the histogram of all input probabilities
    bins = [-1/2 : vscale + 1/2] / vscale;
    all_values = xhistogram(predictions, bins);

    %% Check if input contains any out-of-bounds or NaN values
    if sum(all_values) ~= length(predictions)
        error('invalid values in predictions');
    end

    %% Compute the histogram of probabilities within arousal regions
    pos_samples = find(truth > 0);
    pos_values = xhistogram(predictions(pos_samples), bins);

    %% Compute the histogram of probabilities within unscored regions
    ign_samples = find(truth < 0);
    ign_values = xhistogram(predictions(ign_samples), bins);

    %% Compute the histogram of probabilities in non-arousal regions,
    %% given the above
    neg_values = all_values - pos_values - ign_values;

    all_pos_values = all_pos_values + pos_values;
    all_neg_values = all_neg_values + neg_values;

    [auprc_r, auroc_r] = xauc(pos_values, neg_values);
    [auprc_g, auroc_g] = xauc(all_pos_values, all_neg_values);
end

function h = xhistogram(predictions, bins)
    if isempty(predictions)
        h = zeros(1, length(bins) - 1);
    else
        h = histc(predictions, bins);
        h = h(1 : length(bins) - 1);
        if ~isrow(h)
            h = h';
        end
    end
end

function [auprc, auroc] = xauc(pos_values, neg_values)
    %% Calculate areas under the ROC and PR curves by iterating over
    %% the possible threshold values.

    %% At the minimum threshold value, all samples are classified as
    %% positive, and thus TPR = 1 and TNR = 0.
    tp = sum(pos_values);
    fp = sum(neg_values);
    tn = 0;
    fn = 0;

    if tp == 0 || fp == 0
        %% If either class is empty, scores are undefined.
        auprc = nan;
        auroc = nan;
        return;
    end

    tpr = 1;
    tnr = 0;
    ppv = tp / (tp + fp);
    auprc = 0;
    auroc = 0;

    %% As the threshold increases, TP decreases (and FN increases)
    %% by pos_values(j), while TN increases (and FP decreases) by
    %% neg_values(j).

    for j = 1 : length(pos_values)
        tp = tp - pos_values(j);
        fn = fn + pos_values(j);
        fp = fp - neg_values(j);
        tn = tn + neg_values(j);
        tpr_prev = tpr;
        tnr_prev = tnr;
        ppv_prev = ppv;
        tpr = tp / (tp + fn);
        tnr = tn / (tn + fp);
        if tp + fp > 0
            ppv = tp / (tp + fp);
        end
        %% ROC is piecewise linear; integrate by adding the areas
        %% of trapezoids
        auroc = auroc + (tpr_prev - tpr) * (tnr + tnr_prev) * 0.5;
        %% PRC is piecewise constant; integrate by adding the
        %% areas of rectangles
        auprc = auprc + (tpr_prev - tpr) * ppv_prev;
    end
end
