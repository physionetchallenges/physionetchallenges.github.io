---
layout: 2018
---

[comment]: <> (<img style="float: right;" src="../assets/img/physionet-cinc.gif" width="258" height="105" align="right">)

# You Snooze, You Win: the PhysioNet/Computing in Cardiology Challenge 2018 

#### Mohammad Ghassemi, Benjamin Moody, Li-wei Lehman, Roger Mark, Gari D. Clifford 

### <a name="announcements"></a> Announcements

<a name="2019.02.22"></a>__22 February 2019:__ [Publications](papers) from the 2018 Challenge are now available.

<a name="2018.11.28"></a>__28 November 2018:__

-   The Journal of Physiological Measurement is now accepting
    submissions in the focus issue: [Automated Analysis of Arousals,
    Sleep and Sleep-Related Disorders Using Physiological Time
    Series](https://iopscience.iop.org/journal/0967-3334/page/Automated_Analysis_Arousals_Sleep_Sleep-Related_Disorders).
    Please included updated results from the test dataset if you develop
    a new algorithm. Note that the scope does not confine you to the
    data and topic of this year's Challenge. Please see
    [here](https://iopscience.iop.org/journal/0967-3334/page/Automated_Analysis_Arousals_Sleep_Sleep-Related_Disorders)
    for more information on the scope and how to submit. The deadline is
    set for the end of February 2019.

<a name="2018.10.10"></a>__10 October 2018:__

-   [Official results](results.csv), as well as a [paper describing the
    Challenge](papers/challenge2018cinc.pdf), are now available. Top scores
    were achieved by
    1.  __Matthew Howe-Patterson, Bahareh Pourbabaee, and Frederic
        Benard__ (0.54)
    2.  __Guðni Fannar Kristjansson, Heiðar Már Þráinsson, Hanna
        Ragnarsdóttir, Bragi Marinósson, Eysteinn Gunnlaugsson, Eysteinn
        Finnsson, Sigurður Ægir Jónsson, Halla Helgadóttir, and Jón
        Skírnir Ágústsson__ (0.45)
    3.  __Runnan He, Kuanquan Wang, Yang Liu, Na Zhao, Yongfeng Yuan,
        Qince Li, and Henggui Zhang__ (0.43)

    An unofficial entry from __Hongyang Li and Yuanfang Guan__ (who
    unfortunately missed the deadline to submit an abstract) achieved a
    score of 0.55.

<a name="2018.09.01"></a>__1 September 2018:__

-   Challenge entry submission is now closed. Authors must select the
    entry they wish to be run against the full Challenge data set before
    10 Sept 2018 (midnight GMT, 7pm EDT). After this deadline the most
    recent entry (only) will be selected and evaluated on the full test
    data.
-   Winners will be announced and prizes presented at [Computing in
    Cardiology](https://cinc.org) on 26 Sept 2018.

<a name="2018.06.20"></a>__20 June 2018:__

-   CinC abstract acceptances/rejections have now been sent out.
-   If your abstract was rejected, do not be despondent - please see
    [Rules and Deadlines](#rules-and-deadlines) below for a second chance to have
    your abstract accepted for and stay in the official running for the
    Challenge. This is chance is open to everyone, not just those with
    rejected abstracts.
-   If your abstract was accepted, please [log in to the conference
    site](https://www.softconf.com/i/cinc2018/) and agree that you will
    attend. Then, you must submit a full article describing your results
    and mark it as a preprint (for others to read) by September 15th.
    (Don't forget that the competition deadline is noon GMT on the 1st
    September - this deadline will _not_ be extended)
-   __If you will need a visa to attend CinC, please do this
    immediately__, and [follow these
    instructions](https://web.archive.org/web/20181218211559/cinc2018.org/visa/) (archived snapshot).

<a name="2018.05.07"></a>__7 May 2018:__

-   [Top scores in the Unofficial Phase](unofficial-phase-results.csv)
    were achieved by __Matthew HP and Bahareh Pourbabaee__ with a score
    of 0.439, __Yang Liu and Runnan He__ with a score of 0.244, and
    __Márton Görög, Bálint Varga, and Péter Hajas__ with a score of
    0.228.
-   An [updated set of arousal files](new-arousals.zip) are now
    available.
-   A [Matlab implementation of the scoring function](scoring/score2018.m) is
    now available.
-   Both the Python and Matlab sample submissions have been updated to
    use the new scoring code.

<a name="2018.04.19"></a>__19 April 2018:__

-   A Python implementation of the scoring function (gross area under
    precision-recall curve) is available [here](scoring/score2018.py).

<a name="2018.04.10"></a>__10 April 2018:__

-   A second [sample submission, implemented using Matlab](#sample-submission), has
    been posted.
-   _Be sure to submit your abstract for Computing in Cardiology before
    April 15!_ See [the CinC site](https://www.cinc.org/cinc-conference-program-abstracts) for more information. Please submit an abstract with your _training_
    results, even if you have not yet been able to obtain a score on the
    test set.

<a name="2018.04.07"></a>__7 April 2018:__

-   A [sample submission and scoring function](#sample-submission) are now online.
-   The entry submission system is now open; you can access it
    [here](https://moody-challenge.physionet.org/).
-   The deadline for the Unofficial Phase has been extended. The new
    deadline is noon GMT, April 13.

<a name="2018.02.21"></a>__21 February 2018:__

-   PhysioNet Challenge data can now be [downloaded
    here.](https://moody-challenge.physionet.org/2018/data/)

If you have any questions or comments regarding this challenge, please
post it directly in our [Community Discussion Forum](https://groups.google.com/g/physionet-challenges). This will
increase transparency (benefiting all the competitors) and ensure that
all the challenge organizers see your question.

## <a name="introduction"></a> Introduction

At the end of last year, American scientists Jeffrey Hall, Michael
Rosbash and Michael Young received a Nobel Prize in Physiology *“for
their discoveries of molecular mechanisms controlling the circadian
rhythm”*—the mechanism that regulates sleep ([Osborn,
2017](https://www.newsweek.com/nobel-prize-medicine-2017-winners-jeffrey-c-hall-michael-rosbash-and-michael-675266)).
The precise reasons why humans sleep (and even how much sleep we need)
remains a topic of scientific inquiry. Contemporary theorists indicate
that sleep may be responsible for learning and/or the clearing of neural
waste products ([Ogilvie and Patel,
2017](https://www.health.harvard.edu/press_releases/importance_of_sleep_and_health)).

While the precise reasons why we sleep are not perfectly understood,
there is consensus on the importance of sleep for our overall health,
and well-being. Inadequate sleep is associated with a wide range of
negative outcomes including: impaired memory and learning, obesity,
irritability, cardiovascular dysfunction, hypotension, diminished immune
function ([Harvard Medical School,
2006](https://www.ncbi.nlm.nih.gov/pmc/articles/PMC3181883/)),
depression ([Nutt et al,
2008](https://www.ncbi.nlm.nih.gov/pmc/articles/PMC3988690/)), and
quality of life ([Lee,
2009](https://sleep.org/articles/what-happens-during-sleep/)). Further
studies even suggest _causal_ links between quality of sleep, and
important outcomes including mental health.

It follows that improving the quality of sleep could be used to improve
a range of societal health outcomes, more generally. Of course, the
treatment of sleep disorders is necessarily preceded by the diagnosis of
sleep disorders. Traditionally, such diagnoses are developed in sleep
laboratory settings, where polysomnography, audio, and videography of
sleeping subject may be carefully inspected by sleep experts to identify
potential sleep disorders.

One of the more well-studied sleep disorders is Obstructive Sleep Apnea
Hypopnea Syndrome (or simply, apnea). Apneas are characterized by a
complete collapse of the airway, leading to awakening, and consequent
disturbances of sleep. While apneas are arguably the best understood of
sleep disturbances, they are not the only cause of disturbance. Sleep
arousals can also be spontaneous, result from teeth grinding, partial
airway obstructions, or even snoring. In this year's PhysioNet
Challenge we will use a variety of physiological signals, collected
during polysomnographic sleep studies, to detect these other sources of
arousal (non-apnea) during sleep.

## <a name="challenge-data"></a> Challenge Data

Data for this challenge were contributed by the Massachusetts General
Hospital's (MGH) Computational Clinical Neurophysiology Laboratory
(CCNL), and the Clinical Data Animation Laboratory (CDAC). The dataset
includes 1,985 subjects which were monitored at an MGH sleep laboratory
for the diagnosis of sleep disorders. The data were partitioned into
balanced training (n = 994), and test sets (n = 989).

The sleep stages of the subjects were annotated by clinical staff at the
MGH according to the American Academy of Sleep Medicine (AASM) manual
for the scoring of sleep. More specifically, the following six sleep
stages were annotated in 30 second contiguous intervals: _wakefulness,
stage 1, stage 2, stage 3, rapid eye movement (REM), and undefined._

Certified sleep technologists at the MGH also annotated waveforms for
the presence of arousals that interrupted the sleep of the subjects. The
annotated arousals were classified as either: _spontaneous arousals,
respiratory effort related arousals (RERA), bruxisms, hypoventilations,
hypopneas, apneas (central, obstructive and mixed), vocalizations,
snores, periodic leg movements, Cheyne-Stokes breathing or partial
airway obstructions._

The subjects had a variety of physiological signals recorded as they
slept through the night including: electroencephalography (EEG),
electrooculography (EOG), electromyography (EMG), electrocardiology
(EKG), and oxygen saturation (SaO2). Excluding SaO2, all signals were
sampled to 200 Hz and were measured in microvolts. For analytic
convenience, SaO2 was resampled to 200 Hz, and is measured as a
percentage.

## <a name="objective-of-the-challenge"></a> Objective of the Challenge

The goal of the challenge is use information from the available signals
to correctly classify target arousal regions. For the purpose of the
Challenge, _target arousals_ are defined as regions where either of the
following conditions were met:

-   From 2 seconds before a RERA arousal begins, up to 10 seconds after
    it ends or,
-   From 2 seconds before a non-RERA, non-apnea arousal begins, up to 2
    seconds after it ends.

Please note that regions falling within 10 seconds before or after a
subject wakes up, has an apnea arousal, or a hypopnea arousal __will not
be scored__ for the Challenge.

We have pre-computed the target arousals for you. They are contained in
a sample-wise vector (described below in “Accessing the Data”), marked
by “1”. Regions that will not be scored are marked by a “-1”, and
regions that will be penalized if marked by your algorithm are marked by
“0”. _You do not need to recompute these scores._

## <a name="accessing-the-data"></a> Accessing the Data

-   __[Click here](data/training.torrent) to download the complete training
    database (135 GB) using BitTorrent.__
-   __[Click here](data/test.torrent) to download the complete test database
    (133 GB) using BitTorrent.__

If you don’t have a BitTorrent client, we recommend
[Transmission](https://transmissionbt.com/).

The [Challenge data repository](data/)
contains two directories (`training` and `test`) which are each
approximately 135 GB in size. Each directory contains one subdirectory
per subject (e.g. `training/tr03-0005`). Each subdirectory contains
signal, header, and arousal files; for example:

1.  `tr03-0005.mat`: a Matlab V4 file containing the signal data.
2.  `tr03-0005.hea`: record header file - a text file which describes
    the format of the signal data.
3.  `tr03-0005.arousal`: arousal and sleep stage annotations, in WFDB
    annotation format.
4.  `tr03-0005-arousal.mat`: a Matlab V7 structure containing a
    sample-wise vector with three distinct values (+1, 0, -1) where:
    -   +1: Designates arousal regions
    -   0: Designates non-arousal regions
    -   -1: Designates regions that __will not be scored__

Table 1 lists functions that can be used to import the data into Python,
Matlab, and C programs.

__Table 1:__ Functions that can be used to import Challenge data.

| File type                             | Python                                                                        | Matlab                                                                            | C/C++                                                                 |
| :---                                   | :---                                                                          | :---                                                                              | :---                                                                  |
| Signal (.mat) and header (.hea) files | [wfdb.rdrecord](https://wfdb.readthedocs.io/en/latest/wfdb.html#wfdb.rdrecord) | [rdmat](https://physionet.org/content/wfdb-matlab/0.10.0/mcode/rdmat.m) | [isigopen](https://physionet.org/physiotools/wpg/wpg_18.htm#isigopen) |
|
| Arousal annotation files (.arousal) | [wfdb.rdann](https://wfdb.readthedocs.io/en/latest/wfdb.html#wfdb.rdann)                        | [rdann](https://physionet.org/physiotools/wag/rdann-1.htm) | [annopen](https://physionet.org/physiotools/wpg/wpg_18.htm#annopen) |
| Arousal files (.mat)                | [scipy.io.loadmat](https://docs.scipy.org/doc/scipy/reference/generated/scipy.io.loadmat.html) | [load](https://www.mathworks.com/help/matlab/ref/load.html)                       | [libmatio](https://sourceforge.net/projects/matio/)                 |

## <a name="submitting-your-entry"></a> Submitting your Entry 

Participants should use the provided signal and arousal data to develop
a model that classifies test-set subjects. More specifically, for each
subject in `/test`, participants must generate a `.vec` text file that
describes the probability of arousal at each sample, such as:

```
    0.001
    0.000
    0.024
    0.051
```

The names of the generated annotation files should match the name of the
test subject. For instance, `test/te09-0094.mat` should have a
corresponding file named `annotations/te09-0094.vec`.

Entries must be submitted as a zip file containing:

-   All of the code and data files needed to train and run your
    algorithm
-   An `AUTHORS.txt` file containing the list of authors
-   A `LICENSE.txt` file containing the license for your code
-   The `.vec` files described above

To upload your entry, create a [PhysioNetWorks](https://archive.physionet.org/users/login.shtml)
account (if you don’t have one), and go to
[challenge.physionet.org](https://challenge.physionet.org/). Entries
must be uploaded prior to the [deadline](#rules-and-deadlines) in order to be
eligible.

### <a name="scoring"></a> Scoring

Your final algorithm will only be graded for its binary classification
performance on target arousal and non-arousal regions (designated by +1
and 0 in `teNN-NNNN-arousals.mat`), measured by the area under the
precision-recall curve. The area is defined as follows:

$$R_{j} = \frac{\text{number of arousal samples with predicted probability} \left( {j/1000} \right) \text{or greater}}{\text{total number of arousal samples}}$$

$$P_{j} = \frac{\text{number of arousal samples with predicted probability} \left( {j/1000} \right) \text{or greater}}{\text{total number of samples with predicted probability} \left( {j/1000} \right) \text{or greater}}$$

$$\textit{AUPRC} = {\sum\limits_{j}{P_{j}\left( {R_{j} - R_{j + 1}} \right)}}$$

Note that this is the _gross_ AUPRC (i.e., for each possible value of \\(j\\), the precision and recall are calculated for the _entire test
database_), which is not the same as averaging the AUPRC for each
record.

A Python implementation of the scoring algorithm is available
[here](scoring/score2018.py), and a Matlab/Octave implementation is
[here](scoring/score2018.m).

## <a name="sample-submission"></a> Sample Submission

Two simple example algorithms are provided and may be used as a template
for your own submission:

-   Python (2.7 or 3.x), using scikit-learn ([download](sample/sample-python.zip)).
-   Matlab ([download](sample/sample-matlab.zip)).

## <a name="rules-and-deadlines"></a> Rules and Deadlines

Entrants may have an overall total of up to three submitted entries over
both the unofficial and official phases of the competition (see [Table
2](#table-2)). Following submission, entrants will receive an email
confirming their submission and reporting how well their arousal
annotations match those of the held-out test set.

All deadlines occur at noon GMT (UTC) on the dates mentioned below. If
you do not know the difference between GMT and your local time, find out
what it is _before_ the deadline!

<a id="table-2"></a> __Table 2:__ Rules and deadlines.

|                               | _Start at noon GMT on_ | _Entry limit_ | _End at noon GMT on_ |
| :---                          | :---                  | :---          | :---                 |
| __Unofficial Phase__          | 15 February           | 1             | 13 April             |
| __[Hiatus]__                  | 13 April              | 0             | 22 April             |
| __Official Phase__            | 23 April              | 2             | 1 September          |
| _\* Wildcard submissions due_ |                       |               | 15 July              |


All official entries must be received no later than __noon GMT on
Saturday, 1 September 2018__. In the interest of fairness to all
participants, late entries will not be accepted or scored. Entries that
cannot be scored (because of missing components, improper formatting, or
excessive run time) are not counted against the entry limits.

To be eligible for the __open-source award__, you must do all of the
following:

1.  Submit at least one open-source entry that can be scored before the
    Phase I deadline __(noon GMT on Monday, 9 April 2018)__.
2.  Submit at least one entry during the second phase __(between noon
    GMT on Monday, 16 April 2018 and noon GMT on Saturday, 1
    September 2018)__. _Only your final entry will count for ranking._
3.  __Entering an Abstract to CinC__: Submit an acceptable abstract
    (about 299 words) on your work on the Challenge to [Computing in
    Cardiology](https://www.cinc.org/information-for-computing-in-cardiology-authors/)
    no later than __15 April 2018__. Include the overall score for your
    Phase I entry in your abstract. Please select "PhysioNet/CinC
    Challenge" as the topic of your abstract, so it can be identified
    easily by the abstract review committee. You will be notified if
    your abstract has been accepted by email from CinC during the first
    week in June.
4.  __Wildcard submissions__: For teams who did not submit an abstract
    in time, or whose abstracts were not accepted, the team who submits
    the highest-scoring entry before __15 July 2018__ will have another
    chance to compete, if they submit a high-quality abstract and
    present their work at the CinC conference. We will contact the
    winners in July with more information.
5.  Submit a full (4-page) paper on your work on the Challenge to CinC
    no later than the deadline of conference paper submission.
6.  Attend CinC 2018 (__23-26 September 2018__) in Maastricht and
    present your work there.

Please do not submit analysis of this year's Challenge data to other
Conferences or Journals until after CinC 2018 has taken place, so the
competitors are able to discuss the results in a single forum. We expect
a special issue from the journal [_Physiological
Measurement_](https://iopscience.iop.org/journal/0967-3334) to follow the
conference and encourage all entrants (and those who missed the
opportunity to compete or attend CinC 2018) to submit extended analysis
and articles to that issue, taking into account the publications and
discussions at CinC 2018.

## <a name="attending-the-conference"></a> Attending the Conference

If your abstract is accepted, you must [log in to the conference
site](https://www.softconf.com/i/cinc2018/) and agree that you will
attend. Then, you must submit a full article describing your results and
mark it as a preprint (for others to read) by September 15th. (Don’t
forget that the competition deadline is noon GMT on the 1st September -
this deadline will _not_ be extended.)

After agreeing to attend, you must register for the conference, pay the
conference fee (prices go up after July ends), and secure a visa if you
need one. See [the Computing in Cardiology
site](https://www.cinc.org/information-for-computing-in-cardiology-authors/)
for more information.

If you need a visa, we _strongly_ suggest you register this week and
begin the process. Visas can take months to issue and attendance is
mandatory - you cannot receive a prize if you do not attend because
defending your work is part of the Challenge. The conference (not
PhysioNet) will supply you with a letter for your visa. Please [see the
CinC 2018 site](https://web.archive.org/web/20181218211559/cinc2018.org/visa/) (archived snapshot) for details on how to
obtain that letter and who to contact. If you have any questions about
this process, or are concerned about paying the conference fee before
securing a visa, please contact the conference organizers, not
PhysioNet.

If your abstract is rejected, then you have one more chance! This year
we are introducing a ‘wildcard’ submission. On July the 15th, the top
scoring entry that has _not_ so far been accepted to CinC will be
offered the opportunity to submit another (or a new) abstract to the
conference system (containing full results). If the team can submit a
quality abstract (with performance results) and register for the
conference then it\'s members will be eligible for a prize (assuming
they also attend the conference and present a poster). Don’t forget,
your abstract was probably rejected because it didn’t contain any
useful results (even on training data) and/or did not describe your
methods well. So please pay attention to the abstract when submitting -
it won’t be automatic. We strongly believe that if you are unable to
explain what you did and why, then the code is of very limited value.

We hope this is a suitable encouragement for teams that are either late
to the Challenge or failed to secure a place at the conference to
continue with their efforts in the competition. It would be a shame not
to see potentially great works at the conference.

Look out for future announcements via [the community discussion
forum](https://groups.google.com/group/physionet-challenges).

## <a name="after-the-challenge"></a> After the Challenge

As is customary, we hope to run a special issue in [_Physiological
Measurement_](https://iopscience.iop.org/journal/0967-3334) with a
closing date of 31 January 2019. We will therefore encourage competitors
(and non-competitors) to submit updates and further reworks based on the
Challenge after the award ceremony at the Computing in Cardiology
Conference in Maastricht in September.

## <a name="obtaining-complimentary-matlab-licenses"></a> Obtaining complimentary MATLAB licenses

[The MathWorks](https://www.mathworks.com/) has kindly decided to sponsor
Physionet's 2018 Challenge providing licenses. The MathWorks is offering
to all teams that wish to use MATLAB, complimentary licenses. Users can
apply for a license and learn more about MATLAB support through The
Mathworks’ [PhysioNet
Challenge](https://www.mathworks.com/academia/student-competitions/physionet.html)
link. If you have questions or need technical support, please contact
The MathWorks at <studentcompetitions@mathworks.com>.

---

PhysioNet is supported by the
[National Institute of General Medical Sciences (NIGMS)](https://www.nigms.nih.gov/) and the [National Institute of Biomedical Imaging and Engineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant number 2R01GM104987-09.
