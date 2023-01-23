---
layout: default
---

# Session S91.3

## ECG Signal Classification Based on Fractal Features

## PK Chakravorty, AN Esgiar

### Al Tahadi University
### Sirte, Libya

An attempt has been made to classify the ECG signals based only on fractal
parameters of a set. These are fractal dimension, mass dimension, and
lacunarities based on different moments of mass and are estimated by a new box
counting algorithm. We call it, True Box Counting method. The ADC outputs of
the ECG signals are treated as points of a fractal set embedded in Euclidean
(E^2) space. To avoid negative values the signals are shifted in the positive
quadrant. Since the ECG signals are not perfect random fractal sets, so the
lacunarity (Y) Vs. box size (X) plot is not a line parallel to X-axes and is
approximated (best fit) by a curve Y = a(X)^m, this yields two values 'a' and
'm' for lacunarity. Thus lacunarity based on each moment of mass (starting with
2) yields two values. For each ECG signal 16 fractal parameters -fractal
dimension, mass dimension and rest lacunarities parameters, up to eight th
moment of mass - are estimated. Lacunarities up to eight th moment of mass is
chosen arbitrarily. This set of fractal parameters constitute the feature set.
No scaling or feature selection is attempted. For classification, KNN
classifier based on "Euclidean distance" is used. Before classification,
cross-validation is done on the training set data and the best value of
parameter 'k' (k =3) is obtained. Based on above technique, each signal from
Test-Set A is classified and the classification ('N' type or 'T' type with
probability value) is obtained. For each individual, there are two signals, and
the following strategy is used for final classification. If both the signals
are "N" type then final classification is "N". If any one signal is "T" type
with probability greater than 0.5 then final classifications is "T". In case of
a tie in probability value of "T" and "N", final classification is “T”. With
this strategy, the score obtained in challenge 2004 for "Test Set A" is 22
i.e., 73.3%. This initial study demonstrated that fractal analysis technique
shows promise for automated analysis of ECG signals. 
