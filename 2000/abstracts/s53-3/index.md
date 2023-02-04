---
layout: default
---

# Session S53.3

## Global Waveform Delineation For RR Series Estimation: Detecting The Sleep Apnea Pattern
## C. Marchesi, M. Paoletti, S. Di Gaetano

### University of Firenze
### Firenze, Italy

Sleep Apnea (SA) forces on the time series of RR intervals (tachogram)
a behavior very close to the time domain pattern associated with the
Valsalva maneuver apnea. Thus, in principle, methods of analysis of
the tachogram obtained during autonomic tests can be extended to
documenting SA episodes. In the experience of the authors a contour
plot in the time-frequency domain is one of the examples of methods
possibly well suited to assist in visual SA detection. This paper is
rather dealing with automatic quantitative detection of SA episodes.
According to the above SA interpretation, we propose an algorithm for
SA time domain extraction from a single lead ECG based on following
scheme: a) Generating a tachogram as accurate and precise as possible,
even when it is derived from a low sampling rate sampled signal; b)
Improving signal to noise ratio, SA pattern playing as signal and
regular rhythm as noise; c) Detecting SA episodes on the preprocessed
tachogram. As far as point a) we propose a model based beat
delineation approach. The QRS global curve fitting provided by the two
parameters Gamma density function is a key-solution to obtain an
accurate beat delineation, even in poorly sampled signals. In fact,
the mathematical model fitting the raw data improves time reference
stability since it captures and learns the shape of the wanted event;
b) Tachogram preprocessing is basically done with a double moving
average process: the first provides to de-trend data, giving the noisy
tachogram an amplitude reference, the second filters the high
frequency regular rhythm component; c) SA detection performance
results to be improved by a final transformation aimed at enhancing
discrimination between regular rhythm and SA: from the curve-length
concept a non linear estimation of the SA pattern provides the
criterion for a threshold based detection. The analysis of the ECG
records of the CinC challenge obtained (for the time being) the score
of 27/30, ref#20000428.111921 (.Dg99StC).
