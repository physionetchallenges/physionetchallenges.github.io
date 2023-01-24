---
layout: default
---

# Predicting Acute Hypotensive Episodes: The PhysioNet/Computing in Cardiology Challenge 2009 

### George Moody, Li-wei Lehman

## Announcements

**Community forum for the 2009 PhysioNet/CinC Challenge** (Oct. 19,
2009, 2:45 p.m.)

If you have any questions or comments regarding this challenge, please
post it directly in our [Community Discussion
Forum](https://groups.google.com/forum/#!forum/physionet-challenges).
This will increase transparency (benefiting all the competitors) and
ensure that all the challenge organizers see your question.

**2009 CinC/PhysioNet Challenge papers** (Oct. 19, 2009, 10:21 a.m.)

[Papers](#papers) presented at
CinC 2009 by challenge
participants, [scores](final-scores),
and [sources](https://physionet.org/static/published-projects/challenge-2009/1.0.0/sources/) for
the open-source entries, are now available.

**Classifications for the 2009 CinC/PhysioNet Challenge are now
available** (Sept. 2, 2009, 10:30 a.m.)

The Challenge has concluded, and the correct classifications for [event
1](http://physionet.org/content/challenge-2009/1.0.0/event-1-answers.txt) and [event
2](http://physionet.org/content/challenge-2009/1.0.0/event-2-answers.txt) are now available
(follow the links). In addition, the c records (the data
following $$T_{0}$$ for each of the test set records, which have been
withheld for the duration of the Challenge) are now available in the
same locations as the a and b records that have been available since
April.

Thanks to all of the Challenge participants, many of whom will discuss
their work during dedicated scientific sessions of [Computers in
Cardiology](http://www.cinc.org/) next week. A number of participants
were able to classify all 10 cases in event 1 without errors; many were
able to classify at least 80% of cases in event 2, and the best result
achieved in event 2 was correct classification of 93% (37 of 40) cases.
The final scores, and the open source software developed and contributed
by participants in the open source division of the Challenge, will be
posted shortly after CinC.

Special thanks to Franco Chiarugi, whose invaluable feedback at every
stage prompted corrections in the training set and improvements in the
design of the challenge that contributed significantly to its success.

**Clinical data for the 2009 CinC/PhysioNet Challenge** (April 23,
2009, 10:23 a.m.)

The clinical data that accompany the test set records are now available
(in the same locations as the test set waveforms and numerics records).
Also note that the CinC abstract deadline has been extended to 8 May
2009 and we have thus been able to extend the first entry deadline to 6
May 2009. If you miss these deadlines, you are still welcome to
participate, but you will be ineligible for an award. If you submit your
first entry on or before the deadline, you may revise it (see
restrictions below) until the final entry deadline of 31 August 2009.

**PhysioNet/CinC Challenge 2009** (Jan. 27, 2009, midnight)

The [10th annual PhysioNet/Computers in Cardiology
Challenge](/2009) is underway.
Participants are invited to identify which ICU patients are likely to
experience sudden and severe drops in blood pressure. Successful
prediction of these acute hypotensive events may lead to improved care
and survival of patients at risk. The Challenge culminates in September
with presentations by participants at a dedicated scientific session of
[Computers in Cardiology](http://www.cinc.org/) in Park City, Utah.

## Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [Moody, G., Lehman, L. (2009). Predicting Acute Hypotensive Episodes: The 10th Annual PhysioNet/Computers in Cardiology Challenge. Computers in Cardiology 36, pp. 541-544.](https://cinc.org/archives/2009/pdf/0541.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

Among the most critical events that occur in intensive care units
(ICUs), acute hypotensive episodes require effective, prompt
intervention. Left untreated, such episodes may result in irreversible
organ damage and death. Timely and appropriate interventions can reduce
these risks. Determining what intervention is appropriate in any given
case depends on diagnosing the cause of the episode, which might be
sepsis, myocardial infarction, cardiac arrhythmia, pulmonary embolism,
hemorrhage, dehydration, anaphylaxis, effects of medication, or any of a
wide variety of other causes of hypovolemia, insufficient cardiac
output, or vasodilatory shock. Often the best choice may be a suboptimal
but relatively safe intervention, simply to buy enough time to select a
more effective treatment without exposing the patient to the additional
risks of delaying treatment.

Of the 2320 patients whose monitored waveforms and accompanying clinical
data were included in the MIMIC-II Database as of December 2008,
arterial blood pressure was recorded in 1237 (53%); among these 1237
patients, 511 (41%) experienced recorded episodes of acute hypotension
(as defined below) during their ICU stays. The mortality rate for these
511 patients is more than twice that of the MIMIC II population as a
whole. To the extent that one might forecast acute hypotensive episodes
in the ICU, there is a possibility of improving care and survival of
patients at risk of these events.

This year’s challenge is the tenth in the [annual series of open
challenges](/) hosted by PhysioNet in
cooperation with [Computers in Cardiology](http://www.cinc.org/). The
goal of the challenge is to predict which patients in the [challenge
dataset](#files) will experience an *acute
hypotensive episode* beginning within the *forecast window*.

### Definitions

**Acute Hypotensive Episode**: The challenge dataset includes, for each
case, a time series of mean arterial blood pressure (MAP) at one-minute
intervals. Each sample of the series is an average of the blood pressure
measured in the radial artery over the previous minute. Given such a
time series, an *acute hypotensive episode* (AHE) is defined for the
purposes of this challenge as any period of 30 minutes or more during
which at least 90% of the MAP measurements were at or below 60 mmHg.

**Forecast window**: This is defined as the one-hour period immediately
following a specified time $$T_{0}$$. In the test sets, the forecast
window (and indeed all data following $$T_{0}$$) are withheld, and the
forecast must be made using only information available before $$T_{0}$$.

### The Challenge Dataset

The MIMIC II project has collected data from about 30,000 ICU patients
to date. MIMIC II patient records contain most of the information that
would appear in a medical record (such as results of laboratory tests,
medications, and hourly vital signs). About 5,000 of the records also
include physiologic waveforms (typically including ECG, blood pressure,
and respiration, and often other signals as well) and time series that
can be observed by the ICU staff. The intent is that a MIMIC II record
should be sufficiently detailed to allow its use in studies that would
otherwise require access to an ICU, e.g., for basic research in
intensive care medicine, or for development and evaluation of diagnostic
and predictive algorithms for medical decision support.

The challenge dataset consists of selected patient records from the
MIMIC-II Database. In the [*training
set*](http://physionet.org/content/challenge-2009/1.0.0/training-set-clinical-data.tar.gz),
the records include all available data before and after $$T_{0}$$. In the
[*test sets*](#files), the records are truncated
at $$T_{0}$$; the data recorded after $$T_{0}$$ in each case will be made
available for study only after the conclusion of the challenge.
(**Update 2 September 2009:** The previously withheld data are now
available; see the [test set home
page](#files).)

Not all MIMIC II records include all of the data elements needed for
this challenge. Records chosen for the challenge dataset include, at a
minimum:

-   At least 10 hours of data before $$T_{0}$$, and at least one hour of
    data after $$T_{0}$$. (As noted, data collected after $$T_{0}$$ for
    the test set records will be withheld until after the conclusion of
    the challenge in September, 2009.) Most MIMIC II records are
    significantly longer, and many include a week or more of data.
-   ECG and arterial blood pressure (ABP) signals sampled at 125 Hz.
    Records in the training set may include one or two additional
    signals, and those in the test set may include as many as six
    additional signals. (Note that two records in the training set do
    not include these signals, however.)
-   Time series of vital signs sampled once per minute (in the training
    set) and once per second (in the test sets). These include heart
    rate and mean, systolic, and diastolic ABP. Most records include a
    variety of additional vital-signs time series, most often including
    respiration rate and SpO<sub>2</sub>.
-   Clinical data entered into the ICU medical information systems
    (records of observations, measurements, and interventions performed
    in the ICU). These include intravenous medications and fluids as
    well as other medications administered. Note, however, that some of
    this information is manually entered by the ICU staff at times when
    it is possible to do so without compromising patient care, so the
    associated timestamps may be imprecise.
-   Results of laboratory tests, records of medications ordered, and
    other data gathered in the hospital but outside of the ICU.

MIMIC II records meeting the criteria above are assigned to a group (H
or C) and a subgroup (H1, H2, C1, or C2):

-   Records in **group H** contain an episode of acute hypotension
    beginning during the forecast window (the one-hour period following
    $$T_{0}$$).
    -   Records in **subgroup H1** come from patients who received
        pressor medication.
    -   Records in **subgroup H2** come from patients who did not
        receive pressor medication (i.e., those in group H but not in
        subgroup H1).
-   Records in **group C** contain no episodes of acute hypotension
    within the forecast window.
    -   Records in **subgroup C1** come from patients with no documented
        acute hypotensive episodes at any time during their hospital
        stay.
    -   Records in **subgroup C2** come from patients who had AHE before
        or after the forecast window (i.e., those in group C but not in
        subgroup C1).

The [**training
set**](https://physionet.org/content/challenge-2009/1.0.0/training-set-clinical-data.tar.gz)
consists of 60 records (including data after
$$T_{0}$$):

-   15 from subgroup H1 (AHE treated with pressors)
-   15 from subgroup H2 (AHE not treated with pressors)
-   15 from subgroup C1 (no AHE)
-   15 from subgroup C2 (AHE outside the forecast window)

[**Test set A**](#files) consists of 10 records
(excluding data after $$T_{0}$$):

-   5 from subgroup H1 (AHE in subjects receiving pressors)
-   5 from subgroup C1 (no AHE, in subjects receiving pressors)

[**Test set B**](#files) consists of 40 records
(excluding data after $$T_{0}$$):

-   Between 10 and 16 from group H
-   Between 24 and 30 from group C

### Changes in the Events and Group Definitions

Originally, subgroup H1 was defined as patients who received pressor
medication in response to their AHE, and subgroup C1 included some
patients who did not receive pressors. These definitions were used to
construct the training set. Although not explicitly stated as a
selection criterion, none of these patients received pressors before
$$T_{0}$$,
so the administration of pressors
was not a clue that could
have been used to classify them.

In selecting the test sets, however, it became apparent that cases
meeting the original criteria for subgroup H1 were less common than
anticipated. By including cases in which pressors were already being
given, we were able to obtain a sufficient number of cases in subgroup
H1, but now the problem was that if they were included, it would be
possible to classify them simply by observing that pressors were being
given. The solution was to redefine subgroups H1 and C1 to include
*only* records of patients who received pressors, so that, as in the
training set, the presence of pressors per se does not indicate to which
group a record belongs.

### Challenge Events

**Event 1** focuses on distinguishing between two groups of ICU patients
who are receiving pressor medication: patients who experience an acute
hypotension episode, and patients who do not. These two groups represent
extremes of AHE-associated risk. Designing successful methods for
separating these disjoint populations may lead to finding indices that
are prognostic of AHE in these individuals.

To enter event 1, design and implement an automated method to identify
which of the records in test set A belong to subgroup H1.

**Event 2** aims to address the broad question of predicting AHE in a
population in which about a third of the patients experience AHE (as in
the MIMIC II Database as a whole). It is likely that a variety of
methods can be used to identify different subsets of the patients at
risk; for example, those who have had previous documented AHE
(especially if more than once) may be relatively easy to identify, on
the basis of a priori knowledge of their pathophysiology or of their
response to medication. The potential benefits of finding AHE predictors
for even a modest subset of the at-risk patients may be significant, if
improvement in outcome can be shown to follow from increased vigilance
and preparation for effective intervention in these patients.

To enter event 2, design and implement an automated method to identify
which of the records in test set B belong to group H.

### Entering the Challenge

*The Challenge has concluded, but it is still possible to attempt the
challenge problem, since the data will remain available. Follow the
links to the correct classifications at the top of this page in order to
determine the accuracy of your predictions. The remainder of this page
describes the rules for official participants in the Challenge.*

We recommend studying the [training
set](http://physionet.org/content/challenge-2009/1.0.0/training-set-clinical-data.tar.gz)
records as preparation for the Challenge itself. The opportunity to see
what happens after $$T_{0}$$ in these records will be invaluable in
designing successful strategies for predicting acute hypotensive
episodes in the test set records.

Download challenge entry forms for [event
1](entry-1.txt) and [event
2](entry-2.txt), then follow the
instructions on the forms to fill in your algorithm\'s classifications
and return them for scoring. **Be sure that your entry form(s) include
the email address where you wish to have your score(s) sent.** In each
event, the score is simply the fraction of correct classifications (a
number between 0 and 1; higher scores are better).

To be eligible for an award:

1.  Design and implement an automated method for classifying the records
    in one or both test sets, and record your method\'s classifications
    in an entry form.
2.  Submit at least one valid entry (to either event) no later than noon
    GMT on Wednesday, 6 May 2009.
3.  Submit an abstract (about 300 words) describing your work on the
    Challenge to [Computers in Cardiology](http://www.cinc.org/) (CinC).
    Please select “PhysioNet/CinC Challenge” as the topic of your
    abstract, so that it can be identified easily by the abstract review
    committee. The deadline for submitting abstracts is 8 May 2009.
4.  Attend Computers in Cardiology in Park City, Utah (USA), 13-16
    September 2009.

Entries for event 1 must assign exactly 5 records from test set A to
subgroup H1, and entries for event 2 must assign 10 to 16 records from
test set B to group H. **Entries that do not follow this rule are
invalid and will not be scored.** You may enter each event up to
**four** times. These restrictions are intended to limit the opportunity
for a good score based on a lucky guess, or a series of deductions as in
[Mastermind](https://www.onlinespiele-sammlung.de/mastermind/mastermindgames/lizardpoint/) (archived link).
The deadline for revised entries is noon GMT on Monday, 31 August 2009.

If your abstract is accepted, you will be expected to prepare a
four-page paper for publication in Computers in Cardiology, and to
present a talk or poster about your work at CinC.

During a plenary session of Computers in Cardiology in September, four
awards will be presented to the eligible participants in attendance with
the best final scores as follows:

1.  Best open source entry in event 1
2.  Best entry in event 1
3.  Best open-source entry in event 2
4.  Best entry in event 2

Participants may enter one or both events, and open source entries are
eligible for the overall awards as well as for the open source awards.
If the best results in any category are achieved by two or more entries,
the first of these entries to be submitted will receive the award in
that category.

***Important!*** The challenge is to design an **automated** method for
classifying the records. You are welcome to submit an entry based on
your personal interpretation of the data, but it will not be scored
until the conclusion of the challenge, and it will not be eligible for
an award. (If you do very well, however, your achievement will be
recognized on PhysioNet.) Obviously this rule is difficult to enforce;
please respect the spirit of the challenge.

### Entering the Open Source Division

As in previous years, the Challenge includes an open source division.
You may enter the open source division by sending the source code for
your classifier by email, before noon GMT on Tuesday, 1 September 2009,
to PhysioNet. Use the subject line “Challenge 2009 entry source”, and
be sure to include:

-   Your name and email address
-   All sources needed to produce a working version of your software
    (except for readily available standard libraries and header files)
-   A note describing how to produce a working version of your software
    (a commented Makefile is ideal), and how to run your software

Each source file submitted should begin with a comment block containing
the names of its authors and a reference to the open source license you
have chosen for it, if any; for example:

         /* predict_ahe.c - forecast acute hypotension using artificial intuition
            Copyright (C) 2009  Herman Foobar <hbar@uncertain.org>
            This software is released under the terms of the GNU General
            Public License (http://www.gnu.org/copyleft/gpl.html).
         */

Source files in C, C++, Fortran, or Matlab m-code are preferred; other
languages may be acceptable, but please ask first. Do not submit any
code that cannot be freely redistributed. Following the conclusion of
the Challenge, selected entries will be posted, with full credit to
their authors, on PhysioNet.

### Challenge Results

The Challenge has concluded, and the correct classifications for event 1
and event 2 are now available. In addition, the c records (the data
following $$T_{0}$$ for each of the test set records, which have been
withheld for the duration of the Challenge) are now available in the
same locations as the a and b records that have been available since
April.

Thanks to all of the Challenge participants, many of whom will discuss
their work during dedicated scientific sessions of [Computers in
Cardiology](http://www.cinc.org/) next week. A number of participants
were able to classify all 10 cases in event 1 without errors; many were
able to classify at least 80% of cases in event 2, and the best result
achieved in event 2 was correct classification of 93% (37 of 40) cases.
The final scores, and the open source software developed and contributed
by participants in the open source division of the Challenge, will be
posted shortly after CinC.

Special thanks to Franco Chiarugi, whose invaluable feedback at every
stage prompted corrections in the training set and improvements in the
design of the challenge that contributed significantly to its success.

Papers presented at CinC 2009 by challenge participants,
[scores](final-scores), and
[sources](https://physionet.org/static/published-projects/challenge-2009/1.0.0/sources/) for the open-source entries,
are now available.

### Papers

The papers below were presented at [*Computers in Cardiology
2009*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. These papers have been made available
by their authors under the terms of the Creative Commons Attribution
License 3.0 ([CCAL](http://creativecommons.org/licenses/by/3.0/)). We
wish to thank all of the authors for their contributions.

The first of these papers is an introduction to the challenge topic,
with a summary of the challenge results and a discussion of their
implications.

> [Predicting Acute Hypotensive Episodes: The 10th Annual
> PhysioNet/Computers in Cardiology
> Challenge](papers/0541.pdf)\
> GB Moody, LH Lehman

The remaining papers were presented by participants in the Challenge,
who describe their approaches to the challenge problem.

- [Forecasting Acute Hypotensive Episodes in Intensive Care Patients
  Based on a Peripheral Arterial Blood Pressure
  Waveform](papers/0545.pdf)\
  X Chen, D Xu, G Zhang, R Mukkamala
- [Prediction of Acute Hypotensive Episodes Using Neural Network
  Multi-models](papers/0549.pdf)\
  JH Henriques, TR Rocha
- [Predicting Acute Hypotensive Episodes from Mean Arterial
  Pressure](papers/0553.pdf)\
  P Langley, S King, D Zheng, EJ Bowers, K Wang, J Allen, A Murray
- [A Rule-Based Approach for the Prediction of Acute Hypotensive
  Episodes](papers/0557.pdf)\
  MA Mneimneh, RJ Povinelli
- [Predicting the Occurrence of Acute Hypotensive Episodes: The
  PhysioNet Challenge](papers/0621.pdf)\
  F Chiarugi, I Karatzanis, V Sakkalis, I Tsamardinos, Th Dermitzaki, M
  Foukarakis, G Vrouchos
- [Acute Hypotension Episode Prediction Using Information Divergence for
  Feature Selection, and Non-Parametric Methods for
  Classification](papers/0625.pdf)\
  PA Fournier, JF Roy
- [A Biosignal Analysis System Applied for Developing an Algorithm
  Predicting Critical Situations of High Risk Cardiac Patients by
  Hemodynamic
  Monitoring](papers/0629.pdf)\
  D Hayn, B Jammerbund, A Kollmann, G Schreier
- [Smoothing and Discriminating MAP
  Data](papers/0633.pdf)\
  K Jin, NL Stockbridge
- [Computers in Cardiology / Physionet Challenge 2009: Predicting Acute
  Hypotensive Episodes](papers/0637.pdf)\
  F Jousset, M Lemay, JM Vesin
- [Utilizing Histogram to Identify Patients Using Pressors for Acute
  Hypotension](papers/0797.pdf)\
  TCT Ho, X Chen

## Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

## License (for files)
[Open Data Commons Attribution License
v1.0](http://physionet.org/content/challenge-2009/view-license/1.0.0/)

## Files

##### Access the files

-   [Download the ZIP
    file](/static/published-projects/challenge-2009/predicting-acute-hypotensive-episodes-the-physionetcomputing-in-cardiology-challenge-2009-1.0.0.zip)
    (164.5 MB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2009-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2009-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2009/1.0.0/
    ```
