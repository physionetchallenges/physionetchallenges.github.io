---
layout: default
---

# Session S83.6
## Detection Of Obstructive Sleep Apnea From The ECG
## Z. Shinar. A. Baharav, S. Akselrod
### Tel-Aviv University
### Ramat-Aviv, Israel

Recently, it was estimated that almost 1 in 10 men in mid-life is
affected by sleep apnea syndrome. Since the traditional gold standard
sleep study polysomnography is both cumbersome and expensive, there is
an obvious need for a simple and cost effective test to screen large
populations for suspected sleep apnea syndrome. Furthermore, it is
known that obstructive sleep apnea is often related to the sleeping
position, and in some cases completely position dependent (usually
supine). Many studies have shown different statistical behavior of the
heart rate or its derivatives in normal versus disordered patients,
yet the main problem is to define the time segments of HR within which
the calculations are performed. In a previous study, R wave duration
changes were found to be a good indicator of body position changes
\[1\]. We used this parameter to divide the data into subsequent
subsets containing a single body position. Data sets for the study
were downloaded from the PhysioNet database, as part of CinC challenge
2000. The data consist of 70 ECG records, divided into a learning set
of 35 records, which includes apnea annotations, and a test set of 35
records. The ECG is digitized at 100Hz with 12-bit resolution. Data
were analyzed using a combined approach: 1) R peaks detection using a
computer program based on second derivative computation, followed by a
correction procedure of the miss-detected peaks. 2) R wave duration
calculation based on inflection points calculations \[1\]. 3)
Segmentation of each record according to changes in position. 4) Time
dependent spectral analysis of each segment. 5) Classification of each
record as type A or B or C (defined in [the 2000 challenge](/2000))
according to the
total length of the segments that have high power content in the
frequency band of 0.01-0.05Hz (equivalent to periods of 28-100sec). 6)
Examination of the RR interval of each suspected segment to identify
the pattern of acceleration and deceleration typical to apnea. The
results of the classification were 93% correct (entry 20000429.201539,
entrant 6), indicating that the combined approach (1-5) constitute a
good screening procedure for sleep apnea patients.

Reference:
:   [1] Z. Shinar, A. Baharav, and S. Akselrod, “R Wave
    duration as a measure of body position changes during sleep”. In:
    Computers in Cardiology. IEEE Comp. Soc., 1999, pp. 49-52.
