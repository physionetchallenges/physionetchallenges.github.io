---
layout: default
---

# Session S91.6

## A Statistical Feature Based Approach to Predicting Termination of Atrial Fibrillation

### FM Roberts, RJ Povinelli

### Marquette University
### Milwaukee, WI, USA

The electrophysiological characteristics of the termination of atrial
fibrillation (AF) are poorly understood. Hence, the Computers in Cardiology
2004 Challenge is to better understand these characteristics. The challenge is
two-fold. The first part is to identify features in ECG signals that
distinguish non-terminating from immediately terminating AF. The second part is
to differentiate between AF that terminates immediately and AF that terminates
in one minute.

The challenge dataset consists of 30 one-minute ECG records. All records are
characterized by AF with 10 records of non-terminating AF, 10 records of
terminating in one minute AF, and 10 records of terminating immediately AF.
This paper presents two approaches to this problem. The first is a feature
based approach. The second uses a nonlinear signal classification method.

The feature based approach uses a statistical classifier to characterize the
temporal evolution of the following features: mean and standard deviation of
the R-R variability, power spectrum of the fibrillatory baseline after QRST
averaging and subtraction, and standard deviation of the fiduciary point of
normalized QRS complexes. Using leave-one-out cross validation on the training
set, this approach has a 80% accuracy on the non-terminating vs. immediately
terminating problem and a 70% accuracy on immediately terminating vs.
one-minute terminating problem.

The second approach is based on the reconstructed phase spaces (RPSs) of
frequency sub-banded ECG signals. Given sufficient dimension, a RPS provides a
method for reconstructing a state space description of the generating system,
which in this case is the cardiac system, from a signal sampled from that
system, which in this case is the ECG signal. As the cardiac system in AF
evolves through time towards termination, the state structure describing that
system will reflect this evolution. This time evolution is captured through
Gaussian Mixture Models of the RPSs. A Bayesian classifier is used to identify
previously unseen ECG signals. 
