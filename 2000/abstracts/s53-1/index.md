---
layout: default
---

# Session S53.1

## Detection Of Sleep Apnoea From Frequency Analysis Of Heart-Rate Variability
## M.J. Drinnan, J. Allen, P. Langley, A. Murray

### Freeman Hospital
### Newcastle upon Tyne, UK

Sleep apnoea is a serious clinical condition associated with high
blood pressure, infarction, stroke and a high accident rate. Patients
who suffer from sleep apnoea have recurrent nocturnal apnoeas. The aim
of this study was to assess the ability of an automated computer
algorithm to detect sleep apnoea from the characteristic pattern of
its recurrence.

Data from 35 training and 35 test subjects supplied by PhysioNet were
analysed. To produce an algorithm which did not require highly
accurate QRS detection, the QRS information supplied by PhysioNet were
used without checking for artifactual data. Each subject’s data were
converted to a sequence of beat intervals, which was then analysed by
Fourier transform. The study period varied from under 7 hours to over
10 hours. Patients with sleep apnoea tended to have a spectral peak
lying between 0.01 and 0.05/beat, with the width of the peak
indicating variability in the recurrence rate of the apnoea. In most
subjects the frequency spectrum immediately below that containing the
apnoea peak was relatively flat. The first visual analysis of a single
computed spectrum from each subject led to a correct classification
score of 28/30 (93%) (score reference 20000503.025229, entrant 11).
The ratio of the content of the two spectral regions was obtained by
dividing the area under the spectral curve between 0.01 and 0.05/beat
by the area between 0.005 and 0.01/beat, using a fixed threshold
(3.15) to classify the subjects automatically. The automated score for
the training set was 27/30 (90%); 17/20 Apnoea (A), 10/10 Normal (C).
The automated score for the test set was also 27/30 (90%) (score
reference 20000503.095731, entrant 11).
