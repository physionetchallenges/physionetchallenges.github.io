---
layout: default
---

# Session S42.4

## A Methodology For Predicting Paroxysmal Atrial Fibrillation Based On ECG Arrhythmia Feature Analysis
## W. Zong, R.G. Mark

### Harvard-MIT
### Cambridge, MA, USA

This work addresses the 2001 CinC Challenge for predicting the onset
of paroxysmal atrial fibrillation/flutter (PAF) from the surface
electrocardiogram (ECG). We developed a methodology based on ECG
arrhythmia feature analysis for this purpose. We found the frequency
of atrial premature contractions (APCs)to be a useful feature for
predicting PAF. Our initial step was to visually examine all the ECG
data in the training set of the PAF ECG database to get a better
understanding of the ECG characteristics in the subjects during PAF,
prior to PAF, and without PAF. Then, we employed a previously
developed automated arrhythmia detection algorithm which identifies
beat types (Normal, APC, VPC, Unknown, etc.), as well as rhythm types
(SVT, VT, Sinus Tach, etc.). After investigating the arrhythmia
patterns associated with and without PAF events, we found that APC
frequency seemed be a convenient and useful predictive feature. Our
algorithm detects and counts the number of APCs that occurred in each
30 minute ECG recording. For Event 1 (Screening), we utilized the
total number of APCs from both recordings as the statistic for
prediction. In order to establish an optimal threshold for this
statistic that distinguishes between Normal and PAF subjects, we
analyzed the receiver operating curve (ROC) characteristics based on
the training data. The resulting threshold was used to screen the test
data. Subjects in the test set were determined to have PAF when their
total number of APCs was larger than the threshold. For Event 2
(Prediction), we again utilized the number of APCs detected in each 30
minute recording. We predicted that for each subject, the recording
with a larger number of APCs would be followed by PAF. With the method
outlined above, we achieved a score of 35 correct out of 50 for Event
1 and 44 correct out of 50 for Event 2. These encouraging results
indicate that APCs are indeed of great value for predicting imminent
PAF for at least the test set provided by the CinC Challenge. We
believe that we can improve upon these results by incorporating into
our method measures of other beat and rhythm features, RR interval
variability, and P wave characteristics.
