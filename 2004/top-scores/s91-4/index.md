---
layout: default
---

# Session S91.4

## On Predicting the Spontaneous Termination of Atrial Fibrillation Episodes Using Linear and Non-Linear Parameters of ECG Signal and RR Series

### L Mainardi, N Gatti, M Matteucci

### Politecnico di Milano
### Milano, Italy

A few human studies evidenced the occurrence of spontaneous re-organization
in the electrical activities of different atrial sites in the period preceding
the termination of atrial fibrillation (AF) episodes. It could be argued that
some signs of this re-organization may also appear on surface ECG recordings.
Aim of this study is to assess the presence of subtle changes in ECG leads,
revealing the regularization of atrial sites, that could be used as a predictor
of the termination of the AF episodes. In the past, the analysis of residual
ECG signal (i.e. the ECG signal in which the ventricular activities, QRST
complex, has been cancelled through beat averaging techniques) has been
proposed to characterize atrial activities: it evidences marked changed during
AF, after infusion of drug or in presence of various atrial rhythms. In
addition, some authors reported the presence of different patterns in the
series of atrial activations during organized and non-organised atrial rhythm.
In this study, a set of features is therefore extracted from both residual ECG
signal (16 features) and RR interval series (9 features). The computed metrics
aimed at measuring glimpse of re-organization in atrial activities through the
quantification of both linear and non-linear parameters. These parameters
include: Entropy based measures (Approximated and spectral Entropy,
Regularization and Synchronization indexes), spectral analysis parameters
(frequency and amplitude of fibrillation waves, coherence function) and model
based indexes (level of predictability). The features were computed on the data
set of Computers in Cardiology Challenge 2004. The features extracted from the
dataset have been reduced from a bigger set using principal component analysis
and they have been normalized before training a feed forward neural network. We
used leave one out cross-validation to select the number of neurons in the
hidden layer and the final output is obtained from a committee of networks. Due
to the small number of records we decided to apply the co-train framework to
the two different sets of features (i.e., features from ECG signal and RR
interval series) building two different classifiers and gaining information
also from the test sets. Results comparing the co-training approach and
classical classifiers using a mixed set of features are evaluated. 
