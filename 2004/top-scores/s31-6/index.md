---
layout: default
---

# Session S31.6

## Predicting the End of an Atrial Fibrillation Episode: The PhysioNet Challenge

## F Cantini, F Conforti, M Varanini, F Chiarugi, G Vrouchos

### CNR Institute of Clinical Physiology
### Pisa, Italy

Atrial fibrillation (AF) is the most common arrhythmia. Paroxysmal
(spontaneously terminated) atrial fibrillation (PAF) is, by evidence,
antecedent to sustained atrial fibrillation that requires a pharmacological or
external electrical intervention (cardioversion) to allow its termination. The
risks of sustained atrial fibrillation are, nevertheless, serious because it
predisposes to thromboembolism as a result of stasis and thrombus formation
within the atria that can cause stroke or other thromboembolic events. Thus,
the discrimination between paroxysmal and sustained atrial fibrillation and the
prediction of PAF termination can be invaluable in order to avoid useless
therapeutic interventions, to minimize the risks for the patient and to save
money when the health care costs are strictly monitored.

Data from 3 different learning sets provided by PhysioNet were analysed for a
total of 30 records. Each record is 1 minute length and was extracted by a
two-channel Holter ECG with sampling rate 128 Hz. An algorithm, based on
adaptive filtering, was developed to separate the atrial from the ventricular
activity, then the atrial activity was analysed in the frequency domain. For
each record the dominant atrial frequency (DAF) was evaluated and associated
with the average ventricular heart rate. A fully automated linear classifier
was developed to discriminate the cases of sustained AF from the cases of
paroxysmal AF and, for the latter, to evaluate their proximity to the
termination.

In the learning set for the event 1, 90% of the atrial fibrillations were
correctly classified as sustained or paroxysmal. In the learning set for the
event 2, 70% of the cases were correctly classified. The algorithm was then
assessed on the test set A (30 cases, for the event 1) provided by PhysioNet
for the CinC challenge with a score of 27/30 (for the time being, entry
20040416.045753, entrant 6). The algorithm for the event 2 was applied to the
test set B (20 cases, event 2) with a score of 18/20 (for the time being, entry
20040426.022624, entrant 6).

Further improvement can be done on the filter technique for a better evaluation
of the DAF trying to minimize the effects of signal artefacts and extrasystoles
in the adaptive filtering used. 
