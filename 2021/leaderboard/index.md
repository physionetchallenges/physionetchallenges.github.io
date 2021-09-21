---
layout: 2021
---

# PhysioNet/CinC Challenge 2021 Results

This folder contains the results of the 2021 PhysioNet/CinC Challenge on the 2021 PhysioNet/CinC Challenge hidden validation and hidden test sets for five lead combinations. 

Final scores for the 2021 Challenge:

- __Official entries__: [only Challenge metric scores of the official entries](https://docs.google.com/spreadsheets/d/1cTLRmSLS1_TOwx-XnY-QVoUyO2rFyPUGTHRzNm3u8EM/edit?usp=sharing) and [all scores of the official entries](https://docs.google.com/spreadsheets/d/1Zf7A_w_Pn3A--jSOHinrSQ-FnJ8CrptzeHm6U9Gph4M/edit?usp=sharing)
- __Unofficial entries__: [only Challenge metric scores of the unofficial entries](https://docs.google.com/spreadsheets/d/1iMKPXDvqfyQlwhsd4N6CjKZccikhsIkSDygLEsICqsw/edit?usp=sharing) and [all scores of the unofficial entries](https://docs.google.com/spreadsheets/d/1iPDrWi1SsWUO-VNMwQK8W63iA_mJgzDN-Z-mmhaGcN4/edit?usp=sharing)
- __Team eligibility table__: [here](https://docs.google.com/spreadsheets/d/1sSKA9jMp8oT2VqyX4CTirIT3m5lSohIuk5GWf-Cq8FU/edit?usp=sharing) (determines whether entries are official or unofficial)

Please see below for more information about these scores.

We report the scores on the [five lead combinations](https://physionetchallenges.org/2021/#data), 12-leads, 6-leads, 4-leads, 3-leads, and 2-leads. We also represent _all-lead_ scores in the leaderboards which were computed as the average value over the scores of the 12-leads, 3-leads and 2-leads combination sets of the hidden datasets. We report the scores on the following hidden datasets: 

1. _Validation Set:_ Includes half of the recordings from the hidden CPSC and G12EC datasets.
2. _CPSC Test Set:_ The other half of the hidden CPSC 2018 dataset was used as CPSC test data.
3. _G12EC Test Set:_ The other half of the hidden Georgia 12-lead ECG Challenge (G12EC) Database was used as G12EC test data.
4. _Undisclosed Test Set:_ All recordings from an undisclosed source were used as Undisclosed test data.
5. _UMich Test Set:_ All recordings from the University of Michigan Database were used as UMich test data.
6. _Test Set:_ Includes recordings from half of the hidden CPSC (CPSC test) dataset, half of the hidden G12EC (G12EC test) dataset, full undisclosed test dataset and full UMich test dataset.

You can find more information about the data [here](https://physionetchallenges.org/2021/#data).

The main metric that we use for ranking the results is the [Challenge scoring metric](https://physionetchallenges.org/2021/#scoring) to evaluate the algorithms of the Challenge entries and rank them to the macro-average of the Challenge metric score across all classes. The evaluation metrics were computed using the [evaluate_model.py](https://github.com/physionetchallenges/evaluation-2021) script.

In the above links, you find the tables with the information:

- The [only Challenge metric scores of the official entries](https://docs.google.com/spreadsheets/d/1cTLRmSLS1_TOwx-XnY-QVoUyO2rFyPUGTHRzNm3u8EM/edit?usp=sharing) and [only Challenge metric scores of the unofficial entries](https://docs.google.com/spreadsheets/d/1iMKPXDvqfyQlwhsd4N6CjKZccikhsIkSDygLEsICqsw/edit?usp=sharing) represent the Challenge metrics on the hidden datasets for the official and unofficial entries. You can also find the running time for training and testing on validation set and full test set in the tables. Please click on the tabs at the bottom of the leaderboards to see the different tracks of the channel for the 12-leads, 6-leads, 4-leads, 3-leads, 2-leads and all-leads (average of the scores on the 12-leads, 3-leads and 2-leads sets).

- The [all scores of the official entries](https://docs.google.com/spreadsheets/d/1Zf7A_w_Pn3A--jSOHinrSQ-FnJ8CrptzeHm6U9Gph4M/edit?usp=sharing) and [all scores of the unofficial entries](https://docs.google.com/spreadsheets/d/1iPDrWi1SsWUO-VNMwQK8W63iA_mJgzDN-Z-mmhaGcN4/edit?usp=sharing) represent more metrics: the area under the receiver operating characteristic (AUROC), area under the precision recall curve (AUPRC), _F_-measure scores and the [Challenge scoring metric](https://physionetchallenges.org/2021/#scoring). The official entries were ranked to the macro-average of the Challenge metric score across all classes. The accuracy metric is the fraction of correctly diagnosed recordings, i.e., all classes for the recording are correct. Please click on the tabs at the bottom for the scores on the 12-leads, 6-leads, 4-leads, 3-leads, and 2-leads combination sets.

- [Team eligibility table](https://docs.google.com/spreadsheets/d/1sSKA9jMp8oT2VqyX4CTirIT3m5lSohIuk5GWf-Cq8FU/edit?usp=sharing) contains information details for all of the 2021 Challenge entries (official and unofficial entries) and whether the entries satisfied or did not satisfy the Challenge [rules](https://physionetchallenges.org/2021/#rules).

To refer to these tables in your publication, please cite the following papers:

[Perez Alday EA, Gu A, Shah AJ, Robichaux C, Wong AI, Liu C, Liu F, Rad AB, Elola A, Seyedi S, Li Q, Sharma A, Clifford GD<sup>*</sup>, Reyna MA<sup>*</sup>. Classification of 12-lead ECGs: the PhysioNet/Computing in Cardiology Challenge 2020. Physiol Meas. 41 (2020). doi: 10.1088/1361-6579/abc960](https://iopscience.iop.org/article/10.1088/1361-6579/abc960).

[Reyna MA, Sadr N, Perez Alday EA, Gu A, Shah AJ, Robichaux C, Rad AB, Elola A, Seyedi S, Ansari S, Ghanbari H, Li Q, Sharma A<sup>*</sup>, Clifford GD<sup>*</sup>. Will Two Do? Varying Dimensions in Electrocardiography: the PhysioNet/Computing in Cardiology Challenge 2021. Computing in Cardiology 2021; 48: 1-4](https://physionetchallenges.org/2021/papers/cinc_draft.pdf).

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
