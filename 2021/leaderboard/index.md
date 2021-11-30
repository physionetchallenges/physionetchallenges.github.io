---
layout: 2021
---

# PhysioNet/CinC Challenge 2021 Results

This page contains the final scores for the 2021 PhysioNet/CinC Challenge: 
- __Official entries__: [only Challenge metric scores](https://docs.google.com/spreadsheets/d/1cTLRmSLS1_TOwx-XnY-QVoUyO2rFyPUGTHRzNm3u8EM/edit?usp=sharing) and [all scores](https://docs.google.com/spreadsheets/d/1Zf7A_w_Pn3A--jSOHinrSQ-FnJ8CrptzeHm6U9Gph4M/edit?usp=sharing)
- __Unofficial entries__: [only Challenge metric scores](https://docs.google.com/spreadsheets/d/1iMKPXDvqfyQlwhsd4N6CjKZccikhsIkSDygLEsICqsw/edit?usp=sharing) and [all scores](https://docs.google.com/spreadsheets/d/1iPDrWi1SsWUO-VNMwQK8W63iA_mJgzDN-Z-mmhaGcN4/edit?usp=sharing)
- __Team eligibility__: [here](https://docs.google.com/spreadsheets/d/1sSKA9jMp8oT2VqyX4CTirIT3m5lSohIuk5GWf-Cq8FU/edit?usp=sharing) (determines whether entries are official or unofficial)
- __Per-class metrics__: [here](https://docs.google.com/spreadsheets/d/1h8kTCOaizZCO_A9gSJs2XKOiC7RWGRRmBWSiSbw8H2Y/edit?usp=sharing) (for both official and unofficial entries)

These tables contain scores for the 12-lead, 6-lead, 4-lead, 3-lead, and 2-lead versions of the hidden validation and test sets. The [2021 Challenge webpage](../) and [2021 Challenge paper](../papers/cinc_draft.pdf) describes the [lead combinations](../#data) and the validation and test [data sources](../#data-sources). We also included an _all-lead_ score in the tables, which is computed as the mean of the 12-lead, 3-lead, and 2-lead scores.

We used the [Challenge scoring metric](../#scoring) that we implemented in the [evaluation code repository](https://github.com/physionetchallenges/evaluation-2021) to rank the official entries on the test set. We sorted the unofficial entries alphabetically by team name.

In these tables, you can find the following information:
- The [only Challenge metric scores of the official entries](https://docs.google.com/spreadsheets/d/1cTLRmSLS1_TOwx-XnY-QVoUyO2rFyPUGTHRzNm3u8EM/edit?usp=sharing) and [only Challenge metric scores of the unofficial entries](https://docs.google.com/spreadsheets/d/1iMKPXDvqfyQlwhsd4N6CjKZccikhsIkSDygLEsICqsw/edit?usp=sharing) spreadsheets provide the Challenge scoring metric on the hidden datasets as well as the the run time for training the models and running the trained models. Please click on the tabs at the bottom of the spreadsheets to switch between the 12-lead, 6-lead, 4-lead, 3-lead, 2-lead and all-lead (mean of the scores on the 12-lead, 3-lead, and 2-lead scores) scores.
- The [all scores of the official entries](https://docs.google.com/spreadsheets/d/1Zf7A_w_Pn3A--jSOHinrSQ-FnJ8CrptzeHm6U9Gph4M/edit?usp=sharing) and [all scores of the unofficial entries](https://docs.google.com/spreadsheets/d/1iPDrWi1SsWUO-VNMwQK8W63iA_mJgzDN-Z-mmhaGcN4/edit?usp=sharing) spreadsheets provide more evaluation metrics: the area under the receiver operating characteristic curve (AUROC), area under the precision recall curve (AUPRC), _F_-measure, accuracy, and the Challenge scoring metric scores. The accuracy metric is the fraction of correctly diagnosed recordings, i.e., all classes for the recording are correct. Please click on the tabs at the bottom of the spreadsheets to switch between the 12-lead, 6-lead, 4-lead, 3-lead, and 2-lead scores
- The [team eligibility table](https://docs.google.com/spreadsheets/d/1sSKA9jMp8oT2VqyX4CTirIT3m5lSohIuk5GWf-Cq8FU/edit?usp=sharing) contains information about all of the 2021 Challenge entries (official and unofficial entries), including satisfiaction of the [rules](../#rules) for rankings and prize eligibility.
- The [per-class metrics](https://docs.google.com/spreadsheets/d/1h8kTCOaizZCO_A9gSJs2XKOiC7RWGRRmBWSiSbw8H2Y/edit?usp=sharing) spreadsheet provides evaluation metrics (AUROC, AUPRC and  _F_-measure) per-class on the hidden test dataset for all (official and unofficial) entries, sorted alphabetically. Please note that per-class metrics are undefined for classes without labels belonging to that class. Please click on the tabs at the bottom of the spreadsheet to switch between the 12-lead, 6-lead, 4-lead, 3-lead, and 2-lead metrics.

To refer to these tables in your publication, please cite the following papers:

[Perez Alday EA, Gu A, Shah AJ, Robichaux C, Wong AI, Liu C, Liu F, Rad AB, Elola A, Seyedi S, Li Q, Sharma A, Clifford GD<sup>*</sup>, Reyna MA<sup>*</sup>. Classification of 12-lead ECGs: the PhysioNet/Computing in Cardiology Challenge 2020. Physiol Meas. 41 (2020). doi: 10.1088/1361-6579/abc960](https://iopscience.iop.org/article/10.1088/1361-6579/abc960).

[Reyna MA, Sadr N, Perez Alday EA, Gu A, Shah AJ, Robichaux C, Rad AB, Elola A, Seyedi S, Ansari S, Ghanbari H, Li Q, Sharma A, Clifford GD. Will Two Do? Varying Dimensions in Electrocardiography: the PhysioNet/Computing in Cardiology Challenge 2021. Computing in Cardiology 2021; 48: 1-4](../papers/cinc_draft.pdf).

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
