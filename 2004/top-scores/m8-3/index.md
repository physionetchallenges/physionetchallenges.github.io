---
layout: default
---

# Session M8.3

## Analysis of RR Interval and Fibrillation Frequency and Amplitude for Predicting Spontaneous Termination of Atrial Fibrillation

### P Langley, J Allen, E Bowers, M Drinnan, E Garcia, ST King, T Olbrich, AJ Sims, FE Smith, J Wild, D Zheng, A Murray

### Freeman Hospital
### Newcastle upon Tyne, UK

The mechanism of spontaneous termination of atrial fibrillation in the absence
of anti-arrhythmic drugs is not well understood. We assessed characteristics of
atrial and ventricular activity from the ECG for predicting the offset of
atrial fibrillation for the 2004 PhysioNet/Computers in Cardiology Challenge.

Seven parameters were analysed with five based on the statistical
characteristics of the RR interval (mean, standard deviation, skewness,
kurtosis and median beat-to- beat change), and fibrillation frequency and
atrial signal amplitude. The differences in these parameters between the first
and last 30 s of the recordings were also analysed. RR intervals were
calculated from the QRS annotations provided by PhysioNet. Fibrillation
frequency was determined from spectral analysis of the atrial signal after
subtraction from the ECG leads of QRST templates. The power of the parameters
to predict termination of the arrhythmia was assessed individually and in
combination using linear discriminant analysis (LDA) and artificial neural
network (ANN) techniques.

Fibrillation frequency with a threshold value of 5.55 Hz was able to identify
10/10 learning set records which terminated immediately (T) and 8/10 of
non-terminating records (N) and was the best of the individual parameters. LDA
using mean, kurtosis and beat-to-beat change of RR interval and fibrillation
frequency, atrial signal amplitude and 30 s difference in amplitude identified
9/10 T records and 10/10 N records. The ANN was trained using three parameters,
RR kurtosis, fibrillation frequency and atrial signal amplitude and identified
9/10 T records and 10/10 N records.

Classifications for the test set for event 1 of the challenge for algorithms
based on fibrillation frequency alone, LDA and ANN were submitted and received
scores of 24/30, 18/30 and 23/30 respectively. Low fibrillation frequency is an
indicator of spontaneous termination of atrial fibrillation. 
