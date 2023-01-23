---
layout: default
---

# Session S31.4

## Prediction of Spontaneous Atrial Fibrillation Termination in the Surface ECG by Frequency Analysis

## Q Xi, S Shkurovich

### St. Jude Medical
### Sylmar, CA, USA

We developed an automatic method for predicting the spontaneous termination
of atrial fibrillation (AF) using surface ECG analysis. The method was based on
the hypothesis that AF segments with higher fibrillatory frequencies would be
more likely to persist whereas those with slower frequencies would be more
likely to terminate.

We separated each minute long segment into six contiguous 10 second
sub-segments and performed median QRS-T subtraction on the sub-segments to
cancel ventricular and correlated activity. We performed peak frequency
analysis on the remainder signal and used the learning set to determine a peak
frequency threshold to separate immediately terminating (T) from
non-terminating (N) segments. A 5.9 Hz threshold correctly separated 19/20 T
vs. N segments from 20 different patients. For separating non-immediately
terminating (S) and T, the frequency analysis was preceded by QRS-T morphology
matching to identify pairs of S and T segments from each individual patient. In
this situation we chose the higher frequency segment from each pair as S and
the lower frequency as T segments. This algorithm correctly separated 18/20
segments from the learning set in 10 patients.

Using this technique, we correctly identified 25/30 segments from Test Set A
and 16/20 segments from Test Set B. 
