---
layout: default
---

# Session S53.4
## Screening For Obstructive Sleep Apnoea Based On The ECG: The CinC Challenge
## B. Raymond, R. Cayton, R. Bates, M. Chappell
### Birmingham Heartlands Hospital
### Birmingham, UK

The definitive diagnostic tool for obstructive sleep apnoea (OSA) is
the polysomnogram: an overnight, multichannel recording which is
expensive and time-consuming to carry out and analyse. There is
continuing interest in screening methods to reduce the burden on sleep
laboratories performing polysomnography. The changes in heart rate and
respiration during OSA are well known and it is possible to detect
episodes of apnoea from the ECG alone.

The beat times of each ECG recording were extracted using QRS template
matching with manual editing. The ECG-derived respiratory (EDR) signal
and the RR interval tachogram were constructed. Cycles of
tachy/bradycardia (consistent with a cardiovascular arousal from
sleep, as would be expected at the end of an episode of apnoea) were
identified but only those cycles which were accompanied by a brief
episode of hyperventilation (assessed using the EDR signal) were
retained. This was to assist in reducing the number of “false”
arousals due to other causes (such as other sleep disorders or
spontaneous arousals). Power spectral features from the EDR and RR
interval signals were computed using wavelet and time-frequency
distribution methods, considering principally the power at respiratory
frequency and at frequencies below 0.1 Hz. Movement artifact in the
ECG signal was also identified and used as a marker of arousal. These
features were collated into minute-by-minute vectors and passed to a
shared mixture classifier. This classifier models the data
distribution using a mixtures of Gaussians, allowing application to
non-normal data. Screening results were determined from the
minute-by-minute classification of the data from each test subject.

Preliminary results at the time of submission offered correct
classification in 22 of the 30 subjects in the Challenge test
database.

This work was supported by the Mathematics in Medicine Initiative at
the University of Warwick.
