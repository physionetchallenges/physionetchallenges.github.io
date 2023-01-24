---
layout: default
---

# Session S41.2

## Classifying Simulated And Physiological Heart Rate Variability Signals

## N. Wessel, H. Malberg, A. Schirdewan, J. Kurths

### University of Potsdam
### Potsdam, Germany

Physiological data very often show complex structures which cannot be
interpreted immediately. Therefore, the simulation of such time series
seems to be extremely sophisticated. However, the classification of
physiological and simulated time series should be possible. Hence, the
data we are analysing here are the 50 time series from the challenge
organised by PhysioNet and Computers in Cardiology 2002. The main
intention of this contribution is to sketch our way of discriminating
both types of time series. Our approach is rather simple: we exclude
time series which show non-physiological behavior. The first decision
rule is “The distribution of the RR-intervals is too small”,
quantified by the Shannon-entropy of the histogram (exclusion if the
entropy is less than 2.8). Next decision rule “No beat-to-beat
variability changes day vs. night, rest vs. stress” quantified by the
24h variability of the parameter `pNNl10`, which gives the
percentage of beat-to-beat differences lower than 10 ms (exclusion if
`pNNl10`\<0.07). The final decision of the remaining time series was
made using the symbolic dynamics approach. The simulated time series
showed lower word variability than the physiological, which was
quantified by the parameter `wsdvar`. Using this rules we got an
score of 100 that means we could completely discriminate both time
series groups. Thus, the intricate interdependencies of variations at
different scales in heart rate variability data are still difficult to
simulate to mislead an experienced observer.
