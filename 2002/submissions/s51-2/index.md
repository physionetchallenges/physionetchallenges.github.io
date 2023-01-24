---
layout: default
---

# Session S51.2

## Simulating Healthy Humans Heart Rate: A Model Using Symbolic Dynamics And Probabilistic Automaton

## C.C. Yang, C.H. Chang, S.S. Hseu, H.W. Yien

### Taipei Veterans General Hospital
### Taipei, Taiwan

Objectives: This study is performed within the scope of Computers in
Cardiology Challenge 2002 on simulating 24 hours RR interval time
series. Based on the ideas of symbolic dynamics and probabilistic
automaton, we construct a computational model to characterized complex
dynamics of healthy human heart rate.

Methods: Human cardiac dynamics are driven by complex nonlinear
interactions of two competing forces: sympathetic regulation increases
the heart rate and parasympathetic regulation decreases the heart
rate. For this type of intrinsically noisy system, it is useful to
simplify the dynamics via mapping the output to binary sequences,
where the increase and decrease of the interbeat interval are denoted
by 1 and 0, respectively. We further define a m-bit symbolic sequence
to characterize transition of symbolic dynamics. For simplest model of
2-bits sequence, it has 4 possible symbolic sequences including 11,
10, 00, and 01. Moreover, each symbolic sequence has 2 possible
transitions, for example, 1(0) can be transited to (0)0 which results
in decreasing RR intervals, or (0)1 in vice versa. To define the
mechanism of symbolic transition, we utilize concept of probabilistic
automaton in which the transition from current symbolic sequence to
next state takes place with a certain probability in a given range of
RR intervals. In final version of this model, we use 8-bits sequences
and a probability table according to RR time series of healthy humans
from Taipei Veterans General Hospital and PhysioNet. The resulting
generator comprises of the following major components: (1) the
symbolic sequence as state of RR dynamics, (2) the probability table
defines transitions between 2 sequences and (3) an absolute Gaussian
noise as increment of RR intervals.

Results: The generator reached a score of 0.689 in event 1 (entry
142), and we further achieved a score of 100 in event 2 (entry
20020425.062810)

In summary, our preliminary study on the model lends hope for using
ideas from symbolic dynamics and probabilistic automaton. Further
study is needed to examine the correlation with physiologic
mechanisms.
