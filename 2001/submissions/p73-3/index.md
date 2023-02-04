---
layout: default
---


# Session P73.3

## A Two-Stage Solution Algorithm For Paroxysmal Atrial Fibrillation Prediction
## K.S. Lynn, H.D. Chiang

### Cornell University
### Ithaca, NY, USA

We developed a two-stage solution algorithm to predict the onset of
paroxysmal atrial fibrillation (PAF) based on half-hour heart rate
variability (HRV) signals. The objective of the first stage, which is
a screening stage, is to distinguish HRV signals of group N (subjects
with no documented PAF) from those of group A (subjects with PAF but
no PAF episodes in the record). The goal of the second stage, a
prediction stage, is to further separate the HRV signals of group A
into records that are far away (at least 45 minutes) from PAF episodes
and records that are immediately followed by PAF episodes.

At the screening stage, we used neural networks to classify features
extracted from HRV signals. Features based on both return map and
trajectory diameter analysis that capture the shapes of trajectories
reconstructed by HRV signal are extracted for this stage. These two
extracted features were fed into two different neural networks for
training and testing. During the training phase, we used 100
officially issued records to train the networks so that positive
outputs correspond to the inputs of group N records and negative
outputs correspond to the inputs of group A records.

For the prediction stage, we developed features based on normalized
histogram, which is directly obtained from HRV signal and applied them
to neural network for training and prediction. Training data were
obtained from 50 group-A records (half away from PAF and the other
half next to PAF) in which records away from PAF produce positive
network outputs and records next to PAF produce negative network
outputs.

According to the official scoring result, our algorithm scored 34 and
35 points in the screening stage and 40 points in the prediction
stage. In addition, the developed two-stage solution algorithm appears
to be very robust against the measuring noise. For example, using
different QRS detection results, the classification results due to
noise only change slightly (within 5%).
