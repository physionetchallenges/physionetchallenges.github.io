---
layout: default
---

# Session S83.5

## Detection Of Obstructive Sleep Apnea From Cardiac Interbeat Interval Time Series
## J.E. Mietus, C.-K. Peng, A.L. Goldberger
### Beth Israel Deaconess Medical Center
### Boston, MA, USA

We present a new automated method to diagnose and quantify high
density obstructive sleep apnea from single lead electrocardiograms.
This approach is based on the detection of the periodic oscillations
(typically in the range of 0.01 - 0.04 Hz.) in cardiac interbeat
intervals that are often associated with prolonged cycles of sleep
apnea. Our technique employs bandpass filtering and the Hilbert
transformation of the sinus interbeat interval time series to derive
the instantaneous frequencies and amplitudes of the time series. We
then apply a thresholding technique to the average values and standard
deviations of these frequencies and amplitudes (calculated over a
moving 5-minute window) and detect continuous 15-minute sequences of
those windows that lie within threshold values. This method was
developed using polysomnographic and normal sinus rhythm databases
together with the Computers in Cardiology (CinC) sleep apnea training
dataset (all available at www.physionet.org). When applied to the CinC
test dataset data, our algorithm correctly classified 27 out of 30
cases (90%), including both sleep apnea and normal subjects. Further,
our algorithm correctly identified the presence or absence of sleep
apnea in 14271 out of a total 17268 minutes (82.6%) of data from the
test set. This method may be useful in screening for severe sleep
apnea and for monitoring response to therapies.

Entry 20000427.145502 : score 27/30

Entry 20000427.145520 : score 14271/17268.
