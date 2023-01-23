---
layout: default
---

The paper introduced by this abstract was one of the two winning papers in the [PhysioNet/Computers in Cardiology Challenge 2005](/2005). The complete paper will be published in [Computers in Cardiology](https://cinc.org/) 2005. 

# Towards the Prediction of Ischemia Onset

## RJ Povinelli

***Marquette University***\
***Milwaukee, WI, USA***

The 2003 Computers in Cardiology Challenge was to develop methods of detecting ischemia based on transient ST changes in ECG signals. This study extends the 2003 Challenge by studying characteristics of the ECG signal before the onset of ischemia. The first hypothesis is that different types of ST changes (ischemic, heart rate, conduction change, and axis shift) can be differentiated using the ECG signal before the ST event. The second hypothesis is that ischemic ST episodes can be differentiated from non-ST events. The dataset used in this study is the complete Long Term ST (LTST) database, i.e. both the portion available for free on PhysioNet and the portion available for a fee. The studies are conducted using the free portion as a training set and the fee portion as a test set. Additionally, a 10-fold cross-validation performed, because it provides stronger statistical validation of the results and because the free and fee portion of the database appear to have different underlying distributions. To address the first hypothesis, we classify the ST events as labeled in the LTST database, using the ECG signal segment 30s to immediately before the start of a labeled event. To address the second hypothesis, a randomly generated second set of non-events is created, such that the non-events occur at least 5 minutes before and 5 minutes after an event annotated in the database. We classifying these non-events and LTST database labeled ischemic events, using the ECG signal segment 30s to immediately before the start of an event. Preliminary results from studying the first hypothesis show accuracies of over 70%, with chance being 50%, in differentiating ischemic from non-ischemic (heart rate, conduction change, and axis shift) ST changes. This was achieved using a reconstructed phase space and Gaussian Mixture Model approach. We will also present results of an approach using the Karhunen Lòeve Transform combined with a support vector machine. 
