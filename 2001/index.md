---
layout: default
---

# Predicting Paroxysmal Atrial Fibrillation/Flutter: The PhysioNet/Computing in Cardiology Challenge 2001 

### George Moody

## Announcements

**Results from the Computers in Cardiology Challenge 2001** (Sept. 26,
2001, midnight)

Final scores have been posted for the [Computers in Cardiology Challenge
2001](.). Thanks to all who participated!

**Computers in Cardiology Challenge 2001** (March 1, 2001, midnight)

Can paroxysmal atrial fibrillation be predicted? PhysioNet and
[Computers in Cardiology 2001](http://www.cinc.org/) challenge you to
develop and evaluate a method for doing so, in [CinC Challenge
2001](.), the second in an annual series of open contests
aimed at catalyzing research, friendly competition, and wide-ranging
collaboration around this clinically important problem. Prizes will be
awarded to the most successful participants. **Update (21 September):
The challenge has ended, and no additional entries will be accepted.**.
You may still obtain unofficial scores if you wish to try the challenge.

### Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [Moody, G., Goldberger, A., McClennen, S., Swiryn, S. (2001). Predicting the Onset of Paroxysmal Atrial Fibrillation:
The Computers in Cardiology Challenge 2001](http://ecg.mit.edu/george/publications/challenge-cinc-2001.pdf).
- The PAF Prediction Challenge Database: [Moody GB, Goldberger AL, McClennen S, Swiryn SP. Predicting the Onset of Paroxysmal Atrial Fibrillation: The Computers in Cardiology Challenge 2001. Computers in Cardiology 28:113-116 (2001).](https://www.cinc.org/archives/2001/pdf/113.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

Following the success of the [first Computers in Cardiology
Challenge](/2000/), we are
pleased to offer a new challenge from PhysioNet and [Computers in
Cardiology 2001](http://www.cinc.org/). The challenge is to develop a
fully automated method to predict the onset of paroxysmal atrial
fibrillation/flutter (PAF), based on the ECG prior to the event. The
goal of the contest is to stimulate effort and advance the state of the
art in this clinically significant problem, and to foster both friendly
competition and wide-ranging collaborations.

### Data for development and evaluation

PhysioNet provides free access to a set of data to be used for
development and evaluation of algorithms. The [PAF Prediction Challenge
Database](https://physionet.org/content/afpdb/1.0.0/)
consists of 100 pairs of half-hour ECG
recordings. Each pair of recordings is obtained from a single 24-hour
ECG. Subjects in group A experienced PAF; for these subjects, one
recording ends just before the onset of PAF, and the other recording is
distant in time from any PAF (there is no PAF within 45 minutes before
or after the excerpt). Subjects in group N do not have PAF; in these,
the times of the recordings have been chosen at random.

The database is divided into a *learning set* and a *test set* of equal
size, each containing approximately equal numbers of subjects from
groups A and N. The classifications of the recordings in the learning
set are provided; those for the test set will be revealed after the
conclusion of the challenge.

### Events and scoring

We will award prizes of US\$500 to the most successful entrant in each
of two events:

**Event 1: PAF screening**
:   Event 1 is intended to determine if subjects in group A can be
    distinguished from those in group N. (In other words, can
    individuals at risk of PAF be identified within a larger population,
    based on their ECGs?) The number of correctly classified subjects (0
    to 50) is the event 1 score.

**Event 2: PAF prediction**
:   Event 2 is intended to determine if subjects in group A have
    distinctive and detectable changes in their ECGs immediately before
    PAF. (In other words, is the imminent onset of PAF predictable in an
    individual known to be at risk of PAF?) A successful method for
    doing so should be able to determine which record of each pair of
    group A records immediately precedes PAF. If the identities of the
    group A records were known, it would be sufficient to classify these
    records only; since the goal of event 1 is to identify group A,
    however, we have not provided this information! Entrants in event 2
    of the challenge must therefore classify exactly one of each pair of
    records in the test set as `A` (defined as “immediately
    preceding PAF, if the patient belongs to group A”), and the other
    as `N` (defined as “not immediately preceding PAF”). One
    point is awarded for each correctly classified record pair, so that
    the event 2 scores range from $$n$$ to 50 (the lower bound is $$n$$, the
    number of subjects in group N, because the group N subjects are
    always considered correctly classified).

If a tie occurs in either event, the date of the submission is the
tiebreaker.

### How to enter

To enter the competition:

1.  Develop an algorithm for classifying the test set recordings. The
    algorithm must perform this task unaided (manual and semiautomated
    methods are not eligible).
2.  Submit your classifications to PhysioNet for scoring.
3.  Submit an abstract with a concise description of your approach and
    results to [Computers in Cardiology 2001](http://www.cinc.org/).
    (**Deadline: 1 May 2001**). Please submit your abstract using the
    category **ECG: Arrhythmia**.

If your abstract is accepted, you will be expected to prepare a
four-page paper for presentation during the conference and publication
in the conference proceedings. We welcome and encourage contributions to
PhysioNet of software developed during this competition.

If you wish to improve your score, you may revise your entry and submit
it again for scoring. The number of submissions is limited (you will be
allowed six entries, which may be all in one event, or divided between
the two events as you wish). If you wish to submit additional entries,
the autoscorer will enforce a waiting period, which is 24 hours for the
seventh entry and doubles for every subsequent entry.

If you have submitted an abstract to Computers in Cardiology 2001 on or
before 1 May 2001, you are eligible for awards based on any scores you
receive before the challenge deadline of noon GMT on Friday, 21
September 2001.

### Links

-   [PAF Prediction Challenge
    Database](https://physionet.org/content/afpdb/1.0.0/). The entire database
    (both learning and test sets) is available for downloading here.
-   [Predicting Onset of Atrial
    Fibrillation](paf).
    A brief overview of the challenge problem and its clinical
    significance, including a bibliography with links to a collection of
    useful references (your suggestions for additions to this collection
    are welcome).
-   [Obtaining CinC Challenge 2001
    Scores](challenge).
    How to prepare and submit your results to the autoscorer. (Although
    the competition has ended, you may still submit your results for
    unofficial scoring.)
-   [Computers in Cardiology 2001](http://www.cinc.org/) This is the
    conference web site, which includes an on-line form for composing
    and submitting an abstract.

### Results

The top scorers in the 2001 challenge were announced during the 25
September plenary session of Computers in Cardiology in Rotterdam. The
top score and the award in event 1 was obtained by Günther Schreier and
colleagues of the Austrian Research Centers Seibersdorf (Graz, Austria).
In event 2, the top score was obtained by Wei Zong and colleagues at the
Harvard-MIT Division of Health Sciences and Technology (Cambridge,
Massachusetts, USA); because this entry came from one of the PhysioNet
core research groups, however, it was unofficial, and the award in event
2 was given to the team with the highest official score, who were once
again Günther Schreier and colleagues. We congratulate and thank all of
the participants in this challenge.

The immediate goal of the Computers in Cardiology Challenge 2001 was to
develop a fully automated method to predict the onset of paroxysmal
atrial fibrillation/flutter (PAF), based on the ECG prior to the event.
Entrants developed and tested methods using a database created for this
challenge.

The test set of the [PAF Prediction Challenge Database](https://physionet.org/content/afpdb/1.0.0/)
consists of 50 pairs of half-hour ECG recordings. Each pair of
recordings is obtained from a single 24-hour ECG. Subjects in group A
experienced PAF; for these subjects, one recording ends just before the
onset of PAF, and the other recording is distant in time from any PAF
(there is no PAF within 45 minutes before or after the excerpt).
Subjects in group N do not have PAF; in these, the times of the
recordings have been chosen at random. Entrants were told that between
20 and 30 of the 50 subjects belong to each group; the exact size of
each group (28 in group A, 22 in group N) was disclosed only after the
conclusion of the challenge in September.

Brief descriptions of the methods used can be viewed by following the
links in the tables below to abstracts submitted by many of the entrants
for presentation at Computers in Cardiology 2001; please note that these
abstracts were written no later than May 2001, and do not mention
results achieved since then. For details on the CinC Challenge 2001,
follow the links at the bottom of this page.

**Event 1 (PAF Screening)**

Event 1 was intended to determine if subjects in group A can be
distinguished from those in group N. (In other words, can individuals at
risk of PAF be identified within a larger population, based on their
ECGs?) The number of correctly classified subjects (0 to 50) is the
event 1 score. The best methods were able to achieve roughly 80%
classification accuracy on the test set.

The top scores in event 1 are:


| Score          | Entrant                                                                                                                                                        | Date         | Entries |
| 41/50<br />82% | [G Schreier, P Kastner, and W Marko](/files/challenge-2001/1.0.0/s42-6.htm)<br />Austrian Research Centers Seibersdorf, Graz, Austria                          | 17 September | 8       |
| 40/50<br />80% | [W Zong and RG Mark](/files/challenge-2001/1.0.0/s42-4.htm)<br />Harvard-MIT Division of Health Sciences and Technology, Cambridge, MA, USA (unofficial entry) | 12 September | 7       |
| 37/50<br />74% | R Sweeney and colleagues<br />Guidant Corp., St. Paul, MN, USA                                                                                                 | 8 May        | 3       |
| 36/50<br />72% | [C Maier, M Bauch, and H Dickhaus](/files/challenge-2001/1.0.0/s42-5.htm)<br />University of Applied Sciences, Heilbronn, Germany                              | 19 September | 2       |
| 35/50<br />70% | [C Marchesi and M Paoletti](/files/challenge-2001/1.0.0/s42-7.htm)<br />Università di Firenze, Firenze, Italy                                                  | 27 April     | 1       |
| 34/50<br />68% | [KS Lynn and HD Chiang](/files/challenge-2001/1.0.0/p73-3.htm)<br />Cornell University, Ithaca, NY, USA                                                        | 28 April     | 6       |
| 33/50<br />66% | [CC Yang](/files/challenge-2001/1.0.0/p73-2.htm)<br />National Yang-Ming University, Taipei, Taiwan                                                            | 21 April     | 4       |
| 33/50<br />66% | JA Kors<br />Erasmus University, Rotterdam, The Netherlands                                                                                                    | 10 July      | 2       |
| 32/50<br />64% | [P de Chazal and C Heneghan](/files/challenge-2001/1.0.0/s42-2.htm)<br />University of New South Wales, Sydney, Australia                                      | 13 September | 1       |
| 32/50<br />64% | R Loesch                                                                                                                                                       | 14 September | 6       |

Each entrant’s best score is shown, along with the date when they
achieved that score. Many entrants submitted multiple entries, and the
‘Entries’ shown indicate how many entries were submitted by each
entrant up to and including the one that scored highest (later entries,
and entries that did not receive scores because of formatting errors
were not counted); this gives some sense of how much ‘tuning’ may have
taken place. The entry noted as ‘unofficial’ came from one of the
PhysioNet core research groups, and was therefore not eligible for
awards, although the entrant followed all of the rules of the
competition.

**Event 2 (PAF Prediction)**

Event 2 was intended to determine if subjects in group A have
distinctive and detectable changes in their ECGs immediately before PAF.
(In other words, is the imminent onset of PAF predictable in an
individual known to be at risk of PAF?) A successful method for doing so
should be able to determine which record of each pair of group A records
immediately precedes PAF. If the identities of the group A records were
known, it would be sufficient to classify these records only; since the
goal of event 1 was to identify group A, however, we did not provide
this information! Entrants in event 2 of the challenge therefore were
required to classify exactly one of each pair of records in the test set
as `A` (defined as “*immediately preceding PAF, if the patient
belongs to group A*”), and the other as `N` (defined as “*not
immediately preceding PAF*”). One point was awarded for each
correctly classified record pair, so that the raw event 2 scores range
from *22* to 50 (the lower bound is *22*, the number of subjects in
group N, because the group N subjects are always considered correctly
classified). In the table below, the scores have been adjusted by
subtraction of 22 from the raw scores, so that the adjusted scores can
range between 0 and 28.

The top scores in event 2 are:

 
| Score          | Entrant                                                                                                                                                                  | Date         | Entries |
| 22/28<br />79% | [W Zong and RG Mark](/files/challenge-2001/1.0.0/s42-4.htm)<br />Harvard-MIT Division of Health Sciences and Technology, Cambridge, MA, USA (unofficial entry)           | 1 May        | 1       |
| 20/28<br />71% | [G Schreier, P Kastner, and W Marko](/files/challenge-2001/1.0.0/s42-6.htm)<br />Austrian Research Centers Seibersdorf, Graz, Austria                                    | 19 August    | 2       |
| 19/28<br />68% | [P de Chazal and C Heneghan](/files/challenge-2001/1.0.0/s42-2.htm)<br />University of New South Wales, Sydney, Australia                                                | 28 April     | 1       |
| 19/28<br />68% | [C Maier, M Bauch, and H Dickhaus](/files/challenge-2001/1.0.0/s42-5.htm)<br />University of Applied Sciences, Heilbronn, Germany                                        | 11 September | 3       |
| 18/28<br />64% | [KS Lynn and HD Chiang](/files/challenge-2001/1.0.0/p73-3.htm)<br />Cornell University, Ithaca, NY, USA                                                                  | 29 April     | 2       |
| 17/28<br />61% | [P Langley, D di Bernardo, J Allen, E Bowers, F Smith, S Vecchietti, and A Murray](/files/challenge-2001/1.0.0/s42-3.htm)<br />Freeman Hospital, Newcastle upon Tyne, UK | 30 April     | 1       |
| 17/28<br />61% | [D Gamberger and T Smuc](/files/challenge-2001/1.0.0/p73-4.htm)<br />Rudjer Boskovic Institute, Zagreb, Croatia                                                          | 23 August    | 2       |
| 16/28<br />57% | [CC Yang](/files/challenge-2001/1.0.0/p73-2.htm)<br />National Yang-Ming University, Taipei, Taiwan                                                                      | 23 April     | 1       |
| 16/28<br />57% | R Sweeney and colleagues<br />Guidant Corp., St. Paul, MN, USA                                                                                                           | 8 May        | 1       |
| 15/28<br />54% | L Almarro<br />UPV, Valencia, Spain                                                                                                                                      | 30 April     | 1       |

As in event 1, each entrant’s best score is shown above, along with the
date it was achieved and the number of entries submitted (excluding any
entries submitted after the one that received the best score, and any
that were not scored because of formatting errors).

### Papers

These papers were presented at Computers in Cardiology 2001.
- [Predicting the Onset of Paroxysmal Atrial Fibrillation: The Computers
  in Cardiology Challenge
  2001](http://www.cinc.org/archives/2001/pdf/113.pdf)\
  GB Moody, AL Goldberger, S McClennen, SP Swiryn
- [Automated Assessment of Atrial
  Fibrillation](http://www.cinc.org/archives/2001/pdf/117.pdf)\
  P de Chazal, C Heneghan
- [Can Paroxysmal Atrial Fibrillation be
  Predicted?](http://www.cinc.org/archives/2001/pdf/121.pdf)\
  P Langley, D di Bernardo, J Allen, E Bowers, FE Smith, S Vecchietti, A
  Murray
- [A Methodology for Predicting Paroxysmal Atrial Fibrillation Based on
  ECG Arrhythmia Feature
  Analysis](http://www.cinc.org/archives/2001/pdf/125.pdf)\
  W Zong, R Mukkamala, RG Mark
- [Screening and Prediction of Paroxysmal Atrial Fibrillation by Analysis
  of Heart Rate Variability
  Parameters](http://www.cinc.org/archives/2001/pdf/129.pdf)\
  C Maier, M Bauch, H Dickhaus
- [An Automatic ECG Processing Algorithm to Identify Patients Prone to
  Paroxysmal Atrial
  Fibrillation](http://www.cinc.org/archives/2001/pdf/133.pdf)\
  G Schreier, P Kastner, W Marko
- [Prediction of Paroxysmal Atrial Fibrillation by Footprint
  Analysis](http://www.cinc.org/archives/2001/pdf/401.pdf)\
  ACC Yang, HW Yin
- [A Two-Stage Solution Algorithm for Paroxysmal Atrial Fibrillation
  Prediction](http://www.cinc.org/archives/2001/pdf/405.pdf)\
  KS Lynn, HD Chiang
- [Some Important R-R Interval Based Paroxysmal Atrial Fibrillation
  Predictors](http://www.cinc.org/archives/2001/pdf/409.pdf)\
  G Krstacic, D Gamberger, T Smuc, A Krstacic

## Files

### Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files)
[Open Data Commons Attribution License
v1.0](https://physionet.org/content/challenge-2001/view-license/1.0.0/)

### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2001/predicting-paroxysmal-atrial-fibrillationflutter-the-physionetcomputing-in-cardiology-challenge-2001-1.0.0.zip)
    (49.3 KB)
-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2001-1.0.0.physionet.org/).
    Login with a Google account is required.
-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2001-1.0.0.physionet.org DESTINATION
    ```
-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2001/1.0.0/
    ```
