---
layout: default
---

# Session S42.7

## A Statistical Approach To Discrimination Of Patients At Risk Of Paroxysmal Atrial Fibrillation

## C. Marchesi, M. Paoletti

### Universit di Firenze
### Firenze, Italy

Short term prediction of Paroxysmal Atrial Fibrillation is a critical
issue because no validated rules have been so far proposed to define
consistently such an arrhythmia and because PAF signs are often masked
by other rhythm problems. Moreover usual difficulties of long term
signal monitoring, like baseline wander, noise and artifacts, must be
faced since they can heavily affect PAF detection. This study proposes
a statistical approach for detecting ECG records belonging to people
at risk of PAF. The signal processing procedure includes the
definitions of: a signal amplitude reference, an original non linear
operator to enhance wanted signal features, sequence of RR histograms
to detect sudden rhythm changes (irregular RR, ectopic beats). A
reliable amplitude reference is achieved by median filtering. In our
implementation an hybrid FIR-median filter has provided adequate
results in all the circumstances. The key operation is carried out by
a simple and effective quadratic operator, capable of tracking and
enhancing the significant wave fronts. An hybrid
sequential-combinatorial logic net drives the quadratic operator to
discriminate various events. Thus a reliable RR time series
(tachogram) is computed and analyzed by building sequences of
histograms. The diversity between successive beat distributions
appears to be correlated with the risk of developing PAF. This
approach, after tuning the statistics to the learning data set
provided by Physionet, gave the following results: 35 correct answers
(screening only,log number:20010427.124605).
