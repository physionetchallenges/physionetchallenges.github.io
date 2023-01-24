---
layout: default
---

# Session S41.1

## A Method For Characterising The Human RR Tachogram To Identify Normal Circadian Variation

## G.D. Clifford, P.E. McSharry

### University of Oxford
### Oxford, UK

A typical 24-hour RR tachogram derived from the electrocardiogram of a
normal healthy human is characterised by a few dominant frequency
components which, together with their amplitudes and the local mean RR
interval, typically change slowly over a period of minutes. Within
such segments, cardiovascular activity is assumed to be almost
stationary and frequency domain analysis is often employed. A shift in
cardiovascular state is associated with a change in both the local
mean RR interval and the relative contributions of the component
frequencies. Such state switching is often accompanied by changes in
physical or mental activity and therefore may be an indicator of the
circadian activity of a subject.

Recent clinical studies have indicated that aspects of circadian
activity in humans are linked to long term health indicators such as
cardiovascular metrics. The authors present methods for describing and
quantifying these circadian changes as an aid to detecting normal
human cardiovascular activity (and therefore deviations from
normality).

Furthermore, the incidences of ectopy and artefact as a function of
time of day, heart rate and state changes for normal subjects are
investigated. Results show that artefact is significantly correlated
with state change and heart rate in normal humans, whereas ectopy
exhibits no significant relationship, with an ectopic beat occurring,
on average, once an hour. Artefact is therefore shown to be a source
of information which can aid identification of state changes and
facilitates abnormality detection.

A scoring system is proposed that correctly identifies a significant
proportion of the real (normal) and artificial RR interval time series
in event 2 of the Physionet/Computers in Cardiology Challenge 2002
(entry number 12). This paper forms the basis of the reasoning behind
an accompanying paper ‘A Method for generating synthetic RR
tachograms of normal humans over 24-hours’ and entry number 201 in
event 1 of the Challenge.

# Session S51.1

## A Method For Generating Synthetic RR Tachograms Of Normal Humans Over 24-Hours

## P.E. McSharry, G.D. Clifford

### University of Oxford
### Oxford, UK

An algorithm that generates realistic synthetic 24-hour RR tachograms
by including both cardiovascular interactions and transitions between
physiological states is presented. Fluctuations of the beat to beat RR
intervals of a normal healthy human over 24-hours are known to exhibit
variability on a number of different time scales. Short range
variability due to Mayer waves and RSA are incorporated into the
algorithm using a power spectrum with given spectral characteristics
described by its low frequency and high frequency components
respectively. Longer range fluctuations arising from transitions
between physiological states are generated using switching
distributions extracted from real data. These physiological states,
including sleep states, are specified using RR intervals with
particular means and trends. An analysis of ectopic beat and artefact
incidence in an accompanying paper (“A method for characterising the
human RR tachogram to identify normal circadian variation”) is used
to provide a mechanism for generating realistic ectopy and artefact.
Ectopic beats are added with an independent probability of one per
hour. Artefacts are included with a probability proportional to mean
heart rate within a state and increased for state transition periods.
This algorithm provides RR tachograms that are similar to those in the
MIT-BIH Normal Sinus Rhythm Database. The resulting synthetic RR
interval generator has been submitted to part 1 of the
Physionet/Computers in Cardiology Challenge 2002 with entry number
201.
