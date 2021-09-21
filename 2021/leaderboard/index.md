---
layout: 2021
---

# PhysioNet/CinC Challenge 2021 Results

This folder contains several files with the results of the 2021 PhysioNet/CinC Challenge.

You can find the scores of the 2021 Challenge entries on the 2021 PhysioNet/CinC Challenge hidden validation and hidden test sets for five lead combinations in these tables. The main metric that we use for ranking the results is the [Challenge scoring metric](https://physionetchallenges.org/2021/#scoring) to evaluate the algorithms of the Challenge entries and rank them to the macro-average of the Challenge metric score across all classes. The evaluation metrics were computed using the [evaluate_model.py](https://github.com/physionetchallenges/evaluation-2021) script.

We report the scores on the following hidden datasets: 

1. __Validation Set:__ Includes half of the recordings from the hidden CPSC and G12EC datasets.
2. __CPSC Test Set:__ The other half of the hidden CPSC 2018 dataset was used as CPSC test data.
3. __G12EC Test Set:__ The other half of the hidden Georgia 12-lead ECG Challenge (G12EC) Database was used as G12EC test data.
4. __Undisclosed Test Set:__ All recordings from an undisclosed source were used as Undisclosed test data.
5. __UMich Test Set:__ All recordings from the University of Michigan Database were used as UMich test data.
6. __Test Set:__ Includes recordings from half of the hidden CPSC (CPSC test) dataset, half of the hidden G12EC (G12EC test) dataset, full undisclosed test dataset and full UMich test dataset.

We also report the scores on the following lead combinations for the above hidden datasets: 

1. __12-leads:__ I, II, III, aVR, aVL, aVF, V1, V2, V3, V4, V5, V6
2. __6-leads:__ I, II, III, aVR, aVL, aVF
3. __4-leads:__ I, II, III, V2
4. __3-leads:__ I, II, V2
5. __2-leads:__ I, II

    We also represent __all-lead__ scores which were computed as the average value over the scores of the 12-leads, 3-leads and 2-leads combination sets of the hidden datasets.

To refer to these tables in your publication, please cite the following papers:

[Perez Alday EA, Gu A, Shah AJ, Robichaux C, Wong AI, Liu C, Liu F, Rad AB, Elola A, Seyedi S, Li Q, Sharma A, Clifford GD<sup>*</sup>, Reyna MA<sup>*</sup>. Classification of 12-lead ECGs: the PhysioNet/Computing in Cardiology Challenge 2020. Physiol Meas. 41 (2020). doi: 10.1088/1361-6579/abc960](https://iopscience.iop.org/article/10.1088/1361-6579/abc960).

[Reyna MA, Sadr N, Perez Alday EA, Gu A, Shah AJ, Robichaux C, Rad AB, Elola A, Seyedi S, Ansari S, Ghanbari H, Li Q, Sharma A<sup>*</sup>, Clifford GD<sup>*</sup>. Will Two Do? Varying Dimensions in Electrocardiography: the PhysioNet/Computing in Cardiology Challenge 2021. Computing in Cardiology 2021; 48: 1-4](https://physionetchallenges.org/2021/papers/cinc_draft.pdf).

You can find the tables with the information and scores of the 2021 PhysoNet/CinC Challenge entries in the following links:

1. The information details of all of the entries of the 2021 Challenge (official and unofficial entries) with columns representing information about the rules and whether the entries satisfied or did not satisfy the Challenge [rules](https://physionetchallenges.org/2021/#rules): 

    [Summary Information of 2021 Challenge Entries](https://docs.google.com/spreadsheets/d/1sSKA9jMp8oT2VqyX4CTirIT3m5lSohIuk5GWf-Cq8FU/edit?usp=sharing) for both unofficial and official entries.

2. The leaderboards of the 2021 Challenge entries on the hidden datasets for the official and unofficial entries separately, with each having six tabs for the 12-leads, 6-leads, 4-leads, 3-leads, 2-leads and all-leads (average of the scores on the 12-leads, 3-leads and 2-leads sets), representing the Challenge metric for validation set, separate test datasets and full test set. Please click on the tabs at the bottom of the leaderboards to see the different tracks of the channel.
 You can also find the running time of the entries during training and testing on validation set and full test set in these tables: 

    The leaderboard of the official entries which satisfied all of the [rules](https://physionetchallenges.org/2021/#rules) and were ranked in the Challenge:
    <iframe width='100%' height='500' src=https://docs.google.com/spreadsheets/d/1cTLRmSLS1_TOwx-XnY-QVoUyO2rFyPUGTHRzNm3u8EM/edit?usp=sharing;headers=false"></iframe>

    The leaderboard of the unofficial entries which did not satisfy all of the [rules](https://physionetchallenges.org/2021/#rules) and were not ranked in the Challenge: 
    <iframe width='100%' height='500' src=https://docs.google.com/spreadsheets/d/1iMKPXDvqfyQlwhsd4N6CjKZccikhsIkSDygLEsICqsw/edit?usp=sharing;headers=false"></iframe>

3. The final Challenge results represent more information with the following metrics for the Challenge entries: the area under the receiver operating characteristic (AUROC), area under the precision recall curve (AUPRC), _F_-measure scores and the [Challenge scoring metric](https://physionetchallenges.org/2021/#scoring) which were used to evaluate the Challenge entries and rank the official entries to the macro-average of the Challenge metric score across all classes. The accuracy metric is the fraction of correctly diagnosed recordings, i.e., all classes for the recording are correct. You can find the results of these metrics and the processing time of the entries on the validation and separate test datasets in these tables. Please click on the tabs at the bottom of the leaderboard to see the different tracks of the channel.
Each of these tables have five tabs for the scores on the 12-leads, 6-leads, 4-leads, 3-leads, and 2-leads combination sets:

    More results for the official entries of the Challenge:  
    <iframe width='100%' height='500' src="https://docs.google.com/spreadsheets/d/1Zf7A_w_Pn3A--jSOHinrSQ-FnJ8CrptzeHm6U9Gph4M/edit?usp=sharing;headers=false"></iframe>

    More results for the un official entries of the Challenge:  
    <iframe width='100%' height='500' src="https://docs.google.com/spreadsheets/d/1iPDrWi1SsWUO-VNMwQK8W63iA_mJgzDN-Z-mmhaGcN4/edit?usp=sharing;headers=false"></iframe>


---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
