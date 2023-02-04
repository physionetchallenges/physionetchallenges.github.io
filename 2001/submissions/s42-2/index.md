---
layout: default
---

# Session S42.2

## Automated Prediction Of The Onset Of Paroxysmal Atrial Fibrillation From Surface Electrocardiogram Recordings
## P. de Chazal, C. Heneghan

### University of New South Wales
### Sydney, Australia

A technique for predicting the onset of paroxysmal atrial
fibrillation/flutter (PAF) through automated assessment of a single
channel electrocardiogram (ECG) is presented. Algorithmic development
has been carried out using the Physionet PAF database. This database
consists of 100 pairs of half-hour two-channel ECG recordings (for a
total of 200 half-hour ECG segments). Each pair of recordings is
extracted from a two channel (Leads I and II) 24-hour ECG. These 100
pairs are drawn from two subject groups. Subjects in the first group
experienced PAF at some point during the 24-hour ECG. For these
subjects, one recording ends just before the onset of PAF, and the
other recording is distant in time from any PAF. Subjects in the
second group do not have PAF. In these subjects, the times of the
recordings have been chosen at random. The database is divided into a
learning set and a test set of equal size, each containing
approximately equal numbers of subjects from the two groups. The
classifications of the recordings in the learning set are provided,
while those for the test set are withheld for independent validation
of classifiers. Unvalidated QRS detection points are provided for all
ECG files. A linear discriminant classifier was developed to
discriminate half-hour segments prior to PAF from segments not
associated with PAF. The classifier uses a ten-element feature vector
based solely on R-R intervals. Features include mean R-R interval, R-R
interval variance, serial correlation coefficients, and various
spectral measures, including a spectral power-law exponent. After
training, the classifier was validated on the test set of subjects
suffering from PAF. The classifier was able to correctly identify the
ECG segment immediately prior to PAF in 41 out of 50 cases in this
test set.
