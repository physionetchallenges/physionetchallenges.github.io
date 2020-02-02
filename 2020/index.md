---
layout: default
---

# Classification of 12-lead ECGs: the PhysioNet/Computing in Cardiology Challenge 2020

# Introduction

The electrocardiogram (ECG) is a non-invasive representation of the electrical activity of the heart from electrodes placed on the surface of the torso. The standard 12-lead ECG has been widely used to diagnose a variety of cardiac abnormalities such as cardiac arrhythmias, and predicts cardiovascular morbidity and mortality [Kingfield et al, 2007](http://www.onlinejacc.org/content/49/10/1109.abstract). The early and correct diagnosis of cardiac abnormalities can increase the chances of successful treatments [Adams et al, 2007](https://www.ahajournals.org/doi/full/10.1161/strokeaha.107.181486). However, manual interpretation of the electrocardiogram is time-consuming, and requires skilled personnel with a high degree of training [Bickerton et al, 2019](https://www.magonlinelibrary.com/doi/abs/10.12968/bjca.2019.14.3.123).

Automatic detection and classification of cardiac abnormalities can assist physicians in the diagnosis of the growing number of ECGs recorded. Over the last decade, there have been increasing numbers of attempts to stimulate 12-lead ECG classification. Many of these algorithms seem to have the potential for accurate identification of cardiac abnormalities. However, most of these methods have only been tested or developed in single, small, or relatively homogenous datasets. The PhysioNet/Computing in Cardiology Challenge 2020 provides an opportunity to address this problem by providing data from a wide set of sources. 

# Objective
The goal of the 2020 Challenge is to identify the clinical diagnosis from 12-lead ECG recordings.

We ask participants to design and implement a working, open-source algorithm that can, based only on the clinical data provided, automatically identify the cardiac abnormality or abnormalities present in each 12-lead ECG recording. The winners of the Challenge will be the team whose algorithm gives predictions with the highest score for the patients in the hidden test set.

# Data

The data for this Challenge are from multiple sources:
1. Southeast University, China, including the data from the China Physiological Signal Challenge 2018.
2. Centre for Cardiometabolic Risk Reduction in South-Asia (CARRS) study, India
3. A diverse population in the USA.

The initial training set is the public data used in the [China Physiological Signal Challenge in 2018 (CPSC2018)](http://2018.icbeb.org/), held during the 7th 
International Conference on Biomedical Engineering and Biotechnology in Nanjing, China.

CPSC2018: The training set consists of 6,877 (male: 3,699; female: 3,178) 12-ECG recording lasting from 6 seconds to 60 seconds. Each recording was sampled at 500 Hz. All data is provided in [WFDB format](https://www.physionet.org/physiotools/wpg/wpg_35.htm) with a MATLAB v4 file and a header containing patient sex, age, and diagnosis (Dx) information at the end of the header file.

Each ECG recording has one or more labels from one normal sinus rhythm type and eight abnormal types:
1. Normal sinus rhythm (Sinus) 
2. Atrial fibrillation (AF)
3. First-degree atrioventricular block (I-AVB)
4. Left bundle branch block (LBBB)
5. Right bundle branch block (RBBB)
6. Premature atrial contraction (PAC)
7. Premature ventricular contraction (PVC)
8. ST-segment depression (STD)
9. ST-segment elevation (STE)

For example, the following header indicates that the label is RBBB:
 #Age: 46
 #Sex: Male
 #Dx: RBBB
 #Rx: Unknown
 #Hx: Unknown
 #Sx: Unknown

The training data can be downloaded from a link provided after you register for the Challenge. For verifying you have downloaded correctly the file, the MD5 hash is 8c8c9c3dd5f3bb973c366f50b86f9d43.

We are not planning to release the test data, including after the end of the Challenge. Requests for the test data will not receive a response. We do not release test data to prevent overfitting on the test data. We will entertain requests to run code on the test data after the Challenge on a limited basis based on publication necessity and capacity. (The Challenge is staged by volunteers.)

# Registering for the Challenge and Conditions of Participation 

To participate in the Challenge, you must register here, providing the full names, affiliations and official email addresses of your entire team. The details of all authors must be exactly the same as the details you use to submit your abstract to Computing in Cardiology in April. You may add (but not subtract) authors later by emailing Challenge [at] PhysioNet.org. 





[Back](../index.html)
