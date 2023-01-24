---
layout: default
---

# Electrocardiographic Imaging of Myocardial Infarction: The PhysioNet/Computing in Cardiology Challenge 2007 

### George Moody

## Announcements

**Papers from the PhysioNet/CinC Challenge 2007** (Dec. 4, 2007,
midnight)

[Papers](papers) by the
participants in the PhysioNet/Computers in Cardiology [Challenge
2007](/2007) are now available, and the
[reference
interpretations](gold-standard.txt) used
to score the Challenge entries have also been posted.

**Winners of the PhysioNet/CinC Challenge 2007** (Oct. 3, 2007,
midnight)

We congratulate the winners of the [PhysioNet / Computers in Cardiology
Challenge 2007](/2007/): Mohamed
Mneimneh, Hamid SadAbadi, and Masood Ghasemi. Thanks to all who
participated, and who contributed data and expertise to make this event
possible.

**Data corrected for the PhysioNet/CinC Challenge 2007** (Sept. 21,
2007, 10:48 a.m.)

The [long-axis LV model of case
3](https://physionet.org/content/challenge-2007/1.0.0/data/case0003-tri/case3_LV.tri), needed
for the additional challenge event 5, has been corrected. The deadline
for submitting entries *for event 5 only* has been extended to noon GMT
on Thursday, 27 September 2007. The deadline for all other events in
this challenge remains noon GMT on Sunday, 23 September 2007.

**Geometric models available for the PhysioNet/CinC Challenge 2007**
(July 6, 2007, 10:57 a.m.)

Detailed geometric models of the heart, lungs, and torso, including a
long-axis LV model, are now available for case 3 only. These have been
prepared by A. van Oosterom and P. van Dam, who have also prepared a
similarly detailed analysis of the infarct geometry for this case based
on gadolinium-enhanced MR images. An additional challenge event that has
been made possible by this analysis. The detailed models, and Matlab
software for viewing them, are available
[here](https://physionet.org/files/challenge-2007/1.0.0/data/case0003-tri/index.html).

**PhysioNet/CinC Challenge 2007** (Jan. 20, 2007, midnight)

The eighth annual [PhysioNet/Computers in Cardiology
Challenge](/2007/) has begun. This
year’s Challenge embraces the disciplines of both electrocardiography
and (for the first time) imaging. Participants will estimate the
location and extent of infarcts using ECG maps, and their estimates will
be evaluated using “gold standard” measurements of gadolinium-enhanced
MRI data.

## Citations

When using this resource, please cite the following publications:

- The PhysioNet Challenge description paper: [Moody, G. (2007). Electrocardiographic Imaging of Myocardial Infarction: The PhysioNet/Computing in Cardiology Challenge 2007.](/2007)
- The PhysioNet resource: [Goldberger, A., Amaral, L., Glass, L., Hausdorff, J., Ivanov, P. C., Mark, R., … & Stanley, H. E. (2000). PhysioBank, PhysioToolkit, and PhysioNet: Components of a new research resource for complex physiologic signals. Circulation [Online]. 101 (23), pp. e215-e220](https://www.ahajournals.org/doi/full/10.1161/01.CIR.101.23.e215)

### Introduction

The aim of Challenge 2007 is to establish how well one can characterize
the location and extent of moderate to large, relatively compact
infarcts using electrocardiographic evidence (supplemented by a model of
the torso geometry and conductivity), in comparison with a “gold
standard” expert analysis of gadolinium-enhanced MRI data.

### Background

Any aspect of clinical medicine is best served by similarly excellent
methods for both diagnosis and therapy. Regarding the common clinical
problem of ischemic heart disease, the diagnostic methods are currently
not as well developed as the therapeutic interventions. This
“mismatch” exists despite clear understanding of both the underlying
basic science and the pathophysiology of ischemic heart disease and of
its primary clinical manifestation, myocardial infarction. Two of the
reasons for this mismatch are disconnections between basic and clinical
scientists and disconnections between clinical applications of the
multiple available individual diagnostic methods, for example,
electrocardiography and myocardial imaging.

This year’s challenge, the eighth in the series, embraces the
disciplines of both electrocardiography and (for the first time)
imaging. Although we expect this challenge to be difficult, we also
expect that it will attract the interest of a very broad portion of the
PhysioNet and CinC communities.

### Challenge 2007 Development

The topic of this year’s challenge, Electrocardiographic Imaging of
Myocardial Infarction, was proposed by Galen Wagner (Duke University),
chairman of the local organizing committee for the 2007 meeting of
Computers in Cardiology (to be held in Durham, NC, USA from Sunday, 30
September through Wednesday, 3 October 2007). The VVRED (Virtual Visual
Reconstructed Electrocardiographic Display) Group, led by Galen Wagner
and by Rob MacLeod (University of Utah) has collected the data, and has
developed the Challenge in collaboration with George Moody (MIT),
representing PhysioNet.

VVRED is an informal group of investigators that has had biannual
meetings hosted by Fred Kornreich (Free University of Brussels) for the
purpose of facilitating advances in ECG imaging \[[1](#ref-1)\]. During the 2nd
VVRED meeting in June 2006, the group discussed the proposed challenge
topic and accepted the role of assisting in its formal development.
VVRED Group member Adriaan van Oosterom (University of Lausanne)
volunteered to work with Galen Wagner and the MALT (Magnetic and
Electrocardiographic Technologies) Group at the Glasgow Western
Infirmary. The MALT studies have acquired serial paired ECG and cardiac
MRI data in patients with acute myocardial infarction. The first of
these studies \[[2](#ref-2)\]
investigated the relationship between anatomic and
electrical cardiac axis; the second (submitted for publication)
addressed the limits of current ECG criteria for acute MI diagnosis.

VVRED Group member Milan Horáček (Dalhousie University) provided body
surface potential mapping (BSPM) capability for MALT patients returning
for their one-year follow-up MRI, and he is now conducting a study aimed
at delineating healed infarcts based on body surface potential maps in
40 of these patients. He has worked with Galen Wagner, MALT physicist
John Foster (University of Glasgow), and Adriaan van Oosterom to present
this problem as the PhysioNet/CinC Challenge 2007.

The challenge is open to a broad range of participants with and without
experience in the area of electrocardiographic imaging. Participants
from the clinical world (the non-modelers) and from the
signal-processing world (the statistical, database-based approaches) are
most welcome. The challenge was introduced during the CinC 2006 meeting
in Valencia, Spain and is now being made available on the PhysioNet web
site.

### The Challenge Data

**All of the challenge data are available in the `data/` subdirectory.**

The MALT sub-study patients were first inventoried to determine the
distribution of infarcts in the three major locations according to
Selvester ECG criteria \[[3](#ref-3)\]. Based on the inventory and on the
availability of all necessary data, the VVRED Group selected two
“training” cases and two “test” cases, in each case with a moderate
to large and relatively compact infarct. Although the labor-intensive
nature of the data preparation process has necessarily resulted in a
small number of training and test cases, we expect that this challenge
will encourage development of larger data sets to support followup
studies of promising methods.

### Organization of the data

**All of the challenge data are available [here](#files).**
Reference interpretations of
the training cases are available
[here](training-set.txt).

The BSPM data, consisting of ECG data for 352 torso-surface sites, are
provided in easy-to-read ASCII format for a single averaged PQRST
complex sampled at 2kHz. These data contain the standard 12 leads, the 7
unweighted Frank leads and the Frank orthogonal XYZ leads (from which
the vector loops may be constructed) as subsets.

The anatomic locations of the 120 recording electrodes, and the
locations of all 352 nodes on the torso surface for which ECG data are
available, are provided as well. For case 3 (one of the two test cases)
only, Fady Dawoud (Dalhousie University) has provided customized torso
and ventricular geometry.

To visualize the torso surface geometry and the BPSM data, you can use
the **map3d** program, freely available from the [University of Utah,
SCI Institute.](http://www.sci.utah.edu/cibc/software/map3d.html)
Commands for using **map3d** on the challenge data are included in the
[data directory](#files).

Selected MRI sections through the heart from apex to base are also
available. These images are from the patient\'s initial MRI study
(outlines without gadolinium enhancement) to prevent disclosure of the
infarct location based on shrinkage of the involved LV region during the
later “remodeling” process. The data from the late enhancement image
using gadolinium are provided for the training-set patients only.

### Reporting Results and Scoring

-   First, download [this sample entry form](entry.txt).
-   For each of the two test cases, participants must estimate one or
    more of the following:
    -   the extent of the infarct (the percentage of myocardial mass
        that is infarcted)
    -   the set of myocardial segments containing infarcted tissue
    -   the myocardial segment containing the centroid (“center of
        mass”) of the infarct (using 17-segment segmentation; see
        figures 3 and 4 in \[[14](#ref-14)\], reproduced
        [here](segmentation))

    Use your favorite text editor to fill in as many of the fields in
    the sample entry form as you can with your estimates. Please note
    that the entry form is a plain text file, not a word processor
    document; keep it in plain text format. Be sure that your entry form
    includes the email address where you wish to have your scores sent.
-   Send the filled-in entry by email to
    [webmaster\@physionet.org](mailto:webmaster@physionet.org?subject=Challenge-2007-entry),
    with the subject line “Challenge-2007-entry”. **Entries will be
    accepted until noon GMT on 23 September 2007.**
-   Entries will be compared against the “gold standard” (gadolinium
    enhanced images). The gold standard images are provided here for the
    two training cases only. The gold standard images for the two test
    cases are available only to the challenge organizers, who will score
    all entries; their decisions are final.
-   Scores will be based on:
    -   EPD: Percentage discrepancy between the extent of the infarct as
        estimated and as determined from the gold standard.
    -   SO: Overlap between the sets of infarct segments as estimated
        and as determined from the gold standard.
    -   CED: Distance between the centroid of the infarct as estimated
        and as determined from the gold standard.
-   You will receive your scores by return email. The first scores will
    be sent on or about 27 April 2007; scores for entries received after
    that date will usually be sent within a day of receipt.

Given the estimated and gold standard sets of infarct segments,
“overlap” (SO) is defined as the number of segments in both sets
divided by the number of segments in either set (a value between 0 and
1, where 1 is a perfect match and 0 indicates that the sets are
completely disjoint). Distance between the centroid estimates (CED) is
defined as the number of segment boundaries crossed along the shortest
path connecting the estimates.

You will receive up to three scores (EPD, SO, and CED) for your entry,
but each score represents the sum of the subscores obtained for each of
the two test cases. Individual subscores will not be made available
until after the end of the Challenge in September.

### Events and Awards

If you submitted an abstract describing your work on the challenge no
later than 7 May 2007 to Computers in Cardiology, you may be eligible
for one or more awards that will be presented during the final plenary
session of the conference on Wednesday, 3 October 2007.

Three awards of US\$250 each will be given to the participants who
achieve the best (lowest) EPD, SO, and CED scores, and a fourth award of
US\$250 will be given to the participant who achieves the best average
rank among all participants with respect to the other three events.

**New event added 6 August 2007:**

Participants are invited to determine which nodes in
the [long-axis LV model of case 3](https://physionet.org/content/challenge-2007/1.0.0/data/case0003-tri/case3_LV.tri) lie
above infarcted tissue. To enter this event, send a list of these nodes
to
[webmaster\@physionet.org](mailto:webmaster@physionet.org?subject=Challenge-2007-entry),
with the subject line “Challenge-2007-event-5-entry”. Entries will be
scored using an overlap measure similar to that defined for SO above. An
award of US\$250 will be provided to the most successful participant in
this event.

### Frequently Asked Questions

**This is a hard problem, and I won’t be able to get final results in
time for the abstract deadline. What needs to be submitted in the
abstract?**

\[The abstract deadline has now passed, so this question and its answer
are moot.\]

Briefly, you will need to submit a short (\~300 words) abstract, which
may not include illustrations, by 7 May.

It would be ideal if you have submitted rough results for the Challenge
problem no later than 3 May, so they can be scored and so that you can
report your score in your abstract. If this is not possible, please
discuss in your abstract relevant studies you have performed to date,
touching on any novel aspects of your methods and quoting whatever
results you have. Generally abstracts containing only “we will show
\...” without any results are not accepted, so it is very important
that you demonstrate in the abstract that you have actually accomplished
something already. Given the complexity of the challenge and the short
time available for working on it, the abstract reviewers will certainly
make some allowance for those who are unable to obtain results on the
challenge problem by the abstract deadline, if it appears they will be
able to do so before the conference in September.

**May I revise my entry?**

You may submit entries at any time until the final deadline of noon GMT
on 23 September. Each entry will be scored, and you may attempt to
improve your score by submitting up to two revised entries. Only two
revisions (three entries in all) are allowed in this challenge, since
only a small number would be needed to obtain a good score simply by
guessing, and we want to avoid that possibility!

You may choose any of your (up to three) entries as the basis for
ranking, by sending an email specifying your choice on or before noon
GMT on 23 September. Please remember that it may take up to 24 hours
after submitting an entry to receive scores, so try to submit your last
entry at least a day before the deadline if you think you may want to
exercise your choice. Your last entry will be used for ranking unless
you specify otherwise.

**If my abstract is accepted, what else must I do?**

In September, if your abstract is accepted, you will be expected to
submit a four-page paper, which may be illustrated, for publication in
Computers in Cardiology on-line and in print. You will also be expected
to attend the conference (30 September - 3 October 2007 in Durham, North
Carolina, USA) and to present your work in one of the scientific
sessions of the conference, either as a poster or as a 10-minute oral
presentation. Your paper and presentation should include your final
results.

If you will need a visa in order to travel to the USA for the
conference, please apply for it as soon as possible to avoid
disappointment. The process of obtaining a visa to visit the USA has
become very complicated and very slow in recent years.

**Why don’t you have a challenge about \...?**

Each year, we receive many suggestions for challenge topics. We
encourage you to [contact us](/about/#about-us-and-contact-information) with further suggestions.

### References

1.  MacLeod R, Kornreich F, van Oosterom A, Rautaharju P, Selvester R,
    Wagner GS, Zywietz C. [Report of the first virtual visualization of
    the reconstructed electrocardiographic display
    symposium](http://www.ncbi.nlm.nih.gov/entrez/query.fcgi?cmd=Retrieve&db=PubMed&list_uids=16216618&dopt=Abstract).
    J Electrocardiol 2005;38:385-399.
2.  Engblom H, Foster JE, Martin TN, Groenning BA, Pahlm O, Dargie HJ,
    Wagner GS, Arheden H. [The relationship between electrical axis by
    12 lead electrocardiogram and anatomical axis of the heart by
    cardiac magnetic resonance in healthy
    subjects](http://www.ncbi.nlm.nih.gov/entrez/query.fcgi?db=pubmed&cmd=Retrieve&dopt=AbstractPlus&list_uids=16169332&query_hl=3&itool=pubmed_docsum).
    Am Heart J 2005 Sep;150:507-512.
3.  Anderson WD, Wagner NB, Lee KL, White RD, Yuschak J, Behar VS,
    Selvester RH, Ideker RE, Wagner GS. [Evaluation of a QRS scoring
    system for estimating myocardial infarct size. VI. Identification of
    screening criteria for non-acute myocardial
    infarcts](http://www.ncbi.nlm.nih.gov/entrez/query.fcgi?cmd=Retrieve&db=PubMed&list_uids=3354433&dopt=Citation).
    Am J Cardiol 1988;61:729-733.
4.  Oostendorp TF, Nenonen J, and Korhonen P. [Non-invasive estimation
    of the activation sequence of the heart in the presence of old
    myocardial infarctions: comparison to invasive patient
    data](http://www.ncbi.nlm.nih.gov/entrez/query.fcgi?cmd=Retrieve&db=PubMed&list_uids=12539102&dopt=Citation).
    J Electrocardiol 2002;35 Suppl:75-80.
5.  Hoekema R, Uijen GJH, and van Oosterom A. Geometrical aspects of the
    inter-individual variability of multilead ECG recordings, IEEE Trans
    Biomed Eng 2001; BME-48:551-559
6.  R.M. Gulrajani, P. Savard, and F.A. Roberge. The inverse problem in
    electrocardiography: Solutions in terms of equivalent sources. Crit.
    Rev. Biomed. Eng., 16:171-214, 1988.
7.  R.M. Gulrajani, F.A. Roberge, and P. Savard. The inverse problem of
    electrocardiography. In P.W. Macfarlane and T.D. Veitch Lawrie,
    editors, Comprehensive Electrocardiology, pages 237-288. Pergamon
    Press, Oxford, England, 1989.
8.  Y. Rudy and B.J. Messinger-Rapport. The inverse solution in
    electrocardiography: Solutions in terms of epicardial potentials.
    Crit. Rev. Biomed. Eng., 16:215-268, 1988.
9.  Y. Rudy and H. Oster. The electrocardiographic inverse problem.
    Crit. Rev. Biomed. Eng., 20:22-45, 1992.
10. R.S. MacLeod, R.M. Miller, M.J. Gardner, and B.M. Horáček.
    Application of an electrocardiographic inverse solution to localize
    myocardial ischemia during percutaneous transluminal coronary
    angioplasty. J. Cardiovasc. Electrophysiol., 6:2-18, 1995.
11. R.S. MacLeod and D.H. Brooks. Recent progress in inverse problems in
    electrocardiology. IEEE Eng. in Med. & Biol. Soc. Magazine,
    17(1):73-83, January 1998.
12. A.J. Pullan, L.K. Cheng, M.P. Nash, C.P. Bradley, and D.J. Paterson.
    Non-invasive electrical imaging of the heart - theory and model
    development. Annal. Biomed. Eng., 29(10):817-836, 2001.
13. C. Ramanathan, R.N. Ghanem, P. Jia, K. Ryu, and Y. Rudy. Noninvasive
    electrocardiographic imaging for cardiac electrophysiology and
    arrhythmia. Nat Med, 10(4):422-428, April 2004.
14. M.D. Cerqueira, N.J. Weissman, V. Dilsizian, A.K. Jacobs, S. Kaul,
    et al. [Standardized myocardial segmentation and nomenclature for
    tomographic imaging of the
    heart](http://circ.ahajournals.org/cgi/content/full/105/4/539).
    Circulation, 105:539-542, 2002.
15. G. Wagner, G. Bub, P. Kohl, and F. Pillekamp. Electrocardiography
    and imaging. J Electrocardiol 40:S66-S70, 2007.

### Challenge Results

The winners of the Challenge were announced at the concluding plenary
session of Computers in Cardiology 2007. They are Mohamed Mneimneh
(Marquette University, Milwaukee, USA), Hamid SadAbadi (K.N. Toosi
University of Technology, Tehran, Iran), and Masood Ghasemi (K.N. Toosi
University of Technology, Tehran, Iran). Congratulations to them, and to
all of the participants who tackled this very difficult challenge.
[Final results](final-scores) for all
participants show that case 4 was particularly challenging.
Interestingly, the best results were obtained from the ECG signals
alone, without reference to the patient-specific torso models made
possible from the MR images, suggesting that further improvement should
be possible using the additional information.

### Papers

These papers were presented at [*Computers in Cardiology
2007*](http://www.cinc.org/). Please cite this publication when
referencing any of these papers. These papers have been made available
by their authors under the terms of the Creative Commons Attribution
License 2.5 ([CCAL](http://creativecommons.org/licenses/by/2.5/)). We
wish to thank all of the authors for their contributions.

These papers were written by participants in the Challenge, who
presented their work during the special challenge session at Computers
in Cardiology in Durham, North Carolina, on Tuesday, 2 October 2007.

- [Model-Based Approach to the Localization of
  Infarction](papers/0173.pdf)\
  D Farina, O Dössel
- [Using Inverse Electrocardiography to Image Myocardial
  Infarction](papers/0177.pdf)\
  FD Dawoud
- [Body Surface Potential Mapping for Detection of Myocardial Infarct
  Sites](0181.pdf)\
  P Zarychta, FE Smith, ST King, AJ Haigh, A Klinge, D Zheng, S Stevens,
  J Allen, A Okelarin, P Langley, A Murray
- [RPS/GMM Approach toward the Localization of Myocardial
  Infarction](0185.pdf)\
  MA Mneimneh, RJ Povinelli
- [Electrocardiographic Imaging of Myocardial Infarction Using Heart
  Vector Analysis](papers/0625.pdf)\
  M Ghasemi, A Jalali, H SadAbadi, M Atarod, H Golbayani, P Ghorbanian,
  A Ghaffari
- [Variation of ECG Features on Torso Plane: An Innovative Approach to
  Myocardial Infarction
  Detection](papers/0629.pdf)\
  H SadAbadi, A Jalali, M Ghasemi, P Ghorbanian, M Atarod, H Golbayani,
  A Ghaffari

## Files

### Access Policy
Anyone can access the files, as long as they conform to the terms of the
specified license.

### License (for files)
[Open Data Commons Attribution License
v1.0](https://physionet.org/content/challenge-2007/view-license/1.0.0/)

### Access the files

-   [Download the ZIP
    file](https://physionet.org/static/published-projects/challenge-2007/electrocardiographic-imaging-of-myocardial-infarction-the-physionetcomputing-in-cardiology-challenge-2007-1.0.0.zip)
    (97.5 MB)

-   Access the files using the Google Cloud Storage Browser
    [here](https://console.cloud.google.com/storage/browser/challenge-2007-1.0.0.physionet.org/).
    Login with a Google account is required.

-   Access the data using the Google Cloud command line tools (please
    refer to the
    [gsutil](https://cloud.google.com/storage/docs/gsutil_install)
    documentation for guidance):

    ``` shell-command
    gsutil -m -u YOUR_PROJECT_ID cp -r gs://challenge-2007-1.0.0.physionet.org DESTINATION
    ```

-   Download the files using your terminal:

    ``` shell-command
    wget -r -N -c -np https://physionet.org/files/challenge-2007/1.0.0/
    ```
