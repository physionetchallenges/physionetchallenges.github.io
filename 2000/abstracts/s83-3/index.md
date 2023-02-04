---
layout: default
---

# Session S83.3
## Automatic Detection Of Apnea With The Electrocardiogram
## P. de Chazal, C. Heneghan, E. Sheridan, R. Reilly, P. Nolan, M. O’Malley
### University College - Dublin
### Dublin, Ireland

Entry 20000503.171154, entrant 14. Score 13124/17268=76.00%. This
study investigates accurate detection of epochs of clinically
significant sleep apnea through automated scanning of surface lead ECG
recordings, based on the Philipps-University database. This provides a
“gold-standard” measure of the presence of apnea based on assessment
of a clinical panel with access to additional measurements, with each
minute of the recordings independently classified as normal or sleep
apnea. The database contains signals from 70 subjects with
approximately eight hours of data per subject. The ECG signal and
classifications of 35 of the recordings are available for training and
the other 35 classifications withheld for independent validation of
classifiers. Unvalidated QRS detection points are provided for the ECG
files. We also detected approximately 85% of P wave onsets. A
criterion in developing our classifiers was to ensure they were
insensitive to imperfectly detected QRS and P waves. An initial set of
37 features was created for apnea detection based on R-R and P-R
intervals derived from each minute of data. The R-R features include
mean and standard deviation of R-R rate, serial correlation
coefficients and low-frequency spectral measures. We also included
novel features based on Allan variance and detection of sequences of
alternating bradycardia and tachycardia. The P-R features include mean
and standard deviation of P-R intervals and serial correlation
coefficients. Automatic feature selection from these 37 features based
on minimisation of Wilk’s lambda was considered. A branch-and-bound
algorithm was used to find the optimal subsets of features. We
evaluated several classifiers based on linear and quadratic
discriminants, and feed-forward neural networks. To minimise the bias
of the performance estimates of the classifiers 35-fold
cross-validation was used. Each fold contained data from one subject
only. The cross-validated results show that the best classifier
resulted in a sensitivity of 61% and specificity of 82%, equivalent to
an overall accuracy of 74%. When the classifier was independently
validated on the test set it achieved an overall accuracy of 76%.
