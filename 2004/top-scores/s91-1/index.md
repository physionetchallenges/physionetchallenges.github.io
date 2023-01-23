---
layout: default
---

# Session S91.1

## Detection of Spontaneous Termination of Atrial Fibrillation

### B Logan, J Healey

### Hewlett Packard Labs
### Cambridge, MA, USA

We present techniques to predict various types of terminating and
non-terminating atrial fibrillation (AF) as required by the Computers in
Cardiology Challenge 2004. First, we describe an automatic technique to
distinguish non-terminating atrial fibrillation (AF) from terminating AF. Our
method models R-R intervals using mixtures of Gaussians and achieves an
accuracy of 100% on the training set and 76.7% on the challenge test set.
Second we describe a semi-automatic technique to distinguish immediately
terminating AF from AF which terminates one minute later. Our method first uses
a novel automatic technique to determine which two examples are recorded from
the same patient. Specifically, we convert each ECG record to a series of
frames and convert each frame to ceptral features. Such features are a
well-studied compact representation of the amplitude frequency spectrum. We
then model the features for each patient by a Gaussian model and use the
Kullback Liebler (KL) distance to determine the distance between each pair of
Gaussians and hence each pair of records. The closest records are hypothesized
as belonging to the same patient. This technique achieves 100% accuracy on the
training set and partitions the test set into 10 unique record pairs. To
complete the second task of the challenge, we then examine the R-R series for
each patient and determine by hand the likely time ordering of the records in
each pair, thus distinguishing which record terminates immediately. This
technique achieves an accuracy of 90% on the challenge test set. 
