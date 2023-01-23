---
layout: default
---

# Session S91.2

## Predicting Termination of Atrial Fibrillation with Time-Frequency Information

### F Nilsson, M Stridh, A Bollmann, L Sörnmo

### Lund University, Lund, Sweden

By recognizing and characterizing conditions under which atrial fibrillation is
likely to terminate spontaneously or be sustained, improved treatment of
sustained atrial fibrillation may result.

Our approach to predict termination is based on parameters derived from the
time-frequency distribution of the residual ECG signal, obtained by using
spatiotemporal cancellation of QRST complexes. The logarithmically scaled
short-time frequency distribution of the atrial fibrillatory activity is then
calculated using a non- uniform, short-time Fourier transform. The short-time
frequency spectrum can be modeled as a frequency-shifted and amplitude-scaled
version of a given spectral profile. Least squares estimation is employed to
determine the frequency shift and amplitude scaling. The spectral profile is
updated through exponential averaging of the short time frequency
distributions. Parameters characterizing the atrial fibrillation, such as
fundamental frequency, amplitude and shape of the fibrillation waves, are then
extracted from the spectral profile. The shape of the spectral profile is used
to distinguish atrial fibrillatory activity from sinus rhythm and noise;
occasional episodes of sinus rhythm and noise can therefore be excluded from
the analysis.

Classification of the ECG signals into immediately terminating,
soon-terminating and non-terminating atrial fibrillation is performed by
employing a decision tree technique taking atrial parameters, certain
ventricular rhythm parameters, and the number of ectopic beats into account.
Decision thresholds of the parameters are set by the ECG recordings of the
learning set which consists of atrial fibrillation with known termination
properties; the data set is provided by the PhysioNet/Computers in Cardiology
challenge.

This algorithm correctly classified 28 of the 30 ECGs of the learning set into
non-terminating/terminating atrial fibrillation. The corresponding result of
the test set was 26 of 30. 
