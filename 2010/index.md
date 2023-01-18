---
layout: default
---

# Mind the Gap: The PhysioNet/Computing in Cardiology Challenge 2010 

### George Moody

## Announcements

**Community forum for the 2010 PhysioNet/CinC Challenge** (Dec. 29,
2010, 1:43 p.m.)

If you have any questions or comments regarding this challenge, please
post it directly in our [Community Discussion
Forum](https://groups.google.com/forum/#!forum/physionet-challenges).
This will increase transparency (benefiting all the competitors) and
ensure that all the challenge organizers see your question.

**2010 CinC/PhysioNet Challenge papers** (Dec. 28, 2010, 9:12 a.m.)

Read
the [papers](#papers) presented at
CinC 2010 by participants in this Challenge.

**PhysioNet/CinC Challenge 2010 open** (March 20, 2010, midnight)

The 11th annual PhysioNet/CinC Challenge is underway, with the goal of
developing robust methods for filling gaps in multiparameter physiologic
data.

**PhysioNet/CinC Challenge 2010 training data** (Dec. 1, 2009,
midnight)

Prepare for the PhysioNet/Computers in Cardiology Challenge 2010, Mind
the Gap! A set of [training
data](#files) is now available. The Challenge begins
on 1 January.

### Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [George M. (2010). Mind the Gap: The PhysioNet/Computing in Cardiology Challenge 2010. Computers in Cardiology 37, pp. 305-308.](https://www.cinc.org/archives/2010/pdf/0305.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

In settings ranging from sleep studies to surgery to sports medicine to
intensive care, real-time monitoring of a variety of physiologic signals
has become an essential tool for clinicians and researchers. Transient
corruption or loss of one or more signals, common in all of these
settings, can be disruptive, especially when continuous observations are
required in order to rule out rare events or as a basis for forecasting.
Signal corruption can be particularly challenging when it mimics
features that are associated with pathologic states.

Humans can be remarkably adept at dealing with transient noise and
signal loss in these settings. Filling in gaps, and making use of
context to recognize and ignore noise, are processes that our sensory
and cognitive abilities leave us well-equipped to do. Can algorithmic
solutions that take account of the same data, in broader contexts and
without fatigue, do as well?

The aim of this year’s challenge is to develop robust methods for
filling in gaps in multiparameter physiologic data (including ECG
signals, continuous blood pressure waveforms, and respiration). In a
real-world monitoring application, these methods can be applied for many
purposes, including:

-   robust estimation of parameters such as heart rate, mean arterial
    pressure, and respiration when the primary signals used to derive
    these parameters become unavailable or unreliable;
-   detection of changes in patient state, when the relationships
    between signals remain consistent even as individual signals change
    their behavior; and
-   recognition of intervals of signal corruption, when a signal becomes
    inconsistent not only with respect to its previous history but also
    with respect to its relationships with other signals.

In this Challenge, participants are asked to reconstruct, using any
combination of available prior and concurrent information, segments of
signals that have been removed from multiparameter recordings of
patients in intensive care units (ICUs).

### Data for the Challenge

Participants are provided with three data sets of 100 records each. Each
ten-minute record contains 6, 7, or 8 signals acquired from bedside ICU
patient monitors. The recorded signals vary across records, and they
include ECG, continuous invasive blood pressure, respiration, fingertip
plethysmograms, and occasional other signals. In one of these signals,
the final 30-second segment (the *target signal*) has been replaced by a
gap (a flat line signal), and the goal is to reconstruct this missing
30-second target signal in each record.

-   **Set A** is a set of 100 records for participants’ use as a
    training set. Participants can obtain scores for Set A
    reconstructions at any time, but Set A scores are not included in
    the final rankings of Challenge entries. The target signals are
    provided for the records in this set. Additional training data can
    easily be constructed from any of the multiparameter data available
    in PhysioBank, such as the MIMIC II Waveform Database.
-   **Set B** is a set of 100 records for which the target signals are
    withheld until the conclusion of the challenge. Participants can
    obtain scores for Set B reconstructions at any time, but Set B
    scores are not included in the final rankings of Challenge entries.
-   **Set C** is a set of 100 records, with the target signals withheld.
    Participants may submit reconstructions of the target signals at any
    time for the duration of the challenge, but they will not receive
    scores except for their final submissions, which will determine the
    final rankings and the winners of the challenge.

Records in all three Challenge data sets are provided in standard
PhysioBank (compact binary) formats; read them using the WFDB software
package. The Set A files named with the suffix .missing are the target
signals; these files are in text format. The datasets, together with the
target signals for Set A, are available
[here](#files). 

### Scoring

A detailed reconstruction of a signal, reproducing all characteristics
of the original signal accurately, is more than is necessary in order to
be useful. For example, a reconstruction of an invasive blood pressure
signal may be useful if it allows a good estimation of mean pressure, or
pulse pressure, even if none of the other details of the signal can be
reproduced accurately; as another example, a reconstruction of an ECG
signal that allows accurate estimation of RR intervals may be useful,
even in the absence of other details.

For this reason, this challenge makes use of two scoring algorithms,
detailed below. The first, used in event 1, measures the overall
accuracy of the reconstruction, and as such will tend to favor those
reconstruction methods that succeed in recovering properties of the
signal that are derivable from the signal amplitude, such as MAP and
pulse pressure. The second, used in event 2, is based on the correlation
between the original signal and its reconstruction, and tends to favor
those methods that accurately recover the timing of the major
fluctuations in the original signal, such as QRS complexes in the ECG
needed to derive RR interval series. Each reconstruction is scored using
both algorithms, so a single submission is entered in both events of the
Challenge.

### Scoring for individual reconstructions

Each *reconstruction*, $$V_{\text{rec}}$$ is compared with the corresponding
*target (reference) signal*, $$V_{\text{ref}}$$. Target signals are known in all
cases, but those for the Set B and Set C records are not provided to
participants.

Each submitted reconstruction is scored using two different methods, one
for each of the two events. Since the scoring methods for the two events
have different biases, a change in your reconstruction of a given record
may improve your event 1 score and decrease your event 2 score, or vice
versa.

#### Event 1

The target signal is subtracted (sample by sample) from the
reconstruction to obtain the residual signal,
$$V_\text{res}$$.
The sum of the
squares of the residuals, `ssvres`, is normalized by the energy
(sample variance) of the target signal, $$E_\text{ref}$$.

In event 1, the quality, $$Q_1$$,
of a reconstruction is defined as
$$1 - \texttt{ssvres}/E_\text{ref}$$, or 0, whichever is larger. If `ssvres` is
0, $$Q_1$$ is 1, even if $$E_\text{ref}$$ is also 0.

Use of a figure of merit based on the residual signal reflects the
importance in many cases of obtaining a good estimate of target signal
levels (such as systolic, mean, and diastolic pressures in a continuous
blood pressure signal).

\[Note that $$Q_{1}$$ was previously defined as
$$1 - E_{\text{res}}/E_{\text{ref}}$$, or 0,
whichever is larger (where $$E_{\text{res}}$$
is the energy of the residual signal). This definition was changed
because it was independent of the magnitude of any constant (DC)
component of the residual signal, unlike the revised definition.\]

#### Event 2

In event 2, the quality $$Q_{2}$$
of a reconstruction is defined as the
correlation coefficient of
$$V_\text{ref}$$ and
$$V_\text{rec}$$, or 0,
whichever is larger.
(Correlation coefficients can of course be
negative; for the purposes of this challenge, an anticorrelated
reconstruction is equivalent to an uncorrelated one, however.)

Use of the correlation coefficient as a figure of merit is motivated by
the observation that reconstruction of a filtered signal may be useful
in many cases. Such a reconstruction might, for example, provide a basis
for reliable estimation of the timing of major fluctuations in a signal
(such as QRS complexes in an ECG signal), even if absolute signal levels
are not recovered. Unlike $$Q_{1}$$,
$$Q_{2}$$ is relatively
insensitive to misestimation of the amplitudes of fluctuations.

### Aggregate (summed) scores

The final ranking of participants is based on summing the $$Q$$
scores
obtained for records in Set C. Participants are encouraged, but not
required, to provide reconstructions of all records in Set C.

Both $$Q_1$$ and
$$Q_2$$ are defined so they can vary between 0
and 1, and higher values are better. If you have submitted more than one
reconstruction of the same record, only the last one submitted
determines your
$$Q_{1}$$ and $$Q_2$$ for that record. If you have
not submitted a reconstruction for a given record, your $$Q_{1}$$ and
$$Q_{2}$$ scores for that record are zero.

For event 1, your Set C summed score, $$C_{1}$$, is the sum of the your
final $$Q_{1}$$ scores for each record in Set C. Similarly, for event
2, your Set C summed score, $$C_{2}$$, is the sum of the your final
$$Q_{2}$$ scores for each record in Set C. Since Set C contains 100
records, $$C_{1}$$ and $$C_{2}$$ can vary between 0 and (in theory!)
100.

The summed scores are not normalized by the number of target signals
reconstructed, to provide a strong incentive to submit reconstructions
of as many of the Set C records as possible.

### Entering the Challenge

To be eligible for an award (see below):

1.  Submit reconstructions (see below) of at least 10 Set B target
    signals, no later than noon GMT on Friday, 30 April 2010.
2.  Submit an abstract (about 300 words) describing your work on the
    Challenge to [Computing in Cardiology](http://www.cinc.org/) (CinC)
    by Saturday, 1 May 2010. Please select “PhysioNet/CinC Challenge”
    as the topic of your abstract, so it can be identified easily by the
    abstract review committee.
3.  Submit reconstructions of as many Set C target signals as you wish
    no later than noon GMT on Wednesday, 1 September 2010. Since your
    ranking is determined by the sum of the scores you receive for Set C
    targets, it is to your advantage to attempt as many of the 100 Set C
    records as possible.
4.  Attend Computing in Cardiology in Belfast, Northern Ireland, 26-29
    September.

If your abstract is accepted, you will be expected to prepare a
four-page paper for publication in Computing in Cardiology, and to
present a talk or poster about your work at CinC.

### Submitting reconstructions for scoring

Reconstructions should be in the same format as the .missing files
containing the Set A target signals (text format, with one sample of the
reconstructed signal per line). Each file should contain 3750 samples
(125 samples/second, for 30 seconds). Although the target signals
consist entirely of samples with integer values, reconstructions may
contain integer or floating point values. Use a decimal point (.) rather
than a comma (,) to separate the integral and fractional components of
floating point values.

You may replace any previously submitted reconstruction simply by
submitting a new one. The corresponding scores are updated immediately.

Scores are calculated using the code in
[c2010-score.c](c2010-score.c), a short C
program that you may download and use to compare any two time series.

Participants may submit reconstructions of as many Set A, B, and C
target signals as they wish. Each reconstruction is scored separately.
For each event, the final ranking of participants is based on the sum of
the scores obtained for reconstructions of Set C target signals.

Keep in mind that Sets A and B are intended for experimentation with
your methods for reconstruction. You can obtain scores for your Set A
and B reconstructions at any time during the Challenge. Set C is the
“final examination”, and although you have until September to study
it, you will not be able to obtain intermediate scores. “Tuning” your
methods to Set C will not be possible, so learn what you can from Sets A
and B and then apply it to Set C.

### Final scores and Challenge awards

Aggregate and individual scores for Set C records will be calculated
based on reconstructions submitted no later than noon GMT on 1 September
2010. These scores, which will appear on your page when they have been
calculated, determine the final ranking of participants.

During a plenary session of Computing in Cardiology in September, four
awards will be presented to the eligible participants in attendance with
the best final scores as follows:

1.  (Event 1, open source) Highest $$C_{1}$$ score for an open source
    entry
2.  (Event 1, overall) Highest $$C_{1}$$ score
3.  (Event 2, open source) Highest $$C_{2}$$ score for an open-source
    entry
4.  (Event 2, overall) Highest $$C_{2}$$ score

Participants may enter one or both events, and open source entries are
eligible for the overall awards as well as for the open source awards.
If the best results in any category are achieved by two or more entries,
the first of these entries to be submitted will receive the award in
that category.

### Entering the Open Source Division

As in previous years, the Challenge includes an open source division.
You may enter the open source division by sending the source code for
your challenge entry by email, before noon GMT on Wednesday, 1 September
2010, to
[PhysioNet](mailto:webmaster@physionet.org?subject=Challenge%202010%20entrysource).
Use the subject line “Challenge 2010 entry source”, and be sure to
include:

-   Your name and email address
-   All sources needed to produce a working version of your software
    (except for readily available standard libraries and header files)
-   A note describing how to produce a working version of your software
    (a commented Makefile is ideal), and how to run your software

Each source file submitted should begin with a comment block containing
the names of its authors and a reference to the open source license you
have chosen for it, if any; for example:

         /* fill.c - fill signal gaps using large wads of duct tape
            Copyright (C) 2010  Herman Foobar <hbar@uncertain.org>
            This software is released under the terms of the GNU General
            Public License (http://www.gnu.org/copyleft/gpl.html).
         */

Source files in C, C++, Fortran, or Matlab m-code are preferred; other
languages may be acceptable, but please ask first. Do not submit any
code that cannot be freely redistributed. Following the conclusion of
the Challenge, selected entries will be posted, with full credit to
their authors, on PhysioNet.

### Questions and answers about the Challenge

**Must there be an automatic process to choose the set of signals used
in the reconstruction of the target signal or is it acceptable that the
choice of signals is not done by a program but by the participant?**

Either method is acceptable. Keep in mind that the final rankings will
be determined by your scores on set C, and that you will receive only
one score for each of the set C records (in other words, you will not be
able to try several different signal subsets for each set C record and
choose the subset that yields the best score in each case).

**There are some files in the challenge dataset, where there are several
signals with zeros in the last 30 seconds. The determination of the
target signal is ambiguous at the following signals: `c21,` `c54,` `c67.` What
should be the way of handling this problem?**

In each of these cases, there is only one signal that becomes flat (all
zero values) after 9 minutes and 30 seconds (i.e., beginning at sample
71250). Reconstruct that signal, not the one that has been flat for a
longer period.

-   In `c21,` ABP and UAP are flat, but UAP is flat throughout;
    reconstruct ABP.
-   In `c54,` CVP and ICP are flat, but CVP is flat beginning at sample
    49556; reconstruct ICP.
-   In `c67,` ABP and CVP are flat, but ABP is flat throughout;
    reconstruct CVP.

### Papers

The papers below were presented at [*Computers in Cardiology
2010*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. These papers have been made available
by their authors under the terms of the Creative Commons Attribution
License 3.0 ([CCAL](http://creativecommons.org/licenses/by/3.0/)). We
wish to thank all of the authors for their contributions.

The first of these papers is an introduction to the challenge topic,
with a summary of the challenge results and a discussion of their
implications.

> [The PhysioNet/Computing in Cardiology Challenge 2010: Mind the
> Gap](http://www.cinc.org/archives/2010/pdf/0305.pdf "0305.pdf")\
> GB Moody

The remaining papers were presented by participants in the Challenge,
who describe their approaches to the challenge problem.

   [Estimation of Missing Data in Multi-channel Physiological Time-series
   by Average Substitution with Timing from a Reference
   Channel](http://www.cinc.org/archives/2010/pdf/0309.pdf "0309.pdf")\
   P Langley, S King, K Wang, D Zheng, R Giovannini, M Bojarnejad, A
   Murray
 - [PhysioNet 2010 Challenge: a Robust Multi-Channel Adaptive Filtering
   Approach to the Estimation of Physiological
   Recordings](http://www.cinc.org/archives/2010/pdf/0313.pdf "0313.pdf")\
   I Silva
 - [Reconstruction of Missing Physiological Signals Using Artificial
   Neural
   Networks](http://www.cinc.org/archives/2010/pdf/0317.pdf "0317.pdf")\
   AM Sullivan, H Xia, JC McBride, X Zhao
 - [Reconstruction of Missing Cardiovascular Signals using Adaptive
   Filtering](http://www.cinc.org/archives/2010/pdf/0321.pdf "0321.pdf")\
   A Hartmann
 - [Principal Component Analysis Based Method for Reconstruction of
   Fragments of Corrupted or Lost Signal in Multilead Data Reflecting
   Electrical Heart Activity and
   Hemodynamics](http://www.cinc.org/archives/2010/pdf/0437.pdf "0437.pdf")\
   R Petrolis, R Simoliuniene, A Krisciukaitis
 - [An Approach to Reconstruct Lost Cardiac Signals Using Pattern
   Matching and Neural Networks via Related Cardiac
   Information](http://www.cinc.org/archives/2010/pdf/0441.pdf "0441.pdf")\
   TCT Ho, X Chen
 - [Medical Multivariate Signal Reconstruction Using Recurrent Neural
   Network](http://www.cinc.org/archives/2010/pdf/0445.pdf "0445.pdf")\
   LEV Silva, JJ Duque, MG Guzo, I Soares, R Tinós, LO Murta Jr
 - [Reconstructing Missing Signals in Multi-Parameter Physiologic Data by
   Mining the Aligned Contextual
   Information](http://www.cinc.org/archives/2010/pdf/0449.pdf "0449.pdf")\
   Y Li, Y Sun, P Sondhi, L Sha, C Zhai
 - [Filling in the Gap: a General Method Using Neural
   Networks](http://www.cinc.org/archives/2010/pdf/0453.pdf "0453.pdf")\
   R Rodrigues
 - [The Multi-parameter Physiologic Signal Reconstruction by means of
   Wavelet Singularity Detection and Signal
   Correlation](http://www.cinc.org/archives/2010/pdf/0457.pdf "0457.pdf")\
   W Wu
 - [A Wavelet Scheme for Reconstruction of Missing Sections in Time
   Series
   Signals](http://www.cinc.org/archives/2010/pdf/0461.pdf "0461.pdf")\
   TR Rocha, SP Paredes, JH Henriques
 - [Reconstruction of Multivariate Signals Using Q-Gaussian Radial Basis
   Function
   Network](http://www.cinc.org/archives/2010/pdf/0465.pdf "0465.pdf")\
   LEV Silva, JJ Duque, R Tinós, LO Murta Jr

### Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files)
[Open Data Commons Attribution License
v1.0](/content/challenge-2010/view-license/1.0.0/)

## Files

##### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2010/mind-the-gap-the-physionetcomputing-in-cardiology-challenge-2010-1.0.0.zip)
    (3.1 MB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2010-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2010-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2010/1.0.0/
    ```

PhysioNet is a repository of freely-available medical research data,
managed by the MIT Laboratory for Computational Physiology.

Supported by the [National Institute of Biomedical Imaging and
Bioengineering (NIBIB)](https://www.nibib.nih.gov/)
under NIH grant number R01EB030362.

[Back](../)
