---
layout: default
---

# Detecting and Quantifying Apnea Based on the ECG: The PhysioNet/Computing in Cardiology Challenge 2000 

### George Moody

## Announcements

**Revisiting the PhysioNet/CinC Challenge 2000** (March 14, 2003,
midnight)

Several of the participants in the first [PhysioNet/Computers in
Cardiology Challenge](/2000), together
with the organizers, have published a joint paper that compares the
methods used in the challenge and investigates how to combine several of
the most successful strategies for detecting and quantifying sleep apnea
based on the ECG. This paper appeared last year in [*Medical &
Biological Engineering &
Computing*](https://link.springer.com/article/10.1007/BF02345072),
and it can now be read on-line [\[external link,
PDF\]](https://link.springer.com/content/pdf/10.1007/BF02345072.pdf?pdf=button).

**Challenge featured in New Scientist** (Dec. 15, 2001, midnight)

PhysioNet’s [Challenges](/) are the
subject of a feature article in [*New
Scientist*](http://www.newscientist.com/) (“Off-Beat”, 15 December
2001, pp. 33-35). 

**Results from the Computers in Cardiology Challenge 2000** (Sept. 22,
2000, midnight)

Final scores for [Computers in Cardiology Challenge
2000](/2000) are now posted. Thanks to all who participated
in this outstandingly successful event!

**Challenge entry deadline extended** (April 26, 2000, 1 a.m.)

The deadline for entries in the [Computers in Cardiology Challenge
2000](/2000) has been extended. (The
deadline for submitting abstracts for the conference has **not**
changed, however.)

**Computers in Cardiology Challenge 2000 open for scoring** (April 12,
2000, midnight)

Entrants in the [Computers in Cardiology Challenge
2000](/2000) can now submit their
results for scoring.

**Computers in Cardiology Challenge 2000** (Feb. 10, 2000, midnight)

Can sleep apnea be detected using the ECG only? PhysioNet and [Computers
in Cardiology 2000](http://cinc.mit.edu/) challenge you to develop and
evaluate a method for doing so, in [CinC Challenge
2000](/2000), an open contest aimed at
catalyzing research, friendly competition, and wide-ranging
collaboration around this clinically important problem. Prizes will be
awarded to the most successful participants.

## Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [Penzel, T., McNames, J., de Chazal, P., Raymond, B., Murray, A., Moody, G. (2002). Systematic comparison of different algorithms for apnoea detection based on electrocardiogram recordings. Medical & Biological Engineering & Computing 40, pp. 403--407.](https://link.springer.com/article/10.1007/BF02345072).
- The Apnea-ECG Database: [Penzel, T., Moody, G., Goldberger, A., Peter, J. (2000). The Apnea-ECG Database. Computers in Cardiology 27, pp. 255--258.](http://ecg.mit.edu/george/publications/apnea-ecg-cinc-2000.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

Obstructive [sleep
apnea](https://www.nhlbi.nih.gov/health/sleep-apnea)
(intermittent cessation of breathing) is a common problem with major
health implications, ranging from excessive daytime drowsiness to
serious cardiac arrhythmias. Obstructive sleep apnea is associated with
increased risks of high blood pressure, myocardial infarction, and
stroke, and with increased mortality rates. Standard methods for
detecting and quantifying sleep apnea are based on respiration
monitoring, which often disturbs or interferes with sleep and is
generally expensive. A number of studies during the past 15 years have
hinted at the possibility of detecting sleep apnea using features of the
electrocardiogram. Such approaches are minimally intrusive, inexpensive,
and may be particularly well-suited for screening. The major obstacle to
use of such methods is that careful quantitative comparisons of their
accuracy against that of conventional techniques for apnea detection
have not been published.

We therefore offer a challenge to the biomedical research community:
demonstrate the efficacy of ECG-based methods for apnea detection using
a large, well-characterized, and representative set of data. The goal of
the contest is to stimulate effort and advance the state of the art in
this clinically significant problem, and to foster both friendly
competition and wide-ranging collaborations. We will award prizes of
US\$500 to the most successful entrant in each of two
events.[<sup>1</sup>](#ref-1)

### Data for development and evaluation

Data for this contest have kindly been provided by Dr. Thomas Penzel of
Philipps-University, Marburg, Germany, and are available
[here](https://physionet.org/content/apnea-ecg/1.0.0/).

The data to be used in the contest are divided into a *learning set* and
a *test set* of equal size. Each set consists of 35 recordings,
containing a single ECG signal digitized at 100 Hz with 12-bit
resolution, continuously for approximately 8 hours (individual
recordings vary in length from slightly less than 7 hours to nearly 10
hours). Each recording includes a set of reference annotations, one for
each minute of the recording, that indicate the presence or absence of
apnea during that minute. These reference annotations were made by human
experts on the basis of simultaneously recorded respiration signals.
Note that the reference annotations for the test set will not be made
available until the conclusion of the contest. Eight of the recordings
in the learning set include three respiration signals (oronasal airflow
measured using nasal thermistors, and chest and abdominal respiratory
effort measured using inductive plethysmography) each digitized at 20
Hz, and an oxygen saturation signal digitzed at 1 Hz. These additional
signals can be used as reference material to understand how the apnea
annotations were made, and to study the relationships between the
respiration and ECG signals.

The database does not contain episodes of pure central apnea or of
Cheyne-Stokes respiration; all apneas in these recordings are either
obstructive or mixed. Minutes containing hypopneas (defined as
intermittent drops in respiratory flow below 50%, accompanied by drops
in oxygen saturation of at least 4%, and followed by compensating
hyperventilation) are also scored as minutes containing apnea.
Additional information about the recordings was posted
[here](additional-information.txt)
after the conclusion of the competition, including (for all recordings)
age, gender, height, weight, AI (apnea index), HI (hypopnea index), and
AHI (apnea-hypopnea index). The subjects of these recordings are men and
women between 27 and 63 years of age, with weights between 53 and 135 kg
(BMI between 20.3 and 42.1); AHI ranges from 0 to 93.5 in these
recordings.

### Sleep apnea definitions

Several definitions for clinically significant sleep apnea have been in
clinical use since 1978, when Guilleminault defined “sleep apnea
syndrome” as more than 30 apneas per night. In 1981, Lavie proposed a
more selective criterion of 100 apneas per night. Later criteria were
based on an “apnea index” (the number of apneas per hour, or the
number of minutes containing apnea per hour). Most clinicians regard an
apnea index below 5 as normal, and an apnea index of 10 or more as
pathologic. In 1988, He et al. found increased mortality in untreated
patients with apnea indices of 20 or more, and such patients are now
recognized as in need of treatment. Criteria used in current practice
rely not only on an apnea index, but also on symptoms and cardiovascular
sequelae.[<sup>2</sup>](#ref-2)

### Data classes

For the purposes of this challenge, based on these varied criteria, we
have defined three classes of recordings:

-   **Class A (Apnea)**: These meet all criteria. Recordings in class A
    contain at least one hour with an apnea index of 10 or more, and at
    least 100 minutes with apnea during the recording. The learning and
    test sets each contain 20 class A recordings.
-   **Class B (Borderline)**: These meet some but not all of the
    criteria. Recordings in class B contain at least one hour with an
    apnea index of 5 or more, and between 5 and 99 minutes with apnea
    during the recording. The learning and test sets each contain 5
    class B recordings.
-   **Class C (Control)**: These meet none of the criteria, and may be
    considered normal. Recordings in class C contain fewer than 5
    minutes with apnea during the recording. The learning and test sets
    each contain 10 class C recordings.

### Events and scoring

Each entrant may compete in one or both of the following events:

**1. Apnea screening**

In this event, your task is to design software that can classify the 35
test set recordings into class A (apnea) and class C (control or normal)
groups, using the ECG signal to determine if significant sleep apnea is
present. Your classifications for the 5 class B (borderline) recordings
will not influence your score in this event (but you must classify them
into either class A or class C, since you will not know which records
belong to class B until the correct classifications of the 35 test set
records are disclosed after the end of the contest). Your score for this
event is simply the number of correct classifications; thus the maximum
score possible is 30.

An example may help to clarify the scoring: A contestant submits her
results, classifying 22 recordings in class A and 13 in class C (for a
total of 35). Out of the 22 recordings that her software has identified
as class A, 16 of them are actually class A, 3 are class B and 3 are
class C. Out of the 13 recordings that her software identified as class
C, 7 have been correctly identified, and other 6 include 4 class A and 2
class B. The score in this case is 23 (16 correct class A
identifications, plus 7 in class C). Class B cases do not contribute to
the final score; rather, they provide a buffer zone between the cut of
classes A and C.

We have chosen to exclude the class B recordings from the calculation of
the scores because the utility of a screening test depends primarily on
the accuracy with which it classifies the unambiguous cases, both
positive and negative (classes A and C respectively in this instance).
If you wish to attempt to classify recordings into all three groups, you
may submit a second set of classifications, and we will calculate your
score in the same way (but the maximum possible score in this case will
be 35). The highest scores obtained in this way will be published, but
will not be the basis for an award.

**2. Quantitative assessment of apnea**

In this event, your software must generate a minute-by-minute annotation
file for each recording, in the same format as those provided with the
learning set, using the ECG signal to determine when sleep apnea occurs.
Your annotations will be compared with a set of reference annotations to
determine your score. Each annotation that matches a reference
annotation earns one point; thus the highest possible score for this
event will be approximately 16800 (480 annotations in each of 35
records). It is important to understand that scores approaching the
maximum are very unlikely, since apnea assessment can be very difficult
even for human experts. Nevertheless, the scores can be expected to
provide a reasonable ranking of the ability of the respective algorithms
to mimic the decisions made by human experts.

### Obtaining scores

A form that will permit you to submit your classifications and/or
annotations for scoring is now available. You will receive a reference
number and your score(s) by return e-mail. You may revise your
submissions and try again if you wish, but attempts to exploit this
service in order to discover the correct classifications are contrary to
the spirit of the contest and will result in disqualification.

### How to enter

To enter the competition, submit an abstract with a concise description
of your approach to the problem to [Computers in Cardiology
2000](http://cinc.mit.edu) no later than Wednesday, 3 May 2000. Your
abstract must include your reference number and score(s); for this
reason, do not wait until the last minute to submit your classifications
and/or annotations for scoring. If your abstract is accepted, you will
be expected to prepare a four-page paper for presentation during the
conference and publication in the conference proceedings. We welcome and
encourage contributions to PhysioNet of software developed during this
competition.

### Awards

The author(s) of the top-scoring eligible entry in each event will
receive an award of US\$500 in recognition of his or her achievement. In
the event of a tie, the date of the author’s abstract submission will
be the tie-breaker. This rule favors early submission of abstracts, but
permits authors to improve their results if they can after submitting
their abstracts. Classifications or annotations received for scoring
after noon GMT on Friday, 22 September 2000 will not be eligible for
awards. Submissions from members and affiliates of our research groups
at MIT, Boston University, Harvard Medical School, Beth Israel Deaconess
Medical Center, McGill University, and Phillips-University are not
eligible for awards, although all are welcome to participate.

### Workshop/Panel discussion

All entrants are invited to describe their methods during a panel
discussion at Computers in Cardiology in Boston on Sunday, 24 September
2000, when the awards will be given. Individual presentations of
accepted papers will be scheduled for one or more sessions of the
conference during the following days (25-27 September).

### Acknowledgements

1. <a name="ref-1"></a>Funding for the awards has been contributed by the [Margret and H.A.
Rey Laboratory for Nonlinear Dynamics in
Medicine](http://reylab.bidmc.harvard.edu) at Boston’s [Beth Israel
Deaconess Medical Center](http://www.bidmc.harvard.edu).

2. <a name="ref-2"></a>We thank Thomas Penzel for the discussion of diagnostic criteria for
sleep apnea syndrome, as well as for making this event possible by his
generous contribution of data.

## Challenge Results

### Event 1 (Apnea Screening)

In this event, the five recordings in class B are not counted. The score
is the total number of correct classifications of the 20 class A (apnea)
and 10 class C (control/no apnea) recordings, so that the maximum
possible score is 30. Since four entrants achieved a perfect score, the
date of the top-scoring entrant’s submission is the tiebreaker.

The top scores in event 1 are:


| Score | Entrant                                                                                                                                                                     | Date         | Entries |
| 30/30 | [MR Jarvis and PP Mitra](submissions/m9-3)<br />Caltech, Pasadena, CA, USA                                                                              | 3 May        | 3       |
| 30/30 | [B Raymond, R Cayton, R Bates, and M Chappell](submissions/s53-4)<br />Birmingham Heartlands Hospital, Birmingham, UK                                   | 10 May       | 3       |
| 30/30 | [P de Chazal, C Henehan, E Sheridan, R Reilly, P Nolan, and M O’Malley](submissions/s83-3)<br />University College - Dublin, Ireland                    | 17 July      | 1       |
| 30/30 | [J McNames, A Fraser, and A Rechtsteiner](submissions/s83-4)<br />Portland State University, Portland, OR, USA                                          | 12 September | 3       |
| 29/30 | [PK Stein and PP Domitrovich](submissions/s53-5)<br />Washington University School of Medicine, St. Louis, MO, USA                                      | 12 September | 2       |
| 28/30 | [JE Mietus, C-K Peng, PCh Ivanov, and AL Goldberger](submissions/s83-5)<br />Beth Israel Deaconess Medical Center, Boston, MA, USA (unofficial entry)   | 27 April     | 2       |
| 28/30 | [Z Shinar, A Baharav, and S Akselrod](submissions/s83-6)<br />Tel-Aviv University, Ramat-Aviv, Israel                                                   | 29 April     | 1       |
| 28/30 | [MJ Drinnan, J Allen, P Langley, and A Murray](submissions/s53-1)<br />Freeman Hospital, Newcastle upon Tyne, UK                                        | 3 May        | 1       |
| 28/30 | [C Maier, M Bauch, and H Dickhaus](submissions/s83-2)<br />University of Heidelberg, Heilbronn, Germany                                                 | 3 May        | 2       |
| 28/30 | [M Schrader, C Zywietz, V von Einem, B Widiger, G Joseph](submissions/s53-2)<br />Medical School Hannover, Hannover, Germany                            | 7 August     | 8       |
| 27/30 | [C Marchesi, M Paoletti, S Di Gaetano](submissions/s53-3)<br />University of Firenze, Firenze, Italy                                                    | 28 April     | 1       |
| 27/30 | [M Ballora, L Glass, B Pennycook, PCh Ivanov, and AL Goldberger](submissions/s83-1)<br />McGill University, Montreal, Quebec, Canada (unofficial entry) | 3 May        | 1       |


Each entrant’s best score is shown, along with the date when they
achieved that score. Many entrants submitted multiple entries, and the
‘Entries’ shown indicate how many entries were submitted by each
entrant up to and including the one that scored highest (later entries,
and entries that did not receive scores because of formatting errors
were not counted); this gives some sense of how much ‘tuning’ may have
taken place. Entries noted as ‘unofficial’ came from two of the
PhysioNet core research groups, and were therefore not eligible for
awards, although they followed all of the rules of the competition.

Only one entry, from PK Stein, was submitted for an unofficial
‘three-way score’ (the total of correct classifications of all 35
records, including the 5 class B (borderline) records). This is a
significantly more difficult task, since the amount of apnea in the
class B records must be accurately determined in order to classify them
correctly, and recognizing apnea in recordings that have only small
amounts of apnea is more difficult than in recordings with frequent
apneas. The single entry received a score of 33/35, an excellent result;
the only errors occurred when a class A record was put in class B, and a
class B record was put in class A.

### Event 2 (Apnea Quantification)

In this event, each minute of each of the 35 recordings in the test set
must be classified as containing apnea (A) or not (N). The maximum
possible score is 17268 (the total number of minutes in the 35
recordings for which reference classifications are available).

The top scores in event 2 are:

| Score                   | Entrant                                                                                                                                                       | Date         | Entries |
| 15994/17268<br />92.62% | [J McNames, A Fraser, and A Rechtsteiner](submissions/s83-4)<br />Portland State University, Portland, OR, USA                            | 21 September | 4       |
| 15939/17268<br />92.30% | [B Raymond, R Cayton, R Bates, and M Chappell](submissions/s53-4)<br />Birmingham Heartlands Hospital, Birmingham, UK                     | 22 September | 8       |
| 15432/17268<br />89.36% | [P de Chazal, C Henehan, E Sheridan, R Reilly, P Nolan, and M O’Malley](submissions/s83-3)<br />University College - Dublin, Ireland      | 22 September | 15      |
| 15120/17268<br />87.56% | [M Schrader, C Zywietz, V von Einem, B Widiger, G Joseph](submissions/s53-2)<br />Medical School Hannover, Hannover, Germany              | 12 September | 9       |
| 15075/17268<br />87.30% | [MR Jarvis and PP Mitra](submissions/m9-3)<br />Caltech, Pasadena, CA, USA                                                                | 21 September | 3       |
| 14788/17268<br />85.63% | [Z Shinar, A Baharav, and S Akselrod](submissions/s83-6)<br />Tel-Aviv University, Ramat-Aviv, Israel                                     | 11 May       | 1       |
| 14772/17268<br />85.54% | [C Maier, M Bauch, and H Dickhaus](submissions/s83-2)<br />University of Heidelberg, Heilbronn, Germany                                   | 20 September | 5       |
| 14591/17268<br />84.49% | [JE Mietus, C-K Peng, and AL Goldberger](submissions/s83-5)<br />Beth Israel Deaconess Medical Center, Boston, MA, USA (unofficial entry) | 19 May       | 3       |
                  
As in event 1, each entrant’s best score is shown above, along with the
date it was achieved and the number of entries submitted (excluding any
entries submitted after the one that received the best score, and any
that were not scored because of formatting errors). Notably, four of the
top five finishers in this event also achieved perfect scores in event
1. The classification accuracy achieved by the top finishers is
comparable to the roughly 90% concurrence of human experts in
classification of the original polysomnograms with reference to the full
set of signals, including nasal airflow, respiratory effort, and oxygen
saturation.

## Papers

These papers were presented at [*Computers in Cardiology 2000.*](http://www.cinc.org/)

- [Stimulating Rapid Research Advances Via Focused Competition: The
  Computers In Cardiology Challenge
  2000](http://ecg.mit.edu/george/publications/challenge-cinc-2000.pdf)\
  GB Moody, RG Mark, AL Goldberger, T Penzel\
  *Computers in Cardiology* 2000;27:207-210.
- [The Apnea-ECG
  Database](http://ecg.mit.edu/george/publications/apnea-ecg-cinc-2000.pdf)\
  T Penzel, GB Moody, RG Mark, AL Goldberger, JH Peter\
  *Computers in Cardiology* 2000;27:255-258.
- [Detection of Sleep Apnoea from Frequency Analysis of Heart-Rate
  Variability](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898506)\
  MJ Drinnan, J Allen, P Langley, A Murray\
  *Computers in Cardiology* 2000;27:259-262.
- [Detection of Sleep Apnea in Single Channel ECGs from the PhysioNet Data
  Base](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898507)\
  M Schrader, C Zywietz, V von Einem, B Widiger, G Joseph\
  *Computers in Cardiology* 2000;27:263-256.
- [Screening for Obstructive Sleep Apnoea Based on the Electrocardiogram:
  The Computers in Cardiology
  Challenge](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898508)\
  B Raymond, RM Cayton, RA Bates, MJ Chappell\
  *Computers in Cardiology* 2000;27:267-270.
- [Detecting OSAHS from Patterns Seen on Heart-Rate
  Tachograms](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898509)\
  PK Stein, PP Domitrovich\
  *Computers in Cardiology* 2000;27:271-274.
- [Bayesian Hierarchical Model with Wavelet Transform Coefficients of the
  ECG in Obstructive Sleep Apnea
  Screening](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898510)\
  F Ng, I García, P Gomis, A La Cruz, G Passariello, F Mora\
  *Computers in Cardiology* 2000;27:275-278.
- [Detection of Obstructive Sleep Apnea through Auditory Display of
  Heart-Rate
  Variability](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898630)\
  M Ballora, B Pennycook, PCh Ivanov, A Goldberger, L Glass\
  *Computers in Cardiology* 2000;27:739-740.
- [Recognition and Quantification of Sleep Apnea by Analysis of Heart-Rate
  Variability
  Parameters](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898631)\
  C Maier, M Bauch, H Dickhaus\
  *Computers in Cardiology* 2000;27:741-744.
- [Automatic Classification of Sleep Apnea Epochs using the
  Electrocardiogram](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898632)\
  P de Chazal, C Heneghan, E Sheridan, R Reilly, P Nolan, M O’Malley\
  *Computers in Cardiology* 2000;27:745-748.
- [Obstructive Sleep Apnea Classification Based on Spectrogram Patterns in
  the
  Electrocardiogram](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898633)\
  J McNames, A Fraser\
  *Computers in Cardiology* 2000;27:749-752.
- [Detection of Obstructive Sleep Apnea from Cardiac Interbeat Interval
  Time
  Series](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898634)\
  JE Mietus, C-K Peng, PCh Ivanov, AL Goldberger\
  *Computers in Cardiology* 2000;27:753-756.
- [Obstructive Sleep Apnea Detection Based on Electrocardiogram
  Analysis](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=898635)\
  Z Shinar, A Baharav, S Akselrod\
  *Computers in Cardiology* 2000;27:255-258.

## Files

### Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files)
[Open Data Commons Attribution License
v1.0](https://physionet.org/content/challenge-2000/view-license/1.0.0/)

### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2000/detecting-and-quantifying-apnea-based-on-the-ecg-the-physionetcomputing-in-cardiology-challenge-2000-1.0.0.zip)
    (51.6 KB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2000-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2000-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2000/1.0.0/
    ```
