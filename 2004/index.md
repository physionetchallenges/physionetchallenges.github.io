---
layout: default
---

# Spontaneous Termination of Atrial Fibrillation: The PhysioNet/Computing in Cardiology Challenge 2004 

### George Moody

**Results from the PhysioNet/CinC Challenge 2004** (Oct. 31, 2004,
midnight)

Read about the winners of the PhysioNet/Computers in Cardiology
Challenge 2004
[here](#top-scores)! This
year’s challenge invited participants to develop methods for predicting
if (or when) an episode of atrial fibrillation will self-terminate. The
final results have been posted, together with abstracts of the
participants’ papers, the winning software entries, and additional
information about the challenge.

**PhysioNet/Computers in Cardiology Challenge 2004 update** (May 1,
2004, midnight)

**PhysioNet/Computers in Cardiology Challenge 2004 update:** Twenty
particpants submitted initial results for scoring before the first
deadline passed. If your initial results were received before the first
deadline, any results you submit before the final deadline of 14
September can be used to improve your standing. If you missed the first
deadline, you may still submit results for unofficial scores.

**PhysioNet/CinC Challenge 2004 autoscorer** (April 11, 2004,
midnight)

The latest in our annual series of challenges has been underway for
several months. This year’s challenge asks if it is possible to predict
if (or when) an episode of atrial fibrillation will end spontaneously.
Visit the [Challenge 2004](/2004/) home
page to learn more.

The [autoscorer](http://www.physionet.org/cgi-bin/cinc-2004-score) is
now available to challenge participants. Submit your entry using the
autoscorer and receive your score by return email within a few minutes.
[Top scores](#top-scores)
are also available and are continously updated by the autoscorer.

**PhysioNet/CinC Challenge 2004** (Oct. 8, 2003, midnight)

The [PhysioNet/Computers in Cardiology Challenge 2004](/2004/)
is underway! The topic is spontaneous termination of atrial
fibrillation. The challenge [dataset](https://doi.org/10.13026/C2CC7Z)
is available now; further details about the challenge will be posted
shortly.

## Citation

- The PhysioNet Challenge description paper: [Moody G. (2004). Moody GB. Spontaneous Termination of Atrial Fibrillation: A Challenge from PhysioNet and Computers in Cardiology 2004. Computers in Cardiology 31, pp. 101-104](https://physionet.org/content/aftdb/1.0.0/).
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

## Introduction

The fifth annual PhysioNet/Computers in Cardiology Challenge focuses on
this question:

> **Is it possible to predict if (or when) an episode of atrial
> fibrillation will end spontaneously?**

Atrial fibrillation (AF) is the most common serious cardiac arrhythmia,
affecting more than two million people in the US alone. Unlike
venticular fibrillation, which is invariably fatal if it is not
interrupted, it is possible for atrial fibrillation to be sustained
indefinitely, since the ventricles continue to perform the essential
function of driving the circulation, albeit inefficiently. The risks of
sustained atrial fibrillation are nevertheless serious, and include
strokes and myocardial infarctions caused by the formation of blood
clots within stagnant volumes in the atria. Evidence suggests that
spontaneously terminating (paroxysmal) atrial fibrillation, or PAF, is a
precursor to the development of sustained AF.

Although spontaneously terminating episodes of AF are often very short
(perhaps a few seconds in duration), it is interesting to note that
longer episodes lasting several minutes also occur. These appear to be
very similar to sustained (non-terminating) AF. Subtle changes in rhythm
during the final minutes or seconds of such episodes may lead to (or
predict) termination of AF. Improved understanding of the mechanisms of
spontaneous termination of atrial fibrillation may lead to improvements
in treatment of sustained AF. If it were possible to recognize the
conditions under which PAF is likely to self-terminate, it might also be
possible to intervene in affected individuals to increase the likelihood
of self-termination of what would otherwise be sustained AF.

### Organization of the Challenge

The fifth in our annual series of challenges was announced on 23
September 2003 at Computers in Cardiology in Chalkidiki, Greece. At that
time, we posted a collection of 80 digitized ECG recordings, the [AF
Termination Challenge Database](https://physionet.org/content/aftdb/),
containing labelled
training data and unlabelled test data, to support this challenge. To
enter the challenge, you will need to:

-   develop methods to classify the unlabelled test data
-   send your classifications to PhysioNet for scoring no later than
    Saturday, 1 May 2004 at noon GMT
-   send an abstract describing your methods and discussing your
    findings to Computers in Cardiology no later than 7 May 2004
-   (optionally) send up to 4 revised entries per event (see below), no
    later than Tuesday, 14 September 2004 at noon GMT
-   (optionally) submit the source code for your classifier, no later
    than Wednesday, 15 September 2004 at noon GMT.

Details are below.

If your abstract is accepted, you will be expected to prepare a
four-page manuscript (due on Tuesday, 21 September 2004) for publication
in the conference proceedings, and you will have the opportunity to
discuss your work at the conference. To be eligible for an award, you
must submit an abstract and attend the conference.

We invite you to submit the source code for your classifier for possible
posting on PhysioNet. One of PhysioNet’s major goals is to foster the
creation and free dissemination of high-quality software for research on
clinically and scientifically interesting subjects. Software contributed
in the course of previous challenges has stimulated new collaborations
among its authors, and offers rare opportunities to compare the
strengths of varied approaches objectively. We will select
well-constructed submissions and will post them with full credit to
their authors on PhysioNet. We encourage you to participate in this
activity as part of the challenge, and we offer additional awards to the
authors of the most successful algorithms submitted. A selection of
these algorithms will be posted on PhysioNet following the conference.

As in most of our previous challenges, there are two events, and you are
welcome to participate in either or both of them. Up to four awards of
US\$250 will be presented during a plenary session of Computers in
Cardiology in September. The top-scoring particpant in each event will
receive an award of US\$250, and the top-scoring participant among those
who have submitted the source code for their classifiers in each event
will receive an award of US\$250. Qualified participants may receive
more than one award.

Although your initial classifications are due by 1 May 2004, you may
attempt to improve your results by submitting a limited number of
revised entries, until the final deadline of Wednesday, 15 September
2004. The participants who have achieved the best scores on or before
the deadline are the winners of each event.

### The challenge database

The 80 recordings in the AF Termination Challenge Database are each one
minute in length (excerpted from longer recordings),and each contains
two simultaneously recorded ECG signals. The cardiac rhythm is atrial
fibrillation in each case. QRS annotations produced by an automated
detector are included for the convenience of those who may wish to study
the interbeat interval time series rather than (or in addition to) the
ECG signals themselves; note, however, that these annotation sets are
unaudited and contain small numbers of errors. Each of the 80 records
belongs to one of three groups:

-   **Group N**: non-terminating AF (defined as AF that was not observed
    to have terminated for the duration of the long-term recording, at
    least an hour following the segment).
-   **Group S**: AF that terminates one minute after the end of the
    record.
-   **Group T**: AF that terminates immediately (within one second)
    after the end of the record.

These groups are distributed across a [learning
set](RECORDS) (consisting of 10
labelled records from each group) and two test sets. Test set A contains
30 records, of which about one-half are from group N, and of which the
remainder are from group T. Test set B contains 20 records, 10 from each
of groups S and T. The challenge is to identify the group to which each
of the test set records belongs.

|                  | Group N                  | Group S               | Group T                  |
|------------------|--------------------------|-----------------------|--------------------------|
| **Learning set** | `n01`, `n02`, \... `n10` | `s01`, `s02`, \... `s10` | `t01`, `t02`, \... `t10` |
| **Test set A**   | about 15 records         | \-                    | about 15 records         |
| **Test set B**   | \-                       | 10 records            | 10 records               |

### How to enter

1.  Develop an algorithm for classifying the recordings in test set A or
    B (or both). The algorithm must perform this task unaided (manual
    and semiautomated methods are not eligible).
2.  Your entry needs to be prepared in a special text format. For event
    1, download this
    [template](template-1), and replace
    the “`?`” characters with your classifications (`N` or `T`) for
    each of the 30 records in test set A. For event 2, download this
    [template](template-2), and replace
    the “`?`” characters with your classifications (`S` or `T`) for
    each of the 20 records in test set B.
3.  Write and submit an abstract describing your work following the
    instructions on the [Computers in Cardiology web
    site](http://www.cinc.org/). Please select “Computers in Cardiology
    Challenge” as the topic of your abstract, so that it can be
    identified easily by the abstract review committee.
4.  (Optional) Send the sources for your classifier by email to
    [PhysioNet](mailto:webmaster@physionet.org?subject=Challenge%202004%20entry%20source).
    Use the subject line “Challenge 2004 entry source”, and be sure to
    include:
    -   Your name and email address
    -   All sources needed to produce a working version of your
        classifier (except for readily available standard libraries and
        header files)
    -   A note describing how to produce a working version of your
        classifier (a commented Makefile is ideal), and how to run your
        classifier

    Source files in C, C++, Fortran, or Matlab m-code are preferred;
    other languages may be acceptable, but please ask first. Do not
    submit any code that cannot be freely redistributed.

### Important dates

Late submissions will not be accepted.

**Saturday, 1 May 2004, noon GMT**
:   Deadline for submission of initial entries to PhysioNet. Please
    don\'t wait until the last minute! If you miss this deadline, we
    encourage you to participate unofficially (your classifications will
    be scored, but will not be eligible for an award).

**Friday, 7 May 2004**
:   Deadline for submission of abstracts for Computers in
    Cardiology 2004.

**Tuesday, 14 September 2004, noon GMT**
:   Deadline for submission of final entries to PhysioNet.

**Sunday-Wednesday, 19-22 September 2004**
:   Computers in Cardiology, Chicago, Illinois.

###  Frequently Asked Questions

**How do I get a password for submitting my entry?**

If you have not registered your email address, if you do not have a
password, or if you have forgotten your password, please go to the
sign-in page to register your address and to obtain a new password. Be
sure that the email address you use for your entry matches the one that
you supplied when you signed in.

**Why did the autoscorer reject my entry?**

Valid entries must be in plain text format, as in the templates (see the
links above). Don’t submit HTML documents, MS Word `.doc` files, or
anything else except plain text; the autoscorer won’t like it!

Valid entries must also include a classification for each record in the
event that you are entering. There are 30 records in test set A (event
1) and 20 in test set B (event 2). Incomplete entries are rejected.

For each event, you may submit up to five valid entries; any further
entries in that event are invalid and will be rejected. Only your
top-scoring entry in each event determines your standing.

**But I can get five more entries using my friend’s email address!**

The autoscorer won’t recognize that \... but the challenge organizers
will. Please respect the spirit of the challenge. As we have advised in
previous challenges, if you are tempted to submit many entries in order
to discover the correct classifications, try playing
[Mastermind](https://www.onlinespiele-sammlung.de/mastermind/mastermindgames/lizardpoint/)
instead!

**How are the scores determined?**

The score is the number of correct classifications (so a higher score is
always better). The maximum possible scores are 30 for event 1 and 20
for event 2. If there is a tie in any event, the award will go to the
first participant to submit a top-scoring entry in that event.

**Several records appear to include segments that do not appear to be
AF. Is there really AF throughout?**

The segments were chosen very carefully and with reference to the entire
24-hour recordings from which they were extracted. In a few cases, there
are segments with the appearance of low atrial ectopic rhythm that are
in fact AF; this appears to be the case in `s09` and `t09` (from the
learning set). Records `a24` (from test set A) and `b06` (from test set B)
begin with sinus rhythm. Record `b09` (in test set B) does not contain
sinus rhythm.

**Can I enter the challenge using a semi-automated method?**

You are welcome to participate unofficially (by submitting results for
scoring and by submitting an abstract to Computers in Cardiology), but
semi-automated methods are not eligible for awards. Please [send a brief
note](mailto:contact@physionet.org?subject=semiautomated) to let us know
what you are doing.

**Why don’t you have a challenge about \...?**

Each year, we receive many suggestions for challenge topics. We
encourage you to contact us with further suggestions.

### Challenge Results

Over twenty teams participated in this year’s Challenge, on the topic
of predicting if (or when) an episode of atrial fibrillation will
self-terminate.

During September’s [Computers in Cardiology](http://www.cinc.org/)
conference, we presented four awards to eligible participants in this
year’s challenge. In each event, an overall best award went to the
top-scoring team, and a “best open source” award went to the
top-scoring team among those who contributed the source code for their
entries. The overall award in event 1 was presented to Dieter Hayn and
his colleagues, and the overall award in event 2, as well as the “best
open source” awards in both events, were won by Federico Cantini and
his colleagues.

**challenge-2004.jpg** shows:
> Left to right: Steve Swiryn, George Moody, Simona Petrutiu, Federico
> Cantini, Dieter Hayn.

We wish to thank all those who participated in the challenge and in the
lively and illuminating discussions during the scientific sessions of
Computers in Cardiology. Brief descriptions of the methods used can be
viewed by following the links in the tables below to abstracts submitted
by the entrants for presentation at Computers in Cardiology 2004.

## <a name="top-scores"></a> Event 1 (sustained vs. self-terminating AF)

The maximum possible score in event 1 was 30. The top scorers were:

| Score               | Entrant                                                                                                                                                                                                                                                                   |
| 29 (97%)[\*](#note) | [S Petrutiu, AV Sahakian, J Ng, S Swiryn](top-scores/s31-2)<br />Northwestern University, Evanston, Illinois, USA                                                                                                                                                                |
| 28 (93%)            | [D Hayn, K Edegger, D Scherr, P Lercher, B Rotman, W Klein, G Schreier](top-scores/s31-5)<br /> ARC Seibersdorf Research GmbH<br /> Medical University of Graz, Austria                                                                                                          |
| 27 (90%)            | [F Cantini, F Conforti, M Varanini, F Chiarugi, G Vrouchos](top-scores/s31-6)<br /> CNR Institute of Clinical Physiology, Pisa, Italy<br /> ICS-FORTH, Heraklion, Greece<br /> ICU-CCU Dept,. Venizeleio-Pananeio Hospital, Heraklion, Greece<br /> [\[Software\]](https://physionet.org/files/challenge-2004/1.0.0/cantini-src/) |
| 27 (90%)            | [M Lemay, Z Ihara, JM Vesin, L Kappenberger](top-scores/s91-5)<br /> EPFL - CHUV, Lausanne, Switzerland                                                                                                                                                                          |
| 27 (90%)            | [F Castells, C Mora, R Ruiz, JJ Rieta, J Millet, C Sanchez, S Morell](top-scores/s31-3)<br /> Universidad Politécnica de Valencia<br /> Hospital Clinico Universitario de Valencia<br /> Universidaa de Castilla la Mancha, Cuenca, Spain                                        |
| 27 (90%)            | [F Nilsson, M Stridh, A Bollmann, L Sörnmo](top-scores/s91-2)<br /> Lund University, Sweden<br /> Good Samaritan Hospital and Harbor-UCLA Medical Center, Los Angeles, California, USA                                                                                           |

## Event 2 (AF terminating in one minute vs. immediately)

The maximum possible score in event 1 was 20. The top scorers were:

| Score                | Entrant                                                                                                     |
| 20 (100%)[\*](#note) | [S Petrutiu, AV Sahakian, J Ng, S Swiryn](top-scores/s31-2)<br /> Northwestern University, Evanston, Illinois, USA |
| 18 (90%)             | [F Cantini, F Conforti, M Varanini, F Chiarugi, G Vrouchos](top-scores/s31-6)<br /> CNR Institute of Clinical Physiology, Pisa, Italy<br /> ICS-FORTH, Heraklion, Greece<br /> ICU-CCU Dept,. Venizeleio-Pananeio Hospital, Heraklion, Greece<br /> [\[Software\]](cantini-src/)  |
| 18 (90%) | [B Logan, J Healey](top-scores/s91-1)<br /> Hewlett Packard Laboratories, Cambridge, MA, USA |
| 16 (80%) | [Q Xi, S Shkurovich](top-scores/s31-4)<br />St. Jude Medical, Sylmar, CA, USA                |
| 16 (80%) |  [D Hayn, K Edegger, D Scherr, P Lercher, B Rotman, W Klein, G Schreier](top-scores/s31-5)<br /> ARC Seibersdorf Research GmbH<br /> Medical University of Graz, Austria |

<a name="note"></a>\* The top-scoring entry in each of the two events came from
the research group of Steven Swiryn of Northwestern University, who had
contributed the
[data](https://www.physionet.org/physiobank/database/aftdb/)
used in the challenge. Although these entries were thus ineligible for
an award, Simona Petrutiu and her coauthors did not have access to any
information beyond what was available to all of the participants, and we
wish to recognize her extraordinary achievement in achieving a
near-perfect score in event 1 and a perfect score in event 2.

Four additional teams of participants also described their approaches to
the challenge:

- [AN Esgiar, PK Chakravorty](top-scores/s91-3)\
  University of Al Tahadi, Sirte, Libya
- [P Langley, J Allen, EJ Bowers, MJ Drinnan, EV Garcia, ST King, T
  Olbrich, AJ Sims, FE Smith, J Wild, D Zheng, A Murray](top-scores/m8-3)\
  Medical Physics Dept, Freeman Hospital, Newcastle upon Tyne, UK
- [LT Mainardi, M Matteucci, R Sassi](top-scores/s91-4)\
  Dipartimento di Bioingegneria, Politecnico di Milano, Milano, Italy\
  Dipartimento di Elettronica e Informazione, Politecnico di Milano,
  Milano, Italy\
  Dipartimento di Tecnologie dell Informazione, Universit di Milano,
  Crema, Italy
- [FM Roberts, RJ Povinelli](top-scores/s91-6)\
  Marquette University, Milwaukee, WI, USA

### Papers

These papers were presented at [*Computers in Cardiology
2004*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. Links below are to copies of these
papers on the CinC web site.

> [Spontaneous Termination of Atrial Fibrillation: A Challenge from
> PhysioNet and Computers in Cardiology
> 2004](http://www.cinc.org/archives/2004/pdf/101.pdf)\
> GB Moody
>
> [Analysis of the Surface Electrocardiogram to Predict Termination of
> Atrial Fibrillation: The 2004 Computers in Cardiology/PhysioNet
> Challenge](http://www.cinc.org/archives/2004/pdf/105.pdf)\
> S Petrutiu, AV Sahakian, J Ng, S Swiryn
>
> [Prediction of Spontaneous Termination of Atrial Fibrillation Using
> Time-Frequency Analysis of the Atrial Fibrillatory
> Wave](http://www.cinc.org/archives/2004/pdf/109.pdf)\
> C Mora, J Castells, R Ruiz, JJ Rieta, J Millet, C Sánchez, S Morell
>
> [Prediction of Spontaneous Termination of Atrial Fibrillation in
> Surface ECG by Frequency
> Analysis](http://www.cinc.org/archives/2004/pdf/113.pdf)\
> Q Xi, S Shkurovich
>
> [Automated Prediction of Spontaneous Termination of Atrial
> Fibrillation from
> Electrocardiograms](http://www.cinc.org/archives/2004/pdf/117.pdf)\
> D Hayn, K Edegger, D Scherr, P Lercher, B Rotman, W Klein, G Schreier
>
> [Predicting the End of an Atrial Fibrillation Episode: The PhysioNet
> Challenge](http://www.cinc.org/archives/2004/pdf/121.pdf)\
> F Cantini, F Conforti, M Varanini, F Chiarugi, G Vrouchos
>
> [Detection of Spontaneous Termination of Atrial
> Fibrillation](http://www.cinc.org/archives/2004/pdf/653.pdf)\
> B Logan, J Healey
>
> [Predicting Spontaneous Termination of Atrial Fibrillation with
> Time-Frequency
> Information](http://www.cinc.org/archives/2004/pdf/657.pdf)\
> F Nilsson, M Stridh, A Bollmann, L Sörnmo
>
> [Electrocardiogram Signal Classification Based on Fractal
> Features](http://www.cinc.org/archives/2004/pdf/661.pdf)\
> AN Esgiar, PK Chakravorty
>
> [On Predicting the Spontaneous Termination of Atrial Fibrillation
> Episodes Using Linear and Non-Linear Parameters of ECG Signal and RR
> Series](http://www.cinc.org/archives/2004/pdf/665.pdf)\
> LT Mainardi, M Matteucci, R Sassi
>
> [Computers in Cardiology/Physionet Challenge 2004: AF Classification
> Based on Clinical
> Features](http://www.cinc.org/archives/2004/pdf/669.pdf)\
> M Lemay, Z Ihara, JM Vesin, L Kappenberger
>
> [A Statistical Feature Based Approach to Predicting Termination of
> Atrial Fibrillation](http://www.cinc.org/archives/2004/pdf/673.pdf)\
> FM Roberts, RJ Povinelli

## Files

### Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files)
[Open Data Commons Attribution License
v1.0](/content/challenge-2004/view-license/1.0.0/)

### Access the files

-   [Download the ZIP
    file](/static/published-projects/challenge-2004/spontaneous-termination-of-atrial-fibrillation-the-physionetcomputing-in-cardiology-challenge-2004-1.0.0.zip)
    (4.5 MB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2004-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2004-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2004/1.0.0/
    ```
