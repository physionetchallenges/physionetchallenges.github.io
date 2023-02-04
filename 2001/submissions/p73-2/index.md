---
layout: default
---

# Session P73.2
## Prediction Of Paroxysmal Atrial Fibrillation By Footprint Analysis
## C.-C. Yang

### National Yang-Ming University
### Taipei, Taiwan

This study presents a new, simple algorithm called footprint analysis
to predict risk and onset of paroxysmal atrial fibrillation (PAF) from
single channel surface electrocardiogram. The approach is based on
hypothesis that subject who has risk of PAF may display a specific
pattern in change of heart rate. This can be applied as footprint to
identify the risk and onset of PAF. The binary code (0,1) is assigned
according to difference of adjacent R-R intervals to represent
acceleration and deceleration of heart rate, respectively. A R-R
interval series is continuously calculated by a 17 heartbeats window,
which results in a set of 16-bit number. Each number represents a
specific pattern of heart rate variation. The goal of this algorithm
is to determine which number has higher possibility in PAF patients
for risk assessment, and to identify the number that only present
before onset of PAF. A set of number determined by the algorithm from
learning dataset was then applied as footprint to the testing dataset.
Score for event 1 was 33/50 (CinC Challenge 2001 entry
20010422.030701) and score for event 2 was 38/50 (CinC Challenge 2001
entry 20010423.045638). In conclusion, the successful of this
algorithm is to identify hidden pattern embedded in the highly
dimensional phase space of R-R intervals. Further evaluation in the
link between microscopic variation in R-R intervals and macroscopic
physiologic conditions may be useful in screening and predicting the
onset of atrial arrhythmias.
