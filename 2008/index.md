---
layout: default
---

# Detecting and Quantifying T-Wave Alternans: The PhysioNet/Computing in Cardiology Challenge 2008 

### George Moody

**Community forum for the 2008 PhysioNet/CinC Challenge** (Sept. 23,
2008, 2:46 p.m.)

If you have any questions or comments regarding this challenge, please
post it directly in our [Community Discussion
Forum](https://groups.google.com/forum/#!forum/physionet-challenges).
This will increase transparency (benefiting all the competitors) and
ensure that all the challenge organizers see your question.

**Results from the PhysioNet/CinC Challenge 2008** (Sept. 22, 2008,
midnight)

Congratulations to the winners of the PhysioNet/CinC Challenge 2008 on
the subject of T-wave alternans. Final results are now available:
[scores](/content/challenge-2008/1.0.0/final-scores), [reference
rankings](/content/challenge-2008/1.0.0/reference-ranks) of the
[Challenge 2008 data set](/content/twadb/1.0.0/), and the [open source
software](/static/published-projects/challenge-2009/1.0.0/sources/)
contributed by participants in the open source division of the
Challenge.

**PhysioNet/CinC Challenge 2008** (March 17, 2008, midnight)

The [PhysioNet/Computers in Cardiology Challenge
2008](/2008/) is underway. The topic of
this, the ninth open challenge in our annual series, is detection and
quantification of T-wave alternans.

## Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [George M. (2008). The PhysioNet / Computers in Cardiology Challenge 2008: T-Wave Alternans. Computers in Cardiology 35, pp. 505-508.](https://www.cinc.org/Proceedings/2008/pdf/0505.pdf)
- The Long Term ST Database: [Jager, F., Taddei, A., Moody, G. B., Emdin, M., Antolič, G., Dorn, R., ... & Mark, R. G. (2003). Long-term ST database: a reference for the development and evaluation of automated ischaemia detectors and for the study of the dynamics of myocardial ischaemia. *Medical and Biological Engineering and Computing*, 41(2), 172-182.](https://physionet.org/physiobank/database/ltstdb/lt03/lt03.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

The ninth annual PhysioNet/Computers in Cardiology Challenge aims to
improve understanding of methods for identification and analysis of
T-wave alternans in the ECG.

### Background

One hundred years after the first observation of T-wave alternans was
reported by HE Hering [\[1\]](#ref-1),
the phenomenon is widely understood to be an important indicator of risk
of sudden cardiac death. Yet for most of that time TWA was believed to
be rare. In 1981, at the eighth annual meeting of Computers in
Cardiology, Dan Adam, Solange Akselrod, and Richard Cohen first reported
the existence of microvolt-level T-wave alternans
[\[2\]](#ref-2), too small in amplitude
to be detected visually at standard display scales.

T-wave alternans (TWA) is a pattern in the ECG characterized by two
(rarely more) distinct forms of T-waves appearing in alternation, at or
above a patient-specific heart rate generally in the range of 90 to 120
beats per minute. Although the mechanisms have not been fully
elucidated, a large amount of empirical evidence collected during the
past 25 years has demonstrated an association between the amount of TWA,
the heart rate at which it appears, and the risk of sudden cardiac death
(SCD). In particular, the absence of significant TWA in a patient with
congestive heart failure, low ejection fraction, or a recent myocardial
infarction is strongly predictive of a low risk of SCD. A positive
finding in such a patient, though less specific, may indicate that an
implantable cardiac defibrillator would be appropriate, an indication
that can be confirmed using invasive testing. Since TWA analysis is
performed on the surface ECG, it is an inexpensive and non-invasive
test. In clinical applications, TWA analysis can be done as part of an
exercise stress test, but there is interest in the research community in
using conventional long-term (Holter) ECG recordings to observe TWA in
the context of activities of daily living. A review by Armoundas,
Tomaselli, and Esperer discusses mechanisms that may account for the
associations among TWA and other risk factors for SCD, as well as
clinical applications of TWA
[\[3\]](#ref-3).

A variety of algorithms for detecting and quantifying TWA have been
proposed, employing techniques from linear and nonlinear signal
processing such as spectral analysis, complex demodulation, counting
zero-crossings in a series of correlation coefficients, periodogram and
complex demodulation analysis of T-wave principal components, Capon
filtering, Poincaré maps, periodicity transforms, statistical tests,
moving averages, maximum likelihood estimators and generalized
likelihood ratio tests, and more. For a comprehensive and systematic
discussion of methods for TWA detection and analysis, see the review by
Martínez and Olmos [\[4\]](#ref-4).

### The Challenge Data

PhysioNet has a wide variety of data that might be appropriate for this
challenge. Visitors were invited to nominate some of these data for
inclusion in the challenge data set, from among those in these
databases:

-   The [Long-Term ST Database](https://physionet.org/content/ltstdb/), which consists of 86
    records, each 21 to 24 hours in duration. The records are digitized
    2- or 3-channel long-term (Holter) ECG tape recordings, mostly from
    subjects who had transient myocardial ischemia. Each record is
    annotated beat-by-beat, and with respect to ST and rhythm changes,
    and is accompanied by a detailed clincal summary.
-   The [PTB Diagnostic ECG Database](https://physionet.org/content/ptbdb/), consisting of
    549 records from 294 subjects, most of which are about 2 minutes
    long (some are shorter). These are of very high technical quality
    (12 standard leads and 3 Frank leads, sampled at 1 KHz per signal
    with 16-bit resolution), mostly post-MI patients but with
    representation of other types of subjects including healthy
    controls. Each record is accompanied by a detailed clinical summary.
    This database was previously used in the [2006 QT
    challenge](https://physionet.org/content/challenge-2006/), and it might be interesting to
    relate QT intervals and TWA in the same subjects.
-   The [MIT-BIH ST Change Database](https://physionet.org/content/stdb/), which includes 23
    high-quality records of exercise stress tests, each typically 20 to
    40 minutes in length. The recordings each contain two ECG signals
    sampled at 360 Hz; there are no annotations or clinical correlates
    available.
-   The [Sudden Cardiac Death Holter Database](https://physionet.org/content/sddb/), a
    collection that currently includes 23 complete 2-channel Holter
    recordings (7 to 25 hours each) of patients who experienced
    sustained ventricular tachyarrhythmias and cardiac arrest during the
    recordings. The records have been digitized at 250 Hz per signal.
    Twelve records have been meticulously annotated beat-by-beat;
    algorithm-generated beat annotations are available for the others.
    No clinical correlates are available.
-   The [BIDMC Congestive Heart Failure Database](https://physionet.org/content/chfdb/), 15
    2-channel Holter recordings each about 20 hours in duration, from
    patients with severe (NYHA class 3-4) congestive heart failure. The
    records have been digitized at 250 Hz per signal. Age, gender, and
    NYHA class are available for each patient.

A good challenge data set should include not only clear-cut cases, but
also a sampling of cases that might be expected to pose problems (for
example, because of changes in conduction patterns, ectopy, or noise).

Participants were asked send a list of the records they wished to
nominate for inclusion in the official challenge data set by email to
[webmaster\@physionet.org](mailto:webmaster@physionet.org?subject=Challenge%202008%20data%20nomination)
with the subject “Challenge 2008 data nomination”, no later than noon
GMT on Thursday, 17 April 2008. Those who wished to nominate records
other than those in the databases listed above were asked to state
briefly why they believed their choices are particularly appropriate for
this challenge. Participants also were invited to contribute data to
PhysioNet to be considered for this challenge, and several did so.
Thanks to all who participated in this process.

We have compiled all nominations and selected the most promising cases
for inclusion in the official data set, together with new cases that
have not been available previously. The official PhysioNet/Computers in
Cardiology Challenge 2008 data set is now available (as individual
files) and, for convenience, it is also available as a tarball.

### Reporting Results and Scoring

1.  Download an [entry form](entry.txt).
2.  For each record in the challenge data set, participants must detect
    or estimate the peak magnitude of T-wave alternans using a
    fully-automated method, and enter that estimate on the entry form.
    If your method detects but does not quantify TWA, enter 1 as the
    estimate for each record in which TWA was detected, and 0 as the
    estimate for the remaining records. **Valid entries must include a
    TWA estimate for each record in the challenge data set.**
3.  Use your favorite text editor to fill in the entry form. Please note
    that the entry form is a plain text file, not a word processor
    document; keep it in plain text format. **Be sure that your entry
    form includes the email address where you wish to have your scores
    sent.**
4.  Send the filled-in entry by email to
    [webmaster\@physionet.org](mailto:webmaster@physionet.org?subject=Challenge-2008-entry),
    with the subject line “Challenge 2008 entry”. **Entries will be
    accepted until noon GMT on 1 September 2008.**

Scores will be determined by the following procedure, once a minimum
number of entries have been received:

1.  For each entry, the records will be ranked by the magnitudes of the
    associated TWA estimates. Thus the record with the lowest TWA
    estimate in a given entry receives the rank of 1 for that entry, the
    record with the second-lowest TWA estimate gets a rank of 2, etc.
2.  Each record receives a median rank, which is the median of the ranks
    assigned it by the entries, and a reference ranking is made by
    sorting the median ranks (i.e., the record with the lowest median
    rank gets a reference rank of 1, etc.)
3.  The score for each entry is the Kendall (tau) rank correlation
    coefficient between the entry ranking and the reference ranking,
    where 1 is perfect agreement and -1 is perfect disagreement
    [\[5\]](#ref-5).

You will receive your score by return email. The first scores will be
sent on or about 27 April 2008; scores for entries received after that
date will usually be sent within a day of receipt.

*The reference rankings are initially determined by the entries
received. Final reference rankings will be compiled in August. Scores
reported before that time are preliminary and are subject to change.
Final scores used to determine the winners of the challenge will be sent
to all participants shortly after the deadline for entries (1 September
2008).*

### Entering the Open Source Division

As in previous years, the Challenge will include an open source
division. You may enter the open source division by sending your source
code by email, before noon GMT on Monday, 1 September 2008, to
[PhysioNet](/about/#contact). Use the subject line “Challenge 2008
entry source”, and be sure to include:

-   Your name and email address
-   All sources needed to produce a working version of your software
    (except for readily available standard libraries and header files)
-   A note describing how to produce a working version of your software
    (a commented Makefile is ideal), and how to run your software

Each source file submitted should begin with a comment block containing
the names of its authors and a reference to the open source license you
have chosen for it, if any; for example:

         /* twarng.c - Detect and measure T-wave alternans using a random number generator
            Copyright (C) 2008  Herman Foobar <hbar@uncertain.org>
            This software is released under the terms of the GNU General
            Public License (http://www.gnu.org/copyleft/gpl.html).
         */

Source files in C, C++, Fortran, or Matlab m-code are preferred; other
languages may be acceptable, but please ask first. Do not submit any
code that cannot be freely redistributed. Following the conclusion of
the Challenge, selected entries will be posted, with full credit to
their authors, on PhysioNet.

### Events and Awards

If you submit an abstract describing your work on the challenge no later
than 1 May 2008 to Computers in Cardiology, and a challenge entry no
later than 1 September 2008 at noon GMT, you may be eligible for one or
more awards that will be presented during the final plenary session of
the conference on Wednesday, 17 September 2008.

The Board of Directors of Computers in Cardiology provides an annual
grant of US\$1000 for challenge awards. This year, a matching
contribution from Electrogram, Inc. has allowed us to double the prize
fund. We are deeply grateful for the generosity and enthusiastic support
of Electrogram and Computers in Cardiology.

An award of US\$1000 will be received by the eligible participant who
achieves the best final score overall in this year’s Challenge.

An additional award of US\$1000 will be given to the winner of the open
source division. **Participants in the open source division are eligible
for both awards.**

### Frequently Asked Questions

**Regarding the estimate of the peak T-wave alternans magnitude, in what
units it should be expressed? Does the estimate include the T-wave
magnitude or only the added alternans?**

You may use whatever units you wish. Estimate the magnitude of the
alternans, not the magnitude of the T-waves. (Some methods involve
expressing alternans magnitude or power as a fraction of total T-wave
magnitude or power; it’s fine to do this, or not to do this, as you
wish --- but don’t *add* a T-wave measurement to your alternans
estimate.)

The scoring is based on how your estimates rank the records (from least
to most TWA) compared with a reference ranking of the records. Thus the
units you choose don’t matter, so long as you use the same units for
all of your measurements.

**This is a hard problem, and I won’t be able to get final results in
time for the abstract deadline. What needs to be submitted in the
abstract?**

Briefly, you will need to submit a short (\~300 words) abstract, which
may not include illustrations, by 1 May. Abstracts must be submitted
[on-line](http://www.cinc.org/Submit.htm).

It would be ideal if you have submitted rough results for the Challenge
problem no later than 27 April, so they can be scored and so that you
can report your preliminary score in your abstract. If this is not
possible, please discuss in your abstract relevant studies you have
performed to date, touching on any novel aspects of your methods and
quoting whatever results you have. Generally abstracts containing only
“we will show \...” without any results are not accepted, so it is
very important that you demonstrate in the abstract that you have
actually accomplished something already. Given the complexity of the
challenge and the short time available for working on it, the abstract
reviewers will certainly make some allowance for those who are unable to
obtain results on the challenge problem by the abstract deadline, if it
appears they will be able to do so before the conference in September.

**May I revise my entry?**

You may submit entries at any time until the final deadline of noon GMT
on 1 September. Each entry will be scored, and you may attempt to
improve your score by submitting up to four revised entries (five in
all).

You may choose any of your (up to five) entries as the basis for
ranking, by sending an email specifying your choice to
[webmaster\@physionet.org](mailto:webmaster@physionet.org?subject=Challenge-2008-entry),
on or before noon GMT on 1 September. Please remember that it may take
up to 24 hours after submitting an entry to receive scores, so try to
submit your last entry at least a day before the deadline if you think
you may want to exercise your choice. Your last entry will be used for
ranking unless you specify otherwise.

**If my abstract is accepted, what else must I do?**

In September, if your abstract is accepted, you will be expected to
submit a four-page paper, which may be illustrated, for publication in
[Computers in Cardiology on-line](http://cinc.mit.edu/archives/) and in
print. You will also be expected to attend the conference ([14-17
September 2008 in Bologna, Italy](http://cinc2008.unibo.it/)) and to
present your work in one of the scientific sessions of the conference,
either as a poster or as a 10-minute oral presentation. Your paper and
presentation should include your final results.

**Why don’t you have a challenge about \...?**

Each year, we receive many suggestions for challenge topics. We
encourage you to [contact us](about) with further suggestions.

### References

1.  <a name="ref-1"></a>Hering HE. Das Wesen des Herzalternans. Münchener med Wochenschr
    1908;4:1417-21.
2.  <a name="ref-2"></a>Adam DR, Akselrod S, Cohen RJ. Estimation of ventricular
    vulnerability to fibrillation through T-wave time series analysis.
    *Computers in Cardiology* 1981;8:307-310.
3.  <a name="ref-3"></a>Armoundas AA, Tomaselli GF, Esperer HD. Pathophysiological basis and
    clinical application of T-wave alternans. *JACC* 2002;40:207-217.
4.  <a name="ref-4"></a>Martínez JP, Olmos S. Methodological Principles of T-wave alternans:
    a unified framework. *IEEE Trans Biomed Eng* 2005;52(4):599-613.
    \[requires subscription\]
5.  <a name="ref-5"></a>Abdi H.[“The Kendall Rank Correlation
    Coefficient”](http://www.utdallas.edu/~herve/Abdi-KendallCorrelation2007-pretty.pdf),
    in Salkind N (Ed.) *Encyclopedia of Measurement and Statistics*.
    Thousand Oaks (CA): Sage (2007).

### Challenge Results

Final results are now available: papers presented by participants at
CinC 2008, [scores](final-scores),
[reference rankings](reference-ranks) and
[additional details](about-records.txt)
for the [Challenge 2008 data set](https://physionet.org/content/twadb/1.0.0/), and the [open source
software](#files) contributed by participants in
the open source division of the Challenge.

### Papers

The papers below were presented at [*Computers in Cardiology
2008*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. These papers have been made available
by their authors under the terms of the Creative Commons Attribution
License 2.5 ([CCAL](http://creativecommons.org/licenses/by/2.5/)). We
wish to thank all of the authors for their contributions.

The first of these papers is an introduction to the challenge topic,
with a summary of the challenge results and a discussion of their
implications.

> [The PhysioNet / Computers in Cardiology Challenge 2008: T-Wave
> Alternans](papers/0505.pdf)\
> GB Moody

The remaining papers were presented by participants in the Challenge,
who describe their approaches to the challenge problem.

  [An Open-Source Standard T-Wave Alternans Detector for
  Benchmarking](papers/0509.pdf)\
  A Khaustov, S Nemati, GD Clifford
- [Heart-Rate Adaptive Match Filter Based Procedure to Detect and
  Quantify T-Wave
  Alternans](papers/0513.pdf)\
  L Burattini, R Burattini
- [Estimation of T-Wave Alternans from Multi-Lead ECG Signals Using a
  Modified Moving Average
  Method](papers/0517.pdf)\
  GM Nijm, S Swiryn, AC Larson, AV Sahakian
- [Principal Component Analysis for Detection and Assessment of T-Wave
  Alternans](papers/0521.pdf)\
  G Bortolan, II Christov
- [T-Wave Alternans Ranking: Striking Disagreement between Two
  Vectorcardiographic Measures of Repolarization
  Heterogeneity](papers/0525.pdf)\
  S Man, AC Maan, MJ Schalij, EE van der Wall, CA Swenne
- [T-Wave Alternans: A Comparison of Different Measurement
  Techniques](papers/0597.pdf)\
  D Zheng, S Stevens, P Langley, K Wang, AJ Haigh, S King, A Murray
- [Multilead T-Wave Alternans Quantification Based on Spatial Filtering
  and the Laplacian Likelihood Ratio
  Method](papers/0601.pdf)\
  V Monasterio, JP Martínez
- [Analysis of T-Wave Alternans Using the Ramanujan
  Transform](papers/0605.pdf)\
  LT Mainardi, M Bertinelli, R Sassi
- [An Improved Spectral Method of Detecting and Quantifying T-Wave
  Alternans for SCD Risk
  Evaluation](papers/0609.pdf)\
  TW Shen, YT Tsao
- [An Electrophysiological Cardiac Model Approach to Measuring T-Wave
  Alternans](papers/0613.pdf)\
  MA Mneimneh, RJ Povinelli
- [Detection and Estimation of T-Wave Alternans with Matched Filter and
  Nonparametric Bootstrap
  Test](papers/0617.pdf)\
  JL Rojo-Álvarez, O Barquero-Pérez, I Mora-Jimenez, R Goya-Esteban, J
  Gimeno-Blanes, A Garcia-Alberola
- [Correlation between Multifractal Spectrum Based on Wavelet Leaders
  and T-Wave Alternans](papers/0749.pdf)\
  R Cardo, A Corvalán
- [New Method for the Detection of T-Wave Alternans in Basis of Walsh
  Functions](papers/0753.pdf)\
  OV Melnik
- [Principal Component Analysis Based Method for Detection and
  Evaluation of ECG T-Wave
  Alternans](papers/0757.pdf)\
  R Simoliuniene, A Krisciukaitis, A Macas, Baksyte G, Saferis V, R
  Zaliunas
- [Detecting and Quantifying T-Wave Alternans Using the Correlation
  Method and Comparison with the FFT-Based
  Method](papers/0761.pdf)\
  A Ghaffari, MR Homaeinezhad, M Atarod, R Rahmani
- [Hybrid Detector for the T-Wave Alternans
  Challenge](papers/0765.pdf)\
  O Meste, R Alegre de la Soujeole, O Tala
- [Nonlinear Detection of T-Wave
  Alternans](papers/0769.pdf)\
  H Väänänen H
- [An Artificial Multi-Channel Model for Generating Abnormal
  Electrocardiographic
  Rhythms](papers/0773.pdf)\
  GD Clifford, S Nemati, R Sameni

## Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

## License (for files)
[Open Data Commons Attribution License
v1.0](https://physionet.org/content/challenge-2008/view-license/1.0.0/)

## Files

##### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2008/detecting-and-quantifying-t-wave-alternans-the-physionetcomputing-in-cardiology-challenge-2008-1.0.0.zip)
    (81.1 MB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2008-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2008-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2008/1.0.0/
    ```
