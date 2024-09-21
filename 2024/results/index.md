---
layout: after_2015
---

# Results for the 2024 Challenge

This page contains the scores for the 2024 PhysioNet Challenge.

During the course of the Challenge, teams submitted entries with their approaches, and we trained and evaluated each entry on the [Challenge data](../#data). The training data were public, and the hidden data were hidden.

During the [unofficial and official phases](../#rules) of the Challenge, we trained each entry on the training set, and we [scored](../#scoring) each entry on a subset of the hidden data. After the official phase, each team selected one entry for evaluation on all of the hidden data, and we evaluated these entries on all of the hidden data.

Teams that satisfied all of the [Challenge rules](../#rules) were eligible for rankings and prizes as official Challenge entries. Teams that did not satisfy one or more of the rules were not eligible for rankings or prizes as unofficial Challenge entries. (Both the official and unofficial entries are from the official phase of the Challenge.)

- [Team summary table](team_summary_table.tsv): summary of the teams that participated in the 2024 Challenge. This table includes ranking and prize eligibility information.
- Scores and rankings (sorted by rank) for __official entries, i.e., eligible for rankings__: [digitization](official_scores_digitization.tsv) and [classification](official_scores_classification.tsv) scores
- Scores (sorted alphabetically by team name) for __unofficial entries, i.e., not eligible for rankings__: [digitization](unofficial_scores_digitization.tsv) and [classification](unofficial_scores_classification.tsv) scores

The score tables include signal-to-noise ratios (SNR) scores for the digitization task and macro _F_-measure scores for the classification tasks. All scores are on the hidden data. The leaderboard scores are scores reported during the official phase on color and black-and-white scans of paper ECGs from the PTB-XL data. The other scores are scores for models retrained on the full test set and evaluated on variants of the paper ECGs from the PTB-XL data, including scans and photographs of clean, stained, and deteriorated ECG papers and photographs of computer monitors showing ECGs.

The [Challenge webpage](../) and [Challenge description paper](../papers/) describe the Challenge. Please cite the [Challenge data paper and the Challenge description paper](../papers/) when describing the Challenge. 