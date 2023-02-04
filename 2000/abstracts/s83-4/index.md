---
layout: default
---

# Session S83.4

## Sleep Apnea Classification Based On Frequency Of Heart-Rate Variability
## J. McNames, A. Fraser, A. Rechtsteiner

### Portland State University
### Portland, OR, USA

We describe a procedure for classifying sleep apnea based solely on
the electrocardiogram signal. The first stage of the procedure
estimates the instantaneous heart rate. The second stage estimates the
fraction of signal power over a five-minute window that falls between
0.5 cycles per minute (cpm) and 2.2 cpm. If the fraction exceeds a
threshold, the one-minute interval at the center of the window is
classified as apnea.

We have written programs that implement this procedure and applied it
to the PhysioNet competition signals. Based on a visual comparison of
the filtered signals with a known set of 35 classified signals, we
were able to correctly classify 28 out of 30 patients in our initial
competition entry. Once each signal was classified as a whole, we were
able to correctly classify each minute in 13,626 out of 17,268 cases

The procedure was motivated by observing that in the labeled PhysioNet
competition signals, apnea was correlated with large low-frequency
oscillations in the oximeter signal and that similar oscillations
occurred in the heart rate, as estimated from the EKG signal. We
hypothesize that obstructive sleep apnea follows the cycle: 1. The
patient stops breathing. 2. After some time the oxygen level in the
blood falls. 3. The patient wakes up, breaths, and the blood oxygen
improves.

We developed our own algorithm for QRS detection and performed
substantial signal processing to remove outliers and to filter the
signals. In this paper we describe the signal processing we performed
to estimate the instantaneous heart rate and our classification
method. We also show that the variation in the amplitude of the S
portion of the QRS wave can be used to help classify the one-minute
intervals.
