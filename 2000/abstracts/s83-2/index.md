---
layout: default
---

# Session S83.2

## Recognition And Quantification Of Sleep Apnea By Analysis Of Heart-Rate Variability Parameters
## C. Maier, M. Bauch, H. Dickhaus

### University of Heidelberg
### Heilbronn, Germany

Objectives: This study was performed within the scope of the Computers
in Cardiology Challenge 2000. Our first aim was to discriminate
patients suffering from sleep apnea from healthy persons. Moreover, we
investigated the suitability of different heart rate variability (HRV)
parameters for quantification of sleep apnea.

Methods: After upsampling of the ECG from originally 100 Hz to 1000 Hz
by means of cubic spline interpolation and careful QRS-detection,
RR-Intervals were extracted and served as a basis for further
analysis. We investigated standard time domain HRV parameters (i. e.
SDNN, pNN50, SDSD and RMSSD). Moreover, the fractional spectral radius
(FSR) and an Entropy measure that both quantifiy the statistical
signal complexity based on Eigenvector-Analysis of the lag-embedded
RR-Series, were tested. All parameters were calculated on a
minute-by-minute basis. Due to the small sample size of only 35
persons in the tests set we abstained in a first step from complex
classificators and a high dimensional feature space, what could easily
overestimate the classification results. So far, our classification
procedure is based on simple thresholding.

Results for quantitative assessment of apnea: Although several
reproducible patterns in the behavior of the standard HRV parameters
as described above during and outside phases of apnea could be
observed by visual inspection of the annotated training set,
classification results were not very promising. The complexity
measures, however, showed a surprisingly high degree of correlation
with the annotations of the human expert. In a first attempt we
achieved a result of 13073/17268 = 75.71% of correct classifications
(entry 20000503.102146, entrant 9) on the tests set by simply
thresholding the median filtered FSR-values of each minute.

Results for apnea screening: Both complexity measures also proved as
excellently suited for apnea screening. Taking the median over all
one-minute-values of FSR in each record resulted in 28/30 = 93.33%
(entry 20000503.084214, entrant 9) of correct classifications.
