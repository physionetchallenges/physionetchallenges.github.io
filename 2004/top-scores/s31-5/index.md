---
layout: default
---

# Session S31.5

## Automated Prediction of Spontaneous Termination of Atrial Fibrillation from ECG

## D Hayn, K Edegger, D Scherr, P Lercher, B Rotman, W Klein, G Schreier
### ARC Seibersdorf research GmbH
### Graz, Austria

An algorithm for automated analysis of ECG signals featuring atrial
fibrillation (AF) has been developed. The algorithm was intended to
differentiate ECGs with AF that will spontaneously terminate from signals,
where it won’t. Development and validation of the algorithm has been done using
the AF Termination Challenge Database from PhysioNet.

The algorithm comprised of four major steps. First, QRS complexes were detected
using our existing biosignal processing system. In a second step all beats were
divided into classes of heartbeats with similar QRS morphologies. For each
class of heartbeat of each signal an averaged heartbeat was calculated. The
third step was the subtraction of the corresponding averaged heart beats from
the original sequence after alignment with each QRS complex in order to remove
the ventricular signal parts – i.e. the QRS complex and the T wave. Due to high
variations in QRS morphology caused by AF and due to the low sampling rate of
the signals, the QRS complexes themselves were thereafter blanked completely by
linear interpolation of the signal within a certain time region around each R
wave. The forth and final step was filtering the signal and calculating the
pseudo-periodogram using a short time Fourier transformation method. The
frequency corresponding to the highest spectral peak (major frequency) within
the pseudo-periodogram was compared to a predefined threshold value.

The algorithm has been developed using the whole learning-set as well as the
test-set-b of the AF Termination Challenge Database. We found that for ECGs
with a major frequency lower than 6.3 Hz AF was likely to terminate within up
to one minute. Our algorithm was able to separate 100% of the extended test
data set into the two groups “will terminate within up to one minute” and “will
not terminate within one hour”. Validation was done using the test-set-a of the
AF Termination Challenge Database. With our initial vote we reached a score of
90% (27/30) correctly classified signals for the test-set-a, a value which is
like to increase by fine-tuning the algorithm. 

