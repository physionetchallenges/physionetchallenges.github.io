# PhysioNet/CinC Challenge 2020 Results

This folder contains several files with the results of the 2020 Challenge.

We introduced [new scoring metric](https://physionetchallenges.github.io/2020/#scoring) for this Challenge. We used this scoring metric to evaluate and rank the Challenge entries. We included several other metrics for reference. The area under the receiver operating characteristic (AUROC), area under the precision recall curve (AUPRC), and _F_-measure scores are the macro-average of the scores across all classes. The accuracy metric is the fraction of correctly diagnosed recordings, i.e., all classes for the recording are correct. These metrics were computed by the [evaluate_12ECG_score.py](https://github.com/physionetchallenges/evaluation-2020/blob/master/evaluate_12ECG_score.py) script in this repository. Please see this script for more details of these scores.

We included the scores on the following datasets: 

1. __Validation Set:__ Includes recordings from the hidden CPSC and G12EC sets.
2. __Hidden CPSC Set:__ Split between the validation and test sets.
3. __Hidden G12EC Set:__ Split between the validation and test sets.
4. __Hidden Undisclosed Set:__ All recordings were part of the test sets.
5. __Test Set:__ Includes recordings from the hidden CPSC, G12EC, and undisclosed test sets.

To refer to these tables in a publication, please cite [Perez Alday EA, Gu A, Shah AJ, Robichaux C, Wong AI, Liu C, Liu F, Rad AB, Elola A, Seyedi S, Li Q, Sharma A, Clifford GD<sup>*</sup>, Reyna MA<sup>*</sup>. Classification of 12-lead ECGs: the PhysioNet/Computing in Cardiology Challenge 2020. Physiol Meas. 41 (2020). doi: 10.1088/1361-6579/abc960](https://iopscience.iop.org/article/10.1088/1361-6579/abc960).

1. Official entries that were scored on the validation and test data and ranked in the Challenge:
[physionet_2020_official_scores.csv](https://github.com/physionetchallenges/evaluation-2020/blob/master/Results/physionet_2020_official_scores.csv)
2. Unofficial entries that were scored on the validation and test data but unranked because they did not satisfy all of the [rules](https://physionetchallenges.github.io/2020/#rules-and-deadlines) or were unsuccessful on one or more of the test sets:
[physionet_2020_unofficial_scores.csv](https://github.com/physionetchallenges/evaluation-2020/blob/master/Results/physionet_2020_unofficial_scores.csv)
3. Challenge and other scoring metrics on all official entries broken with scores for each database in the validation and test data: 
[physionet_2020_full_metrics_official_entries.csv](https://github.com/physionetchallenges/evaluation-2020/blob/master/Results/physionet_2020_full_metrics_official_entries.csv )
4. Per-class scoring metrics on the validation data:
[physionet_2020_validation_metrics_by_class_official_entries.csv](https://github.com/physionetchallenges/evaluation-2020/blob/master/Results/physionet_2020_validation_metrics_by_class_official_entries.csv)
