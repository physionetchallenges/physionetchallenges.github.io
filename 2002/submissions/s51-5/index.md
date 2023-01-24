---
layout: default
---

# Session S51.5

## Dynamic Features Of The Normal Heart Rate Variability

## T. Smuc, I. Maric, G. Bosanac, D. Gamberger, N. Bogunovic, G. Krstacic

### Rudjer Boskovic Institute
### Zagreb, Croatia

Objectives: The set of new features, focussed on different dynamic
properties of the heart rate variability, was defined and investigated
with a primary objective to discriminate between real and synthetic
heart beat signals, which was the subject of CinC 2002 challenge.

Methods: Among a larger number, several features turned out to have
high discriminative value: A) Inter/intra signal power spectrum
similarity: One of the features was Fourier power spectrum of entire
signal. Most of the synthetic signals originating from the same
generator, has highly similar Fourier spectra, despite different
footprint in the time domain. Similarly, real signals express
significant variability of the spectra during the day, which is not
the case for most of the synthetic ones. B) Average R-R interval
changes: One of the general features describing well the average R-R
interval dynamics is the average change of the R-R interval length
between two consecutive beats related to the specific length of the
first R-R interval. Typical for the real signals is that the average
interval changes are considerably smaller and positive for shorter
intervals and large and negative for larger intervals. C) Short range
slowing down and speeding-up characteristic: This feature deals with
heart rate dynamics over the short range of beats, averaged for the
whole signal. For all the real signals analyzed in the learning phase,
slowing down of the heart is on the average faster than speeding up.
D) Complexity of State Transitions: We have defined general
state-numbers uniquely characterizing the state of consecutive RR
intervals: a sequence of either accelerating, decelerating or constant
length R-R intervals. Number of transitions from one state to another
is used as a measure of complexity of the heart rate variability.
Synthetic R-R time series show significantly lower complexity in state
transitions than the real series.

Results: Combining this set of features in a voting scheme showed
large correlation (agreement) in attribution of signals, between
different features, resulting in a very high classification accuracy
on the challenge set.
