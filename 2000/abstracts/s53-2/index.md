---
layout: default
---

# Session S53.2

## Detection Of Sleep Apnea In Single Channel ECGs From The PhysioNet Data Base
## M. Schrader, C. Zywietz, V. von Einem, B. Widiger, G. Joseph

### Medical School Hannover
### Hannover, Germany

The work reported here refers to the CiC Challenge 2000 on detecting
sleep apnea using single lead ECGs.

1. The ECG data were downloaded from PhysioNet including the QRS and
    apnea annotation data.
2. Since the ECGs provided had a sampling rate
    of 100 samples/s we interpolated the ECGs by means of a 10s second
    order spline polynome to a sampling rate of 500 samples/s in order to
    make it possible to use our own QRS detector and for a better QRS-peak
    identification.
3. All data were then processed by our arrhythmia
    (Holter) ECG program after its modification for single channel
    analysis.
4. QRS detection was compared between the PhysioNet
    annotation and our results. QRS localizations were corrected by visual
    inspection.
5. After that data sections with premature ventricular and
    supraventricular beats were marked and excluded from further analysis.
6. Mean heart rates and heart rate variability (HRV) were computed for
    intervals of 10s, 30s, 60s, 3 min, 5 min \... and for overall.
7. For a “walk through” search Fourier and Discrete Harmonic Wavelet
    analysis for LF (0.04 - 0.15 Hz); HF (0.15 - 0.4 Hz) and
    brady-tachycardia arousal (0.02 - 0.075 Hz) bands is performed.
8. From 10s record sections ECG mean cycle measurements were extracted.
9. Using the 35 annotated records as learning set a multivariate
    classification procedure was designed. Application of this procedure
    to the learning set revealed a sensitivity of 85% for detection of
    sleep apnea ECGs, specificity was 73%. 10. Application of this
    procedure to the test set gave apnea episodes in 18 ECGs. Nine ECGs
    were classified as non-apnea ECGs and for eight ECGs no classification
    was given.

We believe that the analysis of single channel ECGs provides only
limited information because QRS and ST-T changes can not be associated
with respiration movement as it is possible in, for example, three
orthogonal leads. Nevertheless, we hope to improve the performance of
our algorithm by improved analysis of frequency components in HRV by
means of better adapted interval window settings.
