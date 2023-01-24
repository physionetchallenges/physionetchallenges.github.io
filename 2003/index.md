---
layout: default
---

# Distinguishing Ischemic from Non-Ischemic ST Changes: The PhysioNet/Computing in Cardiology Challenge 2003 

### George Moody

## Announcements

**Computers in Cardiology abstract deadline extended** (May 3, 2003,
midnight)

Participants in the [PhysioNet/Computers in Cardiology Challenge
2003](/2003/) have an extra week to
submit abstracts describing their work, since the conference has
extended the abstract deadline to Thursday, 8 May.

**PhysioNet/CinC Challenge 2003** (March 6, 2003, midnight)

The fourth annual [PhysioNet/Computers in Cardiology
Challenge](/2003/) has begun. Is it possible to tell the
difference between transient ST changes in the ECG that are due to
myocardial ischemia, and those that are not? We invite you to
participate in this challenge, making use of the recently completed
[Long-Term ST Database](https://doi.org/10.13026/C2G01T) to study this
provocative question.

## Citations

When using this resource, please cite
the following publications:

- The Long Term ST Database: [Jager, F., Taddei, A., Moody, G. B., Emdin, M., Antolič, G., Dorn, R., ... & Mark, R. G. (2003). Long-term ST database: a reference for the development and evaluation of automated ischaemia detectors and for the study of the dynamics of myocardial ischaemia. *Medical and Biological Engineering and Computing*, 41(2), 172-182.](https://physionet.org/physiobank/database/ltstdb/lt03/lt03.pdf)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

For the fourth annual PhysioNet/Computers in Cardiology Challenge, we
propose a provocative question of considerable clinical interest:

> **Is it possible to tell the difference between transient ST changes
> in the ECG that are due to myocardial ischemia, and those that are
> not?**

For many years, a simple answer (“no”) was considered to be the final
word on this question. Myocardial ischemia results from insufficient
oxygen delivery to the myocardium. To diagnose myocardial ischemia
definitively, it is necessary to document that blood flow, blood oxygen
saturation, or both have been compromised to an extent that the oxygen
demands of the myocardium are not satisfied. These diagnostic criteria
are typically established by imaging the coronary arteries. Since the
ECG does not contain direct information about blood flow or oxygen
saturation, it cannot be used to diagnose ischemia.

It may be possible, however, to establish inferential associations
between specific features of the ECG and myocardial ischemia. One such
association, between transient ischemia and changes in the ST segment of
the ECG, is very widely known, and is understood to be highly sensitive,
but not specific. It has long been known that repolarization of ischemic
myocardial regions is abnormal, that these abnormalities are visible in
the ST segment, and that they can be quantified by measuring the
deviation of certain portions of the ST segment from baseline
measurements. It is also known that deviations in these ST segment
measurements can result from a wide variety of other causes, including
changes in heart rate, conduction pattern, position of the subject, and
noise in the ECG. As a result, observations of transient ST changes are
considered suggestive of ischemia but are not sufficient for a
definitive diagnosis, absent conclusive evidence from imaging studies.

Even in subjects who are known to have myocardial ischemia, ST changes
are not considered a basis for definitive diagnosis of individual
episodes of ischemia. In a subject with an old myocardial infarction,
for example, the infarct may result in an ST segment with a persistent
abnormal pattern (in the frame of reference of the heart). This fixed
pattern appears to change with the subject’s body position (upright,
supine, etc.) because of movement of the ECG elecrodes relative to the
heart. Thus many of those subjects who are most likely to experience
ischemia are also among those most likely to have non-ischemic ST
changes.

Therapeutic intervention to reduce or eliminate transient ischemic
episodes can make a significant difference in quality of life for
affected subjects, and may reduce mortality and morbidity in this
population. Assessment of the effectiveness of therapy is substantially
hindered by the lack of a reliable way of identifying ischemic episodes
during activities of daily living, in which imaging studies are not
possible. If it were possible to distinguish between ischemic and
non-ischemic ST changes in ambulatory ECG recordings made during
subjects’ normal activities, the benefits would be immediate and
substantial, in terms of a reduction in the time needed to determine and
validate effective therapies, hence in the risk and pain experienced by
the affected subjects.

This year’s challenge topic encourages participants to develop novel
approaches to analysis of transient ST changes using the
recently-completed [Long-Term ST
Database](https://physionet.org/physiobank/database/ltstdb/), a
meticulously annotated collection of 86 recordings of 2- and 3-lead
long-term (20-24 hour) ECGs. Each ST change that meets criteria of
clinical significance has been carefully studied by a team of expert
annotators, who have drawn upon all available evidence to determine
which of these events are consistent with a diagnosis of myocardial
ischemia, and which are consistent with other causes. Half of these 86
recordings have been contributed to PhysioNet and are available to
participants as a learning set. The remaining recordings form the test
set.

Participants are challenged to design and implement algorithms that can
closely mimic the decisions made by the expert annotators, classifying
the ST changes (events) in the test set as ischemic or non-ischemic. The
algorithms are not required to detect the events, but only to classify
each given event as ischemic, non-ischemic, or indeterminate.

### Organization of the Challenge

As noted above, the data used for this challenge come from the
[Long-Term ST Database](https://physionet.org/content/ltstdb/1.0.0/).
The learning set consists of
the 43 records available from PhysioNet. Participants should train their
algorithms using these records. The test set consists of the other 43
records.

To enter the challenge, participants will submit their classifiers by
email to PhysioNet, where the entries will be compiled and used to
classify the ST events in the test set. Each algorithm will receive a
score determined by the number of correctly classified events, less the
number of incorrectly classified events (those left unclassified will
not affect the score). Scores will be returned to participants by email,
and high scores will be posted on PhysioNet and updated throughout the
challenge period. Participants may revise and resubmit their entries
until the challenge deadline of noon GMT on Friday, 12 September 2003.

All participants are encouraged to submit an abstract to Computers in
Cardiology 2003 describing their approach to the challenge. (When
submitting your abstract, choose the topic “Computers in Cardiology
Challenge”.) Abstracts are due on Thursday, 1 May 2003 (note: this
deadline has been extended to Thursday, 8 May 2003); details are
available on the [Computers in Cardiology web
site](http://www.cinc.org/). If your abstract is accepted, you will be
expected to prepare a four-page manuscript (due on Tuesday, 23 September
2003) for publication in the conference proceedings, and you will have
the opportunity to discuss your work at the conference. To be eligible
for an award, you must submit an abstract and attend the conference.

The eligible participant whose algorithm receives the highest score will
receive an award of US\$1000, to be presented at [Computers in
Cardiology 2003](http://www.cinc.org/) (in Thessaloniki, Greece, 21-24
September 2003). A selection of the classifiers will be posted on
PhysioNet following the conference.

### Developing an entry

Use the learning set to develop criteria for classifying the ST events.
We recommend that you begin by copying a set of input files for one
record of the [learning set](https://physionet.org/content/ltstdb/1.0.0/)
into an empty local
directory. The files that your program will be permitted to read are:

-   the header (`.hea`) and signal (`.dat`) files, permitting access to the
    digitized ECG signals;
-   the beat annotation (`.atr`) and ST measurement (`.16a`) files,
    providing QRS times of occurrence for each beat, and continuously
    updated ST-segment measurements based on 16-beat moving averages;
-   the `.stf` file, containing the ST level, reference, and deviation for
    each input signal, at two-second intervals throughout the recording
-   the `.klt` file (decompressed from the `.klt.zip` files available
    on-line), containing time series of ST and QRS principal components

In addition, your program will need to have a copy of the `.epi` file for
the record. These text files have been prepared for this Challenge from
the `.stb` reference annotation files of the Long-Term ST Database; they
contain the times of significant ST changes, but not the classifications
of those events. Your program is not expected to detect the events, but
to classify them, so this file is available to substitute for an ST
change detector.

Your program may use any or all of these files as a basis for
classifying the ST events. In principle, all of the other files are
derivable from the signal (`.dat`) file, but you are not expected to do
so! The other files are provided for use as shortcuts to a solution of
the challenge problem; in a clinical application, it would be necessary
to integrate the code needed to detect and classify the QRS complexes,
measure the ST deviations, and detect the ST events.

For example, to work with record s30701 of the learning set, download

-   [s30701.hea](https://physionet.org/content/ltstdb/1.0.0/s30701.hea)
-   [s30701.dat](https://physionet.org/content/ltstdb/1.0.0/s30701.dat)
-   [s30701.atr](https://physionet.org/content/ltstdb/1.0.0/s30701.atr)
-   [s30701.16a](https://physionet.org/content/ltstdb/1.0.0/s30701.16a)
-   [s30701.stf](https://physionet.org/content/ltstdb/1.0.0/s30701.stf)
-   [s30701.klt.zip](https://physionet.org/content/ltstdb/1.0.0/s30701.klt.zip) (decompress
    this using unzip, pkzip, winzip or a similar utility)
-   [s30701.epi](https://physionet.org/content/ltstdb/1.0.0/epi-files/s30701.epi)

The last of these files, s30701.epi, is derived from s30701.stb; it
contains:

      1 40125 2 ?
      2 40129 1 ?
      3 64361 0 ?
      4 64361 1 ?
      5 76639 2 ?
      6 76647 1 ?
      7 77171 2 ?
      8 77551 2 ?
      9 79967 1 ?
     10 79975 2 ?

Each line contains information about one event. From left to right, the
columns contain an event ID number, the time of the event (the elapsed
time from the beginning of the record, in seconds), the signal number
(0, 1, or 2) of the affected ECG signal, and the classification of the
event, where `?` means ‘indeterminate’.

At the end of each run, your program must have copied the `.epi` file into
a `.epo` file, replacing the `?` placeholders with its classifications.
Use `I` to mark ischemic and `N` to mark non-ischemic events; you
may leave indeterminate events marked with `?`. For example, the
correct classifications for record `s30701` are:

      1 40125 2 N
      2 40129 1 N
      3 64361 0 N
      4 64361 1 N
      5 76639 2 I
      6 76647 1 I
      7 77171 2 I
      8 77551 2 I
      9 79967 1 I
     10 79975 2 I

Thus, the first four ST changes in this example are non-ischemic (in
`s30701.sta`, the expert annotators have marked them as due to axis
shift), and the remaining six are consistent with ischemia.

### Scoring

Your program’s score will be determined by comparing the output .epo
files with a set of reference `.epr` files. The `.epr` files are identical
to the `.epi` files, except that the classification of each ST event,
based on the `.stb` annotations, is included in place of the `?`
markers. A point is added to your score for each match (`I`/`I` or `N`/`N`), and
a point is deducted for each mismatch (`I`/`N` or `N`/`I`). ST events left
unclassified (`?`) do not affect your score. (A set of `.epr` files for
the learning set is available for use while you are developing your
classifier. The `.epr` files for the test set are not available; don’t
ask!)

The number of events per record varies considerably, from fewer than ten
to several hundred. To avoid giving undue weight in the score to the
handful of records that have a majority of the events, the `.epr` files
for the test set contain no more than 20 events each (which have been
chosen at random from all of the events in those records with more than
20 annotated events). Only these events will be used as the basis for
scoring the entries; the others will not be counted. The same set of
`.epr` files will be used to score all entries.

### How to Enter

1.  Begin by downloading `stclass.c` (to be used unmodified) and `analyze.c`
    (to be used as a template for your entry).

2.  You will need to write functions in standard (ANSI/ISO) C to replace
    the initialize, analyze, and finalize functions in `analyze.c`:
    -   initialize is called once, before analyze is called the first
        time, and before any of the input files have been opened. Use
        this function to set up any variables needed by your classifier.
    -   analyze is called once per ST event. Its inputs are an event ID
        number, which starts at 1 for the first ST event in each record
        and is incremented by 1 for each subsequent event; the time of
        the event (elapsed time in seconds); and the signal number (0,
        1, or 2) of the affected signal. In each run, all of the ST
        changes identified by the expert annotators within a single
        record will be presented to the analyze function in time order.
    -   finalize is called once, after all of the input files been
        closed. Your algorithm’s classifications are recorded
        immediately after finalize exits.

3.  Use label (defined in `stclass.c`) to record your classifications.
    -   label accepts two input arguments. The first is an event ID
        number, and the second is the label you wish to assign to that
        event (`I`, `N`, or `?`). You can invoke label to mark any
        of the events at any time (so, for example, you can invoke label
        from your analyze function if you wish to label the events one
        at a time, or you can invoke label once per event from your
        finalize function after accumulating information about all of
        the events. Your algorithm can relabel any event by invoking
        label a second (or third, \...) time with the same event ID. Any
        events that you do not label are marked as `?`.

4.  You may, if necessary:

    -   define additional functions
    -   define global variables
    -   include other ANSI/ISO C standard header (`.h`) files
    -   allocate memory as needed using malloc or similar functions
    -   invoke other functions from the ANSI/ISO C standard library and
        math library, and from the WFDB library
    -   write to the standard output or the standard error output (for
        debugging purposes)
    -   create temporary files in the current directory

    If you create temporary files, do so within the current directory
    only, and use file names beginning with temp. Any files created will
    be removed between runs (you cannot save information from one run to
    use in another).

5.  You may not:
    -   modify main or any other part of `stclass.c`
    -   use chdir or any other means to change the current directory
    -   invoke fork, system, or any of the exec family of functions to
        start another program or another process
    -   incorporate code or data that cannot be made freely available
        after the conclusion of the Challenge

6.  All code will be reviewed before being compiled or run. Please keep
    your code neat. If we can’t figure out what your program does, we
    won’t run it!

7.  All code must compile cleanly using:

        gcc -Wall stclass.c -lm -lwfdb

    There must be no errors or warnings of any kind. See the WFDB
    Software Package for information about the WFDB library.

    If your program does not make use of the `.dat`, `.atr` or `.16a` files,
    it can be compiled without the WFDB library using:

        gcc -Wall -DNOWFDB stclass.c -lm

8.  Your program must run to completion within a reasonable time. A
    reasonable time is 5 minutes or less for a 24-hour record running on
    a 1 GHz Athlon under Linux; we will not disqualify programs that
    slightly exceed this limit.

9.  Test your entry before submitting it. Don’t forget to include your
    name, affiliation, and email address in the comment block at the top
    of `analyze.c`. Once you are ready, send a copy of your version of
    `analyze.c` (source only; do not send binaries) via email to
    [webmaster@physionet.org](mailto:webmaster@physionet.org?subject=analyze.c)
    with a subject line of `analyze.c`. Please send `analyze.c` as plain
    text, not as HTML or as a word-processor formatted attachment.

10. You will receive an email confirmation of your entry once it has
    been reviewed. If an entry fails to meet any of the requirements for
    a valid entry, the email will indicate in general terms the nature
    of the problem (e.g., compilation error), but you are responsible
    for debugging your entry. Each valid entry will be assigned an entry
    number, which will be indicated in the email confirmation.

Once your entry has been given a number, we will run it on the test set
and you will receive a score by return email. The top scores will be
posted on PhysioNet and will be updated as new entries arrive. You may
revise and resubmit your entry if you wish; note, however, that the
challenge organizers will give priority to new participants, so that
there may be a delay in receiving scores for revised entries.

We will continue to accept entries until noon GMT on Friday, 12
September 2003. All valid entries submitted before this deadline will be
scored.

At Computers in Cardiology 2003 (in Thessaloniki, Greece, 21-24
September 2003), a prize of US\$1000 will be awarded to the top-scoring
eligible participant. Immediately following the conference, a selection
of the programs entered will be posted with full credit to their
authors, and they will be made freely available under the
[GPL](http://www.gnu.org/licenses/gpl.txt) (or another open source
license of the author’s choice).

Members and affiliates of our research groups at MIT, Boston University,
Harvard Medical School, Beth Israel Deaconess Medical Center, and McGill
University are not eligible for awards, although all are welcome to
participate.

**To qualify for an award, a participant must do all of the following:**

1.  Submit an abstract describing his or her classifier to [Computers in
    Cardiology](http://www.cinc.org/), no later than Thursday, 1 May
    2003 (note: this deadline has been extended to Thursday, 8 May
    2003).
2.  Submit a valid entry no later than noon GMT on Friday, 12
    September 2003.
3.  Attend Computers in Cardiology 2003, 21-24 September 2003, in
    Thessaloniki, Greece.

### Important dates

All deadlines are at noon GMT unless otherwise indicated. Late
submissions will not be accepted.

**Thursday, 8 May 2003**
:   Deadline for submission of abstracts for Computers in
    Cardiology 2003.

**Friday, 12 September 2003**
:   Deadline for submission of entries to PhysioNet.

**Sunday-Wednesday, 21-24 September 2003**
:   Computers in Cardiology, Thessaloniki, Greece.

### Frequently Asked Questions

**Where are the `.epi` and `.epr` files?**

These files are not part of the Long-Term ST Database; they were created
specifically for this challenge, and they can be found in the Files
section below (in the `epi` and `epr` folders).

**Are the classifiers allowed to read the clinical notes included in the
`.hea` files?**

Parsing those notes to understand how to classify individual episodes
would be an impressive accomplishment \... but that is not the intent of
the challenge! The .hea files made available to submitted classifiers
for the test set will be stripped of these notes.

**Why don’t you have a challenge about \...?**

Each year, we receive many suggestions for challenge topics. We
encourage you to contact us with further suggestions.

### Challenge Results

A team of researchers from the University of Newcastle upon Tyne and
Freeman Hospital won the 2003 PhysioNet Computers in Cardiology
Challenge for their work on computer detection of ischaemia from the
electrocardiogram (ECG).

Ischaemia, when the heart muscle is starved of oxygen, is clinically
very important and can indicate heart disease, such as coronary artery
disease. Automated computer detection of the condition in ambulatory ECG
recordings is very difficult because many of the daily activities
undertaken by patients give characteristics on the ECG similar to those
of ischaemia.

The Challenge, organised by Massachusetts Institute of Technology,
PhysioNet, and Computers in Cardiology, is an annual event in which
researchers from around the world compete to solve a specific research
question.

The team from Newcastle (Philip Langley, Emma Bowers, Joanne Wild,
Michael Drinnan, John Allen, Andrew Sims, Nigel Brown and Alan Murray)
are members of the Cardiovascular Physics and Engineering Research Group
from the Department of Medical Physics. The paper was presented by
Philip and certificates and prize money were handed to representatives
of the team at the Computers in Cardiology conference held in
Thessaloniki, Greece.

### Papers

These papers were presented at [*Computers in Cardiology
2003*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. Links below are to copies of these
papers on the CinC web site.

- [Distinguishing Ischemic from Non-Ischemic ST Changes: The
  Physionet/Computers in Cardiology Challenge
  2003](http://www.cinc.org/archives/2003/pdf/235.pdf)\
  GB Moody
- [An Algorithm to Distinguish Ischaemic and Non-Ischaemic ST Changes in
  the Holter ECG](http://www.cinc.org/archives/2003/pdf/239.pdf)\
  P Langley, EJ Bowers, J Wild, MJ Drinnan, J Allen, AJ Sims, N Brown, A
  Murray
- [A Reconstructed Phase Space Approach for Distinguishing Ischemic from
  Non-Ischemic ST Changes using Holter ECG
  Data](http://www.cinc.org/archives/2003/pdf/243.pdf)\
  MW Zimmerman, RJ Povinelli, MT Johnson, KM Ropella

## Files

### Access Policy:
Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files):
[Open Data Commons Attribution License
v1.0](https://physionet.org/content/challenge-2003/view-license/1.0.0/)

#### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2003/distinguishing-ischemic-from-non-ischemic-st-changes-the-physionetcomputing-in-cardiology-challenge-2003-1.0.0.zip)
    (363.3 KB)
-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2003-1.0.0.physionet.org/).
    Login with a Google account is required.
-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2003-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2003/1.0.0/
    ```
