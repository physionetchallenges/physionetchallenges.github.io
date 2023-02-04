---
layout: default
---


# Session S42.5

## Screening And Prediction Of Atrial Fibrillation By Analysis Of Heart Rate Variability Parameters

## C. Maier, M. Bauch, H. Dickhaus

### University of Applied Sciences
### Heilbronn, Germany

Objectives: This study is performed within the scope of the Computers
in Cardiology Challenge 2001 on screening and prediction of atrial
fibrillation (AF) from the ECG. We investigate the suitability of
different measures quantifying heart rate variability (HRV) with
respect to both tasks. Methods: After upsampling the ECG from
originally 128 Hz to 1024 Hz (cubic splines) and QRS detection we
extracted RR-interval series which served as basis for further
analysis. Different HRV parameters (SDNN, pNN50, SDSD, RMSSD, signal
energy on different wavelet-scales, and six measures quantifying
statistical signal complexity based on time-delay embedding of the
interval series) were calculated from the RR-series on different
time-scales (1, 5, and 30 min). Moreover, we constructed a filter that
aims to remove intervals corrupted by premature beats from the
interbeat series and compared the results obtained from the filtered
series to that of the uncorrected. Since, in a first step, our
intention was to assess the suitability of each single parameter
individually, our classification is so far based on simple
thresholding using ROC analysis. We will later also combine
information of promising parameters using a polynomial classifier.
Results: In virtually all parameters, correction of the RR-interval
series for premature beats yielded worse results compared to the
series containing the original intervals. With respect to analysis on
different time-scales, generally better results were achieved on
shorter data segments at the end of the records, reflecting that
higher temporal proximity to the event of interest (onset of AF) seems
to enhance differences between the groups. However, no typical time
courses were observed. Whereas traditional time-domain HRV parameters
performed rather poorly in the recognition of AF-patients, they
achieved better results in the prediction-task. Here, pNN50 within the
last 5 min of each record classified 38/50 record-pairs correctly (log
number 20010501.144014). In the screening task, the complexity
measures were generally superior and reached a recognition rate of
33/50 (log number 20010430.132047, entrant 10). The ROC-plots indicate
that the information of those parameters is partly complementary,
promising improved results through feature combination.
