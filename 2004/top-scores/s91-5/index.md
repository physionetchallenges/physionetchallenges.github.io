---
layout: default
---

# Session S91.5

## Computers in Cardiology/Physionet Challenge 2004: AF Classification Based on Clinical Features

## M Lemay, Z Ihara, JM Vesin, L Kappenberger

### Swiss Federal Institute of Technology
### Lausanne, Switzerland

The challenge 2004 involved the classification of ECG signals of AF patients
into three categories: types N, S, and T corresponding to AF episodes
terminating never, soon or immediately, respectively. In our study, 7 different
features were used, extracted by the experienced clinician among the authors
(LK) from the supplied training set. The first feature is the main orientation
of the F-waves in the atrial activity (AA). When AF terminates soon, P-waves
will reappear and F-waves are more organized, translating into a stable peak
direction of F-waves. The second feature relates to the RR intervals. Two
interesting phenomena were observed. First, when ventricles beat at high rate,
the AF seem to terminates soon, and second, when atria rhythm tries to return
to normal, the ventricular rhythm also changes. The third feature relates to
the intervals between F-waves. When AF front waves return to sinus rhythm, the
AA intervals decrease. The fourth feature is the amplitude of AA. When the AF
front waves are more organized, their amplitude perceived in the ECGs are
higher. The fifth feature used is the periodicity in the amplitude of AA. When
AF stops, slow variations appear in the AA amplitudes. The sixth feature
exploits the similarities among AAs in the two leads provided. During complete
AF, the wave fronts are not similar, but when the process slowly returns to
sinus rhythm, their shapes become similar then viewed from different point of
observation (leads). The final feature is the power in the high frequency range
of the AA segments. The F-waves close to a P-wave are steeper than the F-waves
in complete AF. Algorithms were developed to extract these features from the
provided ECG data. We used a support vector machine (SVM) with radial basis and
linear function kernel to classify these criteria. The SVM was trained by using
the data in the supplied training set, using a boundary decision rule while
keeping the number of subset as low as possible to avoid over fitting. When
applied to the training set, the application of the features used and the
derived decision rules resulted in 100% correct classification, demonstrating
that the features as such have potential. When applied to the test set we
obtained the following results: set A = [NNTNNTNNNNNNNTNTNTTNTNTTNNTNTN] and
set B = [STTTSSSSTSSSTTSSSSTS]. 
