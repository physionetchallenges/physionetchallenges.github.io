---
layout: default
---

# Improving the Quality of ECGs Collected using Mobile Phones: The PhysioNet/Computing in Cardiology Challenge 2011 

### Ikaro Silva, George Moody, Leo Anthony Celi

## Announcements

**Community forum for the 2011 PhysioNet/CinC Challenge** (Aug. 18,
2012, 2:42 p.m.)

If you have any questions or comments regarding this challenge, please
post it directly in our [Community Discussion
Forum](https://groups.google.com/forum/#!forum/physionet-challenges).
This will increase transparency (benefiting all the competitors) and
ensure that all the challenge organizers see your question.

**Physiological Measurement focuses on work of Challenge 2011
participants** (Aug. 17, 2012, 4:30 p.m.)

Inspired by the PhysioNet/CinC Challenge 2011 (Improving the quality of
ECGs collected using mobile phones), the journal Physiological
Measurement has devoted its [September 2012 focus
issue](http://iopscience.iop.org/0967-3334/33/9) to the subject of
signal quality in cardiorespiratory monitoring, with eleven articles on
this topic, including nine written by Challenge participants.

**Challenge 2011 Entries Closed** (Aug. 5, 2011, 9 a.m.)

The final deadline for submitting entries to the PhysioNet/CinC
Challenge 2011 has passed. Congratulations and thanks to all who
participated. Final scores and ranks are available for event 1 now.

**Challenge 2011 Event 1 is open** (April 22, 2011, 11:45 p.m.)

Participants in event 1 of the PhysioNet/CinC Challenge 2011 may submit
preliminary entries now. If you plan to participate in any of this
year’s Challenge events, please submit a preliminary event 1 entry no
later than noon GMT on Saturday, 30 April 2011. You will be able to
revise your entry, and to submit an entry for events 2 and 3, until the
final deadline of noon GMT on Monday, 1 August 2011.

**Challenge 2011 Test Set B available** (April 19, 2011, 8:45 p.m.)

ECGs to be classified in events 1 and 2 of the PhysioNet/CinC Challenge
2011 are now available as individual files or as a tarball.

**Help us grade ECGs for the PhysioNet/CinC Challenge** (March 7, 2011,
2:30 a.m.)

Participants with all levels of experience are invited to help develop
the data set for the 12th annual PhysioNet/CinC Challenge by grading
ECGs. Login to PhysioNetWorks and follow the link from your
PhysioNetWorks home page to “Diagnostic ECG Annotations” to get
started. An award fund of US\$2000 will be divided among participants
who have contributed in this way.

**Improving ECGs collected using mobile phones** (Feb. 25, 2011, 3:30 p.m.)

The 2011 PhysioNet/Computing in Cardiology Challenge, now underway, aims
to develop an efficient algorithm able to run in near real-time within a
mobile phone, that can provide useful feedback in the process of
acquiring a diagnostically useful ECG recording.

### Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [Ikaro S., George M., Leo A. C. (2011). Improving the Quality of ECGs Collected using Mobile Phones: The PhysioNet/Computing in Cardiology Challenge 2011. Computers in Cardiology 38, pp. 273-276.](https://www.cinc.org/archives/2011/pdf/0273.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

According to the World Health Organization, cardiovascular diseases
(CVD) are the number one cause of death worldwide. Of these deaths, 82%
take place in low- and middle-income countries. Given their computing
power and pervasiveness, is it possible for mobile phones to aid in
delivery of quality health care, particularly to rural populations
distant from physicians with the expertise needed to diagnose CVD?

Advances in mobile phone technology have resulted in global availability
of portable computing devices capable of performing many of the
functions traditionally requiring desktop and larger computers. In
addition to their technological features, mobile phones have a large
cultural impact. They are user-friendly and are among the most efficient
and most widely used means of communication. Currently there is about
one cell phone for every two humans in the world.

India is experiencing a double burden of disease with persistent
infectious disease coupled with increasing incidence of chronic disease.
Two chronic diseases, CVD and cancer, currently account for nearly 20%
of the total disease burden, which is expected to double to 40% by 2016.
Unfortunately, due to a lack of adequate primary care capacity, most
chronic diseases are diagnosed at an advanced stage, when the cost of
treatment and rehabilitation is prohibitive for the masses, particularly
the poor. This is true for other middle-income developing countries such
as Brazil, China, Indonesia and South Africa as well.

India’s large population spread, in conjunction with the increase in
heart-related diseases, is a public health concern that has led to a
joint collaboration between Narayana Hrudayalaya (one of India's leading
health-care providers) and Sana (an open-source, student-managed, mobile
telemedicine group at MIT; see <http://www.sanamobile.org/>). Sana’s
specific objective in this venture is to enable an inexperienced nurse
or paramedic to collect and transmit electrocardiograms (ECGs) from
rural patients for remote analysis by cardiologists at a city hospital.
While Sana has been successful in developing open-source software for
transmitting and archiving ECGs through Bluetooth recording, significant
obstacles still remain. PhysioNet has partnered with Sana to identify
some of the crucial obstacles involved in having an inexperienced person
record ECGs usable for diagnostic interpretation from a mobile device.

The aim of the PhysioNet/Computing in Cardiology Challenge 2011 is to
develop an efficient algorithm able to run in near real-time within a
mobile phone, that can provide useful feedback to a layperson in the
process of acquiring a diagnostically useful ECG recording. At a
minimum, the software should be able to indicate within a few seconds,
while the patient is still present, if the ECG is of adequate quality
for interpretation, or if another recording should be made. Ideally, the
software should identify common problems (such as misplaced electrodes,
poor skin-electrode contact, external electrical interference, and
artifact resulting from patient motion) and either compensate for these
deficiencies or provide guidance for correcting them.

Data to support development and evaluation of challenge entries are
being collected by the Sana project, and will be provided freely via
PhysioNet. The data set will include ten-second recordings of
twelve-lead ECGs; age, sex, weight, and possibly other relevant
information about the patients; and (for some patients) a photo of the
electrode placement taken using the mobile phone. Although some of the
recordings will be identified initially as acceptable or unacceptable,
challenge participants and others interested will have an opportunity to
assist in establishing a “gold standard” classification of the quality
of the recordings in the challenge data set.

Participants may enter the challenge by completing the classification
task described below. Awards will be given to the most successful
participants who attend Computing in Cardiology 2011 (18-21 September
2011 in Hangzhou, China) to present their work and discuss their
findings with other participants and CinC attendees; see Awards below
for details.

### Data for the Challenge

The challenge data are standard 12-lead ECG recordings (leads I, II, II,
aVR, aVL,aVF, V1, V2, V3, V4, V5, and V6) with full diagnostic bandwidth
(0.05 through 100 Hz). The leads are recorded simultaneously for a
minimum of 10 seconds; each lead is sampled at 500 Hz with 16-bit
resolution.

Nurses, technicians, and volunteers with varying amounts of training
recorded the ECGs for this project. In the intended application, the
recordists (those making ECG recordings) will not necessarily have had
experience. Since the goal of this challenge is to investigate if
laypersons can be assisted via software in collecting high-quality ECGs
reliably, the recordings gathered for this challenge include ECGs made
by volunteers with minimal training.

Data for the Challenge are available in the “Files” section below. The
data are provided in both CSV format, compatible with the Challenge
Android API (see the project files), as well as standard WFDB (compact
binary) formats, readable using the WFDB software package.

### Challenge Datasets

Three challenge data sets have been created from the collected ECGs:

-   Set A: training data, with reference quality assessments provided to
    the participants (*available now*)
-   Set B: test data for events 1 and 2, with reference quality
    assessments withheld; (*available now*)
-   Set C: test data for event 3 (not released to participants)

A series of events prevented us from collecting a sufficient number of
ECGs with the hardware we had originally planned to use for this
Challenge, and in order to permit the Challenge to go forward, the ECGs
in sets A, B, and C have been collected using conventional ECG machines.
(A pilot dataset containing synthetic ECGs recorded using the target
hardware was posted previously and is still available.) Our originally
planned data acquisition process is continuing, and we expect to have a
set of ECGs acquired using that process available soon. As soon as
possible, we’ll assemble a set D of these ECGs, we’ll develop a set of
reference classifications for them, and we will classify them using the
entries for events 2 and 3 as well. We will share the results of this
experiment with event 2 and 3 participants, and we will post set D as a
supplement to the Challenge 2011 data sets on PhysioNet. Since
participants have not had an opportunity to study samples of ECGs
collected using this process, however, these results will not be used
for scoring any of the Challenge events.

### ECG Quality Assessment

ECGs collected for the challenge were reviewed by a group of annotators
with varying amounts of expertise in ECG analysis, in blinded fashion
for grading and interpretation. Between 3 and 18 annotators, working
independently, examined each ECG, assigning it a letter grade (A (0.95):
excellent, B (0.85): good, C (0.75): adequate, D (0.60): poor, or F (0):
unacceptable) for signal quality. The average grade was calculated in
each case, and each record was assigned to one of 3 groups:

-   Group 1 (acceptable): If the average grade is 0.70 or more, and at
    most one grade is F.
-   Group 2 (indeterminate): If the average grade is 0.70 or more, but
    two or more grades were F.
-   Group 3 (unacceptable): If the average grade is less than 0.70.

Approximately 70% of the collected records were assigned to group 1, 30%
to group 3, and fewer than 1% to group 2, reflecting a high degree of
agreement among the annotators.

### Challenge Events and Scoring

ECGs from all three quality groups will be presented to the challenge
participants in blinded fashion. Participants may enter one or more of
the following challenge events:

-   Event 1: (closed source, open data) Participants must submit
    classifications of the challenge test set recordings only. The score
    is the fraction of group 1 and group 3 ECGs in set B that are
    correctly classified by the participant’s algorithm.
-   Event 2: (open source, open data) Participants must submit Java
    software for performing the classification function compatible with
    a template API and Android phone emulator provided by the challenge
    organizers. The score is the fraction of group 1 and group 3 ECGs in
    set B that are correctly classified by the participant’s algorithm.
-   Event 3: (open source, closed data) Same as event 2, but using set C
    and a different scoring algorithm. The score is the product of
    classification accuracy (as in events 1 and 2) and a function of
    execution time in the reference Android phone (faster is better).

### How to submit an entry

**The final deadline for entries has now passed; the information in this
section is for reference only.**

**Instructions for submitting entries to event 1 are on your Challenge
Participant Page.** Participants may submit up to five entries in event
1, at any time until the final deadline of noon GMT on Friday, 5 August
2011; their highest-scoring entry will determine their ranking in event
1.

**Events 2 and 3 are open to event 1 participants who qualified by
submitting an event 1 entry no later than noon GMT on Saturday, 30 April
2011. A single submission enters both events 2 and 3.** Participants may
resubmit their event 2 and 3 entry as many times as they wish until the
final deadline of noon GMT on Friday, 5 August 2011, *but only the final
submission received before the deadline will be scored*.

In events 2 and 3, challenge participants are required to develop
algorithms capable of running in a reference Android phone. An API
including a working sample algorithm is provided as a framework for
these algorithms in the challenge files. ***To participate in events 2
and 3 you must use this API.*** In events 2 and 3, each open-source
algorithm that can run in an Android phone will be tested in a reference
phone.

Algorithms are not required to produce a classification for each record,
but only correct classifications contribute to the scores (thus a
missing classification is equivalent to an incorrect classification).

Note that although a few group 2 ECGs are present in the challenge data
sets, they do not influence participants’ scores. Given that the expert
annotators disagree about their acceptability, it is unreasonable to
expect participants’ algorithms to classify them in any specific way,
so group 2 ECGs are not counted. Nevertheless, since participants are
not told which records belong to group 2, participants can improve their
chances of obtaining a high score by classifying all records.

### Awards

A generous donation from the [GSM
Association](http://www.gsmworld.com/about-us/), in addition to support
from [Computing in Cardiology](http://www.cinc.org/), has allowed us to
increase Challenge awards this year to amounts that will offset most or
all of the costs of registration, accommodation and travel to CinC 2011.

The GSMA represents the interests of the worldwide mobile communications
industry. Spanning 219 countries, the GSMA unites nearly 800 of the
world's mobile operators, as well as more than 200 companies in the
broader mobile ecosystem, including handset makers, software companies,
equipment providers, Internet companies, and media and entertainment
organisations. The GSMA is focused on innovating, incubating and
creating new opportunities for its membership, all with the end goal of
driving the growth of the mobile communications industry.

To be eligible for one of the major awards, you must:

-   Submit a preliminary entry in event 1 no later than noon GMT on
    Saturday, 30 April 2011.
-   Submit an acceptable abstract (about 300 words) about your work on
    the Challenge to CinC no later than noon GMT on Sunday, 1 May 2011.
-   Submit a final entry in at least one event no later than noon GMT on
    Friday, 5 August 2011.
-   Submit a paper (4 pages) describing your work on the Challenge no
    later than noon GMT on Sunday, 11 September 2011.
-   Attend CinC 2011 and discuss your work. All Challenge presentations
    are scheduled for Tuesday, 20 September. Challenge awards will be
    presented during the closing plenary session on Wednesday, 21
    September.

Each of the three most successful eligible participant teams, including
the winners of each of the three events, will receive an award of
US\$2000, but no team or individual will receive more than one such
award. If an eligible team achieves top results in more than one event,
they will receive one award, and the other award(s) will be distributed
to the next most successful team(s). Our objective is to ensure that at
least three of the best entries are represented and discussed at CinC.
An additional US\$2000 will be divided among other participants who have
contributed to the development of the data used in the challenge.

We thank the GSMA and Computing in Cardiology for their support of this
year’s Challenge.

### Challenge Results

Following the final deadline for submission of entries on 5 August 2011,
here are the final scores for the Challenge.

**Event 1 (closed source, open data set B)**

|  Participant           | Score |
|  Xiaopeng Zhao         | 0.932 |
|  Gari Clifford         | 0.926 |
|  CT Ho                 | 0.920 |
|  Dieter Hayn           | 0.916 |
|  Gabriel Garcia        | 0.912 |
|  Nir Kalkstein         | 0.912 |
|  Irena Jekova          | 0.908 |
|  Sebastian Zaunseder   | 0.904 |
|  Kai Noponen           | 0.900 |
|  Benjamin Moody        | 0.896 |

The top 10 (of 49) participants in event 1 are listed above. In this
event, participants submitted classifications of each ECG in data set B;
they were not required to submit their code for this event, and they
were not required to use Java code as in events 2 and 3. Each score
above is the accuracy of the participant’s most successful entry.
Accuracy is the fraction of reference classifications in set B that
match those in the entry; the range is 0 to 1, where 1 would be perfect
matching. Up to five entries were allowed for each participant.

**Event 2 (open-source, open data set B)**

|  Participant            | Score |
|  Xiaopeng Zhao          | 0.914 |
|  Benjamin Moody         | 0.896 |
|  Lars Johannesen        | 0.880 |
|  Philip Langley         | 0.868 |
|  Dieter Hayn            | 0.834 |
|  Václav Chudáček        | 0.833 |
|  *Unofficial entries*   |       |
|  George Moody           | 0.894 |
|  Ikaro Silva            | 0.802 |

In this event, participants submitted Java code that the challenge
organizers tested in a reference Android mobile phone using the same
data and the same scoring method as in event 1. Only one entry was
tested and scored for each participant; the same entry was also used for
event 3.

Scores obtained by the challenge organizers using their own code are
unofficial.

**Event 3 (open source, closed data set C)**

|  Participant            | Score |
|  Dieter Hayn            | 0.873 |
|  Václav Chudáček        | 0.872 |
|  Xiaopeng Zhao          | 0.845 |
|  Philip Langley         | 0.814 |
|  Benjamin Moody         | 0.802 |
|  Lars Johannesen        | 0.791 |
|  *Unofficial entries*   |       |
|  Ikaro Silva            | 0.830 |
|  George Moody           | 0.817 |

In the final event, the same code submitted by participants for event 2
was tested by the challenge organizers using data set C, which has not
been released to participants, thus eliminating any possibility of
“tuning” the code to specific ECGs in the data set. Scores for this
event are calculated as a product of the accuracy as defined for events
1 and 2, and a function of mean run time in the reference Android phone.

As in event 2, scores obtained by the challenge organizers using their
own code are unofficial.

### Papers

The papers below were presented at [*Computers in Cardiology
2011*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. These papers have been made available
by their authors under the terms of the Creative Commons Attribution
License 3.0 ([CCAL](http://creativecommons.org/licenses/by/3.0/)). We
wish to thank all of the authors for their contributions.

**Update:** Inspired by this Challenge, the journal *Physiological
Measurement* has devoted a [focus
issue](http://iopscience.iop.org/0967-3334/33/9) \[2012 Sept;33(9)\] to
the subject of signal quality in cardiorespiratory monitoring, with
eleven articles on this topic, including nine written by Challenge
participants.

The first of these papers is an introduction to the challenge topic,
with a summary of the challenge results and a discussion of their
implications.

> [Improving the Quality of ECGs Collected Using Mobile Phones: The
> PhysioNet/Computing in Cardiology Challenge
> 2011](http://www.cinc.org/archives/2011/pdf/0273.pdf "0273.pdf (in new window)")\
> Ikaro Silva, George B Moody, Leo Celi

The remaining papers were presented by participants in the Challenge,
who describe their approaches to the challenge problem.

- [CinC Challenge - Assessing the Usability of ECG by Ensemble Decision
  Trees](http://www.cinc.org/archives/2011/pdf/0277.pdf "0277.pdf (in new window)")\
  Sebastian Zaunseder, Robert Huhle, Hagen Malberg
- [An Algorithm for Assessment of Quality of ECGs Acquired via Mobile
  Telephones](http://www.cinc.org/archives/2011/pdf/0281.pdf "0281.pdf (in new window)")\
  Philip Langley, Luigi Y Di Marco, Susan King, David Duncan, Costanzo
  Di Maria, Wenfeng Duan, Marjan Bojarnejad, Dingchang Zheng, John
  Allen, Alan Murray
- [Signal Quality Indices and Data Fusion for Determining Acceptability
  of Electrocardiograms Collected in Noisy Ambulatory
  Environments](http://www.cinc.org/archives/2011/pdf/0285.pdf "0285.pdf (in new window)")\
- GD Clifford, D Lopez, Q Li, I Rezek
  [Assessment of Signal Quality and Electrode Placement in ECGs using a
  Reconstruction
  Matrix](http://www.cinc.org/archives/2011/pdf/0289.pdf "0289.pdf (in new window)")\
  Arie C Maan, Erik W van Zwet, Sumche Man, Suzanne MM Oliveira-Martens,
  Martin J Schalij, Cees A Swenne
-  [ECG Quality Assessment for Patient Empowerment in mHealth
  Applications](http://www.cinc.org/archives/2011/pdf/0353.pdf "0353.pdf (in new window)")\
  Dieter Hayn, Bernhard Jammerbund, Günter Schreier
- [Real-time Signal Quality Assessment for ECGs Collected using Mobile
  Phones](http://www.cinc.org/archives/2011/pdf/0357.pdf "0357.pdf (in new window)")\
  Chengyu Liu, Peng Li, Lina Zhao, Feifei Liu, Ruxiang Wang
- [Rule-Based Methods for ECG Quality
  Control](http://www.cinc.org/archives/2011/pdf/0361.pdf "0361.pdf (in new window)")\
  Benjamin E Moody
- [Electrocardiogram Quality Classification based on Robust Best Subsets
  Linear Prediction
  Error](http://www.cinc.org/archives/2011/pdf/0365.pdf "0365.pdf (in new window)")\
  Kai Noponen, Mari Karsikas, Suvi Tiinanen, Jukka Kortelainen, Heikki
  Huikuri, Tapio Seppänen
- [Computer Algorithms for Evaluating the Quality of ECGs in Real
  Time](http://www.cinc.org/archives/2011/pdf/0369.pdf "0369.pdf (in new window)")\
  Henian Xia, Gabriel A Garcia, Joseph C McBride, Adam Sullivan, Thibaut
  De Bock, Jujhar Bains, Dale C Wortham, Xiaopeng Zhao
- [Recognition of Diagnostically Useful ECG Recordings: Alert for
  Corrupted or Interchanged
  Leads](http://www.cinc.org/archives/2011/pdf/0429.pdf "0429.pdf (in new window)")\
  Irena Jekova, Vessela Krasteva, Ivan Dotsinsky, Ivaylo Christov, Roger
  Abächerli
- [Assessment of ECG Quality on an Android
  Platform](http://www.cinc.org/archives/2011/pdf/0433.pdf "0433.pdf (in new window)")\
  Lars Johannesen
- [Using Machine Learning to Detect Problems in ECG Data
  Collection](http://www.cinc.org/archives/2011/pdf/0437.pdf "0437.pdf (in new window)")\
  Nir Kalkstein, Yaron Kinar, Michael Na’aman, Nir Neumark, Pini Akiva
- [PhysioNet Challenge 2011: Improving the Quality of
  Electrocardiography Data Collected Using Real Time QRS-Complex and
  T-Wave
  Detection](http://www.cinc.org/archives/2011/pdf/0441.pdf "0441.pdf (in new window)")\
  Thomas Ho Chee Tat, Chen Xiang, Lim Eng Thiam
- [Could Determination of Equivalent Dipoles from 12 Lead ECG Help in
  Detection of Misplaced
  Electrodes](http://www.cinc.org/archives/2011/pdf/0445.pdf "0445.pdf (in new window)")\
  Vito Starc
- [Simple Scoring System for ECG Quality Assessment on Android
  Platform](http://www.cinc.org/archives/2011/pdf/0449.pdf "0449.pdf (in new window)")\
  Václav Chudáček, Lukás Zach, Jakub Kuzilek, Jirí Spilka, Lenka Lhotská
- [Data Driven Approach to ECG Signal Quality Assessment using Multistep
  SVM
  Classification](http://www.cinc.org/archives/2011/pdf/0453.pdf "0453.pdf (in new window)")\
  Jakub Kuzilek, Michal Huptych, Václav Chudáček, Jirí Spilka, Lenka
  Lhotská

### Access Policy

Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files)
[Open Data Commons Attribution License
v1.0](https://physionet.org/content/challenge-2011/view-license/1.0.0/)

## Files

##### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2011/improving-the-quality-of-ecgs-collected-using-mobile-phones-the-physionetcomputing-in-cardiology-challenge-2011-1.0.0.zip)
    (169.7 MB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2011-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2011-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2011/1.0.0/
    ```
