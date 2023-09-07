---
layout: after_2015
---

[comment]: <> (<img style="float: right;" src="../assets/img/physionet-cinc.gif" width="258" height="105" align="right">)

# Predicting Neurological Recovery from Coma After Cardiac Arrest: The George B. Moody PhysioNet Challenge 2023

Matthew A. Reyna<sup>[*](#co-first)</sup>, Edilberto Amorim<sup>[*](#co-first)</sup>, Reza Sameni, James Weigle, Andoni Elola, Ali Bahrami Rad, Salman Seyedi, Hyeokhyen Kwon, Wei-Long Zheng, Mohammad M. Ghassemi, Michel J. van Putten, Jeanette Hoffmeijer, Nicolas Gaspard, Adithya Sivaraju, Susan Herman, Jong Woo Lee, M. Brandon Westover<sup>[**](#co-senior)</sup>, Gari D. Clifford<sup>[**](#co-senior)</sup>

<div style="text-align: right"><a name="co-first"></a><a name="co-senior"></a><sup>* co-first authors, ** co-senior authors</sup></div>

## <a name="announcements"></a> Announcements

<a name="2023.08.24"></a>__August 24, 2023:__ Thanks to our sponsors, a pre-conference hackathon will take place on Sunday, October 1 in Atlanta. Registration is required. Rules and more information can be found [here](#hackathon).

<a name="2023.08.24"></a>__August 24, 2023:__ Two “wild card” teams were approved for inclusion in the Challenge. We are looking forward to meeting them in Atlanta!

<a name="2023.06.09"></a>__June 9, 2023:__ The official phase of the George B. Moody PhysioNet Challenge 2023 has begun! We have greatly expanded the data, which now includes continuous EEG and ECG recordings. Please see our [announcement](https://groups.google.com/g/physionet-challenges/c/VhvujQn4us4) on the [Challenge forum](https://groups.google.com/g/physionet-challenges/) for more details and [submit](https://docs.google.com/forms/d/e/1FAIpQLSfBY14ldx1ngucgEUZCvVPMqsRH4tya2M51oejieA1dJGPC9w/viewform?usp=sf_link) your code when ready.

<a name="2023.03.24"></a>__April 12, 2023:__ We have launched a [PLOS Digital Health Collection](https://journals.plos.org/digitalhealth/) on [Cost-effective point-of-care monitoring in low-resource settings](https://physionetchallenges.org/focus-issue/). We encourage the [2022 Challenge](../2022/) participants and other researchers to submit their work to the collection. Please see the announcement [page](https://physionetchallenges.org/focus-issue/) for more information.

<a name="2023.03.24"></a>__March 24, 2023:__ We are [now accepting](https://groups.google.com/g/physionet-challenges/c/vagQtJbVOIw) unofficial phase submissions for the 2023 Challenge. Please read the [submissions instructions](submissions), double check your code, and submit your code when ready.

<a name="2023.03.01"></a>__March 1, 2023:__ The PhysioNet Challenges are a [winner](https://groups.google.com/g/physionet-challenges/c/QFodMHOHXak) the [NIH/FASB DataWorks! Prize](https://www.faseb.org/data-management-and-sharing/dataworks-prize).

<a name="2023.02.10"></a>__February 10, 2023:__ The NIH-funded George B. Moody PhysioNet Challenge 2023 is [now open](https://groups.google.com/g/physionet-challenges/c/TitPvey9iw4)! Please read this website for details and share questions and comments on [Challenge forum](https://groups.google.com/g/physionet-challenges/). This year's Challenge is generously co-sponsored by [MathWorks](https://www.mathworks.com/) and the [Gordon and Betty Moore Foundation](https://www.moore.org/).

## <a name="introduction"></a> Introduction

More than 6 million cardiac arrests happen every year worldwide, with survival rates ranging from 1% to 10% depending on geographic location<sup>[1](#ref-strategies),[2](#ref-global-public-health)</sup>. Severe brain injury is the most common cause of death for patients surviving initial resuscitation, and most survivors admitted to an intensive care unit (ICU) are comatose<sup>[3](#ref-rundgren-continuous)</sup>. Physicians are typically asked during the first few days following cardiac arrest to offer a prognosis, i.e., a probability that the patient will eventually recover consciousness. A good prognosis results in continued care, and a poor prognosis typically leads to the withdrawal of life support and death. However, many "false positives" have been reported in the literature: cases where patients have made a good recovery despite a poor prognosis. This raises concerns that, in some cases, a poor prognosis may be a self-fulfilling prophecy.

Brain monitoring with electroencephalography aims to remove subjectivity in neurologic prognostication following cardiac arrest. Clinical neurophysiologists have come to recognize numerous patterns of brain activity that help to predict prognosis following cardiac arrest, including the presences of reduced voltage, burst suppression (alternating periods of high and low voltage), seizures, and a variety of seizure-like patterns<sup>[4](#ref-hirsch-terminology)</sup>. The evolution of electroencephalogram (EEG) patterns over time may provide additional predictive information<sup>[5](#ref-amorim-continuous),[6](#ref-hofmeijer-early),[7](#ref-zheng-predicting),[8](#ref-ruijter-early")</sup>. However, qualitative interpretation of continuous EEG is laborious, expensive, and requires review from neurologists with advanced training in neurophysiology who are unavailable in most medical centers.

Automated analysis of continuous EEG data has the potential to improve prognostic accuracy and to increase access to brain monitoring where experts are not readily available<sup>[6](#ref-zheng-predicting),[9](#ref-tjepkema-cloostermans-outcome)</sup>. However, the datasets used in most studies typically only have small numbers of patients (\<100) from single hospitals, which are unsuitable for high-quality machine learning<sup>[10](#ref-khazanova-matter)</sup>. To overcome this limitation the **International Cardiac Arrest REsearch consortium (I-CARE)** assembled a large representative set of EEG data and neurologic outcomes from comatose patients who underwent EEG monitoring following cardiac arrest. I-CARE includes seven hospitals from the United States and Europe. This year, I-CARE is making these data available for the first time to the participants of the George B. Moody PhysioNet Challenge.

The George B. Moody PhysioNet Challenge 2023 provides an opportunity to advance the field of coma prognostication in cardiac arrest by providing access to a large multicenter international database with more than 1,000 subjects who together underwent over 50,000 hours of EEG monitoring.

## <a name="objective"></a> Objective

The goal of the 2023 Challenge is to use longitudinal EEG and ECG recordings to predict good and poor patient outcomes after cardiac arrest.

We ask participants to develop and deploy an open-source algorithm that can use basic clinical information and EEG and ECG recordings to predict the level of neurological recovery for cardiac arrest patients who present to the hospital in a coma. The winner of the Challenge will be the team whose algorithm achieves the highest prediction performance in the hidden test set.

## <a name="data"></a> Data

The data for this challenge originates from seven academic hospitals in the U.S. and Europe led by investigators in the International Cardiac Arrest REsearch consortium (I-CARE).

1. Rijnstate Hospital, Arnhem, The Netherlands (Jeannette Hofmeijer).
2. Medisch Spectrum Twente, Enschede, The Netherlands (Barry J. Ruijter, Marleen C. Tjepkema-Cloostermans, Michel J. A. M. van Putten).
3. Erasme Hospital, Brussels, Belgium (Nicolas Gaspard).
4. Massachusetts General Hospital, Boston, Massachusetts, USA (Edilberto Amorim, Wei-Long Zheng, Mohammad Ghassemi, and M. Brandon Westover).
5. Brigham and Women's Hospital, Boston, Massachusetts, USA (Jong Woo Lee).
6. Beth Israel Deaconess Medical Center, Boston, Massachusetts, USA (Susan T. Herman).
7. Yale New Haven Hospital, New Haven, Connecticut, USA (Adithya Sivaraju).

This database consists of data from 1,020 adult patients with out-of-hospital or in-hospital cardiac arrest who had return of heart function ("return of spontaneous circulation", ROSC) but remained comatose (defined as inability to follow verbal commands). All patients were admitted to an ICU and had their brain activity monitored with 19-channel continuous EEG. Monitoring is typically started within hours of cardiac arrest and continues for several hours to days depending on the patients' condition, so recording start time and duration varied from patient to patient. The Challenge includes EEG data obtained up to 72 hours from ROSC.

The data were split into training, validation, and test sets. Approximately 60% of the patients are in the training set, 10% in the validation set, and 30% in the test set. Patients from one hospital were only included in the test set to better assess the generalizability of the algorithms. The training, validation, and test sets were chosen to approximately preserve the univariate distributions of each variable provided in the data. We have shared the training set publicly, and we have sequestered the validation and test sets privately to assess the performance of the algorithms on unseen data.

## Signal data

Each file contains an array of signal data from EEG, ECG, and/or other clinical time-series data. Different channels are available for different patients from different hospitals. The recordings typically begin several hours after the arrest and/or have brief interruptions while in the ICU, so gaps in the data may be present. The recordings continue for several hours to days, so the signals are also prone to quality deterioration from non-physiological artifacts.

The signal data is provided in WFDB format, with the signal data stored in MATLAB [MAT v4 format](https://www.mathworks.com/help/pdf_doc/matlab/matfile_format.pdf). For example, the binary signal file `0284_001_004_EEG.mat` contains EEG signal data, starting at 4 hours, 7 minutes, and 23 seconds after cardiac arrest and ending at 4 hours, 59 minutes, and 59 seconds after cardiac arrest, for patient 0284 of the I-CARE patient cohort. The plain text header file `0284_001_004_EEG.hea` describes the contents of the signal file as well as the start time, stop time, and utility frequency (i.e., powerline frequency or mains frequency) for the data.

Different channels are available for different patients, including those from the same hospital. Even when available, the channels may sometimes be disconnected or noisy. The channels are organized into an EEG group, an ECG group, a reference (REF) group, and an other (OTHER) group:

- EEG: Fp1, Fp2, F7, F8, F3, F4, T3, T4, C3, C4, T5, T6, P3, P4, O1, O2, Fz, Cz, Pz, Fpz, Oz, F9
- ECG: ECG, ECG1, ECG2, ECGL, ECGR
- REF: RAT1, RAT2, REF, C2, A1, A2, BIP1, BIP2, BIP3, BIP4, Cb2, M1, M2, In1-Ref2, In1-Ref3
- OTHER: SpO2, EMG1, EMG2, EMG3, LAT1, LAT2, LOC, ROC, LEG1, LEG2

## Clinical Data and Patient Outcomes

Patient information includes information recorded at the time of admission (age, sex), a hospital identifier, the location of arrest (out or in-hospital), the type of cardiac rhythm recorded at the time of resuscitation (shockable rhythms include ventricular fibrillation or ventricular tachycardia and non-shockable rhythms include asystole and pulseless electrical activity), and the time between cardiac arrest and ROSC. To protect patient [privacy](https://www.hhs.gov/hipaa/for-professionals/privacy/special-topics/de-identification/index.html), all ages above 89 were aggregated into a single category and encoded as "90". Patient temperature after cardiac arrest is controlled using a closed-loop feedback device (TTM) in most patients unless there are contraindications such as severe and difficult to control hypotension or delay in hospital admission. The temperature level can be set at 36C, 33C, or at no set temperature.

Clinical outcome was determined prospectively in two centers by phone interview (at 6 months from ROSC), and at the remaining hospitals retrospectively through chart review (at 3-6 months from ROSC). Neurological function was determined using the *Cerebral Performance Category (CPC)* scale. CPC is an ordinal scale ranging from 1 to 5:

- CPC = 1: good neurological function and independent
  for activities of daily living.
- CPC = 2: moderate neurological disability but independent for
 activities of daily living.
- CPC = 3: severe neurological disability.
- CPC = 4: unresponsive wakefulness syndrome [previously known as
  vegetative state].
- CPC = 5: dead.

In the five hospitals without prospective follow up, patients who achieved a CPC score of 1 or 2 by the time of hospital discharge were considered to have achieved their best CPC score and no additional chart review was performed. For this competition, as in most of the literature, CPC scores are grouped into two categories:

- "Good outcome": CPC = 1 or 2.
- "Poor outcome": CPC = 3, 4, or 5.

The following clinical data is contained in each `.txt` file:

| **Variable** | **Description** |
|-|-|
| **Age (in years)** | number |
| **Sex**  | Male, Female |
| **Hospital**  | A, B, C, D, E, F |
| **ROSC (return of spontaneous circulation, in minutes)** | time from cardiac arrest to return of spontaneous circulation |
| **OHCA (out-of-hospital cardiac arrest)**  | True = out of hospital cardiac arrest<br />False = in-hospital cardiac arrest |
| **Shockable Rhythm** | True = shockable rhythm<br />False = non-shockable rhythm |
| **TTM (targeted temperature management; in Celsius)** | 33, 36, or NaN for no TTM |
| **Outcome** | Good (CPC score of 1-2), Poor (CPC score of 3-5) |
| **CPC** | CPC score (ordinal scale 1-5) |

## Loading the Data

Patient files are in WFDB format, with the EEG and ECG signal data stored in MATLAB [MAT v4 format](https://www.mathworks.com/help/pdf_doc/matlab/matfile_format.pdf) files. These files can be opened in either MATLAB or Python. We provide example code for loading and processing the data.

## <a name="accessing-data"></a> Accessing the Data

The full training set can be downloaded from [PhysioNet.org](https://physionet.org/content/i-care/2.0/#files). You can download the full data on the above page or by running this command:

```sh
wget -r -N -c -np "https://physionet.org/files/i-care/2.0/"
```

Due to the large size of the training data, you may wish to only download or use part of it. For example, the following command only downloads the patient metadata and the EEG data from the first 72 hours after ROSC:

```sh
wget -r -N -c -np -A "*.txt" -q "https://physionet.org/files/i-care/2.0/"

for ((i=0; i<=72; i++)) do
    j=$(printf "%03d" $j)
    wget -r -N -c -np -A "*_${j}_EEG.*" -q "https://physionet.org/files/i-care/2.0/"
done
```

By downloading the data, you agree not to repost the data or to publish or otherwise share any work that uses the data, in full or in part, before the end of the Challenge except to the Computing in Cardiology conference.

## Registering for the Challenge and Conditions of Participation

To participate in the Challenge, [register your team](https://docs.google.com/forms/d/e/1FAIpQLSddxRMI_UxtF2FqA74pLwwkMfEuPYOnyNp1S0ijEi2UdvhngQ/viewform?usp=sf_link) by providing the full names, affiliations, and official email addresses of your entire team before you submit your algorithm. The details of all authors must be exactly the same as the details in your abstract submission to [Computing in Cardiology](http://www.cinc2023.org/). You may update your author list by completing [this form](https://docs.google.com/forms/d/e/1FAIpQLSddxRMI_UxtF2FqA74pLwwkMfEuPYOnyNp1S0ijEi2UdvhngQ/viewform?usp=sf_link) again (read the form for details), but changes to your authors must not contravene [the rules](#rules) of the Challenge.

## <a name="algorithms"></a> Algorithms

For each subject, your algorithm must provide an outcome label (good vs. poor outcome), the predicted  probability of a poor outcome, and the predicted CPC score (decimal number between 1 and 5). This should be done for each time point separately (12 hours, 24 hours, 48 hours, and 72 hours from the time of ROSC). These predictions must be causal. For example, for predictions at 12 hours, we will only provide your algorithm with access to the first 12 hours of the data: see the [`truncate_recordings` script](https://github.com/physionetchallenges/python-example-2023/blob/master/truncate_recordings.py) to test your code with truncated recordings. This restriction reflects the reality of clinical practice.

Your algorithm must output a text file for each patient with outcome and CPC predictions for the patient. For example, the following text indicates that your model predicts that patient `0284` will have a good outcome, with a 19.5% probability of a poor outcome, and a CPC score of 1.553.

```
Patient: 0284
Outcome: Good
Outcome probability: 0.195
CPC: 1.553
```

We implemented example algorithms in [MATLAB](https://github.com/physionetchallenges/matlab-example-2023) and [Python](https://github.com/physionetchallenges/python-example-2023). Other implementation languages will be considered upon request. The code repositories contain details of the examples. These examples were not designed to perform well but to provide minimal working examples of how to work with the data for the Challenge task.

## Submitting your Algorithm

Please use the above [example code](#algorithms) as templates for your submissions.

Please see the [submission instructions](submissions) for detailed information about how to submit a successful Challenge entry, double check your code (we cannot debug your code for you), and [submit](https://docs.google.com/forms/d/e/1FAIpQLSfBY14ldx1ngucgEUZCvVPMqsRH4tya2M51oejieA1dJGPC9w/viewform?usp=sf_link) when ready.  We will provide feedback on your entry as soon as possible, so please wait at least **72 hours** before contacting us about the status of your entry.

## <a name="scoring"></a> Scoring

For this year's Challenge, the scoring metric is the true positive rate (TPR) for predicting a poor outcome (CPC of 3, 4, or 5) given a false positive rate (FPR) of less than or equal to 0.05 at 72 hours after return of spontaneous circulation.

The below confusion matrix gives the numbers of patients with poor or good outcomes that receive poor or good predictions from a model.

<a name="confusion-matrix"></a>
<table>
    <thead>
        <tr>
        <th></th>
        <th></th>
        <th colspan=2>Actual outcome at decision threshold 𝜃</th>
        </tr>
    </thead>
    <tbody>
    <tr>
        <th></th>
        <th></th>
        <th>Poor</th>
        <th>Good</th>
    </tr>
    <tr>
    <td rowspan=2><b>Predicted outcome at decision threshold 𝜃</b></td>
        <td><b>Poor</b></td>
        <td>$$\text{TP}_\theta$$</td>
        <td>$$\text{FP}_\theta$$</td>
    </tr>
    <tr>
    <td><b>Good</b></td>
        <td>$$\text{FN}_\theta$$</td>
        <td>$$\text{TN}_\theta$$</td>
    </tr>
    </tbody>
</table>

Let $$\theta_h$$ be the largest decision threshold for hospital $$h$$ such that

$$\text{FPR}_{\theta_h} = \frac{\text{FP}_{\theta_h}}{\text{FP}_{\theta_h} + \text{TN}_{\theta_h}} < 0.05.$$

Let

$$\text{TP} = \sum_{h} \text{TP}_{\theta_h},$$

$$\text{FP} = \sum_{h} \text{FP}_{\theta_h},$$

$$\text{FN} = \sum_{h} \text{FN}_{\theta_h},$$

$$\text{TN} = \sum_{h} \text{TN}_{\theta_h}.$$

The Challenge score is

$$\text{TPR} = \frac{\text{TP}}{\text{FP} + \text{FN}},$$

which is the true positive rate (TPR) at a false positive rate (FPR) of 0.05 at each hospital.

The team with the highest value of the Challenge score wins the Challenge.

While we require teams to write code that can make predictions at 12, 24, 48, and 72 hours, we will only use the predictions at 72 hours to determine the Challenge winners.

This metric is [implemented](https://github.com/physionetchallenges/evaluation-2023) in the `compute_challenge_score` function of the `evaluate_model` script.

The clinical rationale for choosing TPR at a FPR of 0.05 to determine the contest winner is as follows. In clinical practice, assessments of prognosis influence whether life supporting interventions are continued or not. A false-positive prediction of poor outcome is thus very serious as a patient with potential to recover consciousness could have life-support withdrawn and die. False negatives --- failure to predict a poor outcome resulting in prolonging life-support in patients who ultimately have a bad outcome --- are also a challenge, but are considered less problematic than false positives. Therefore guidelines from professional societies recommend that prognostic tests operate with low false-positive rates (5% or less).

There are two reasons for judging algorithm performance at 72 hours rather than at earlier time points. First, there is evidence to suggest that trends in the EEG over time contain important prognostic information. Second, there is evidence that premature pronouncement of a poor neurologic outcome may lead to self-fulfilling prophecies. Consequently, it is advisable to refrain from issuing a formal neurologic prognosis before 72 hours.

Although Challenge entries will be judged based on performance at 72 hours, it is still of interest to know how well models can predict outcomes at earlier time points, thus we will also evaluate performance at 12, 24, and 48 hours. Although we dichotomize CPC scores into "good" (CPC 1-2) and "poor" (CPC 3-5), it is also of interest to measure how accurately models can predict the level of neurological disability, thus we will also evaluate the mean absolute error in model predictions of CPC scores. It is likely that the best models will perform well at all time points and will be able to accurately predict CPC scores. Nevertheless, only the above metric will be used to select the challenge winner.

## <a name="rules"></a> Overview of rules

There are two phases for the Challenge: an unofficial phase and an official phase. The unofficial phase of the Challenge allows us to introduce and "beta test" the data, scores, and submission system before the official phase of the Challenge. Participation in the unofficial phase is mandatory for participating in the official phase of the Challenge because it helps us to improve the official phase.

Entrants may have an overall total of up to 15 scored entries over both the unofficial and official phases of the competition (see the below table). All deadlines occur at 11:59pm GMT on the dates mentioned below, and all dates are during 2023 unless indicated otherwise. If you do not know the difference between GMT and your local time, then find it out before the deadline!

__Please__ submit your entries early to ensure that you have the most chances for success. If you wait until the last few days to submit your entries, then you may not receive feedback before the submission deadline, and you may be unable to resubmit your entries if there are unexpected errors or issues with your submissions. Every year, several teams wait until the last few days to submit their first entry and are unable to debug their work before the deadline.

### Timing and priority of entries

Although we score on a first-come-first-serve basis, please note that if you submit more than one entry in a 24-hour period, your second entry may be deprioritized compared to other teams' first entries. If you submit more than one entry in the final 24 hours before the Challenge deadline, then we may be unable to provide feedback or a score for more than one of your entries. It is unlikely that we will be able to debug any code in the final days of the Challenge.

For these reasons, we strongly suggest that you start submitting entries at least 5 days before the unofficial deadline and 10 days before the official deadline. We have found that the earlier teams enter the Challenge, the better they do because they have time to digest feedback and performance. We therefore suggest entering your submissions many weeks before the deadline to give yourself the best chance for success.

### <a name="key-dates-deadlines"></a> Key dates/deadlines

|                             | Start              | End                | Submissions                        |
|-----------------------------|--------------------|--------------------|------------------------------------|
| Unofficial phase            | 10 February 2023   | 24 April 2023      | 1-5 scored entries ([\*](#1ast))   |
| Hiatus                      | 25 April 2023      | 8 June 2023        | N/A                                |
| Abstract deadline           | 1 May 2023         | 1 May 2023         | 1 abstract                         |
| Official phase              | 9 June 2023        | 3 September 2023 ([\*\*](#1ast))  | 1-10 scored entries ([\*](#1ast))  |
| Abstract decisions released | Late June 2023     | Late June 2023     | N/A                                |
| Wild card entry date        | 31 July 2023       | 31 July 2023       | N/A                                |
| Hiatus                      | 4 September 2023   | 30 September 2023  | N/A                                |
| Preprint deadline           | 20 September 2023  | 20 September 2023  | One 4-page paper ([\*\*\*](#2ast))   |
| Conference                  | 1 October 2023     | 4 October 2023     | 1 presentation ([\*\*\*\*](#3ast))   |
| Final scores released       | Early October 2023 | Early October 2023 | N/A                                |
| Final paper deadline        | 15 October 2023    | 15 October 2023    | One 4-page paper ([\*\*\*\*](#3ast)) |

<a name="1ast"></a>(\* Entries that fail to score do not count against limits.)

<a name="4ast"></a>(\*\* In your time zone.)

<a name="2ast"></a>(\*\*\* Must include preliminary scores.)

<a name="3ast"></a>(\*\*\*\* Must include final scores, your ranking in the Challenge, and any updates to your work as a result of feedback after presenting at CinC. This final paper deadline is earlier than the deadline given by CinC so that we can check these details.)

To be eligible for the open-source award, you must do all the following:

1. Register for the Challenge
    [here](https://docs.google.com/forms/d/e/1FAIpQLSddxRMI_UxtF2FqA74pLwwkMfEuPYOnyNp1S0ijEi2UdvhngQ/viewform?usp=sf_link).
2. Submit at least one open-source entry that can be scored during the unofficial phase.
3. [Submit an abstract to CinC](http://www.cinc.org/information-for-computing-in-cardiology-authors/) by the abstract submission deadline. Include your team name and score from the unofficial phase in your abstract. Please select "PhysioNet/CinC Challenge" as the topic of your abstract so that it can be identified easily by the abstract review committee. __Please__ read ["Advice on Writing an Abstract"](#abstracts) for important information on writing a successful abstract.
4. Submit at least one open-source entry that can be scored during the official phase.
5. [Submit a full 4-page paper](http://www.cinc.org/information-for-computing-in-cardiology-authors/) on your work to CinC by the above preprint deadline.
6. One of your team members must attend [CinC 2023](http://www.cinc2023.org/) to present your work either orally or as a poster (depending on your abstract acceptance). If you have a poster, then you must stand by it to defend your work. No-shows (oral or poster) will be disqualified. One of your team members must also attend the closing ceremony to collect your prize. No substitutes will be allowed. If the conference permits remote attendance, then you will be prize eligible if you attend remotely (and fulfill the other required criteria).
7. [Submit a full 4-page paper](http://www.cinc.org/information-for-computing-in-cardiology-authors/) on your work to CinC by the above final paper deadline. Please note that we expect the abstract to change significantly both in terms of results and methods. You may also update your title with the caveat that it must not be substantially similar to the title of the competition or contain the words "physionet," "challenge," or "competition."

You must not submit an analysis of this year's Challenge data to other conferences or journals until after CinC 2023 so that we can discuss the Challenge in a single forum. If we discover evidence that you have submitted elsewhere before the end of CinC 2023, then you will be disqualified and de-ranked on the website, banned from future Challenges, and the journal/conference will be contacted to request your article be withdrawn for contravention of the terms of use.

There are many reasons for this policy: 1) we do not release results on the test data before the end of CinC, and only reporting results on the training data increases the likelihood of overfitting and is not comparable to the official results on the test data, and 2) attempting to publish on the Challenge data before the Challengers present their results is unprofessional and comes across as a territorial grab. This requirement stands even if your abstract is rejected, but you may continue to enter the competition and receive scores. (However, unless you are accepted into the conference at a later date as a "wild card" entry, you will not be eligible to win a prize.) Of course, any publicly available data that was available before the Challenge is exempted from this condition, but any of the novelty of the Challenge (the Challenge design, the Challenge data that you downloaded from this page because it was processed for the Challenge, the scoring function, etc.) is not exempted.

After the Challenge is over and the final scores have been posted (in late September), everyone may then submit their work to a journal or another conference.

### <a name="wild-card"></a> Wild Card Entries

If your abstract is rejected or if you otherwise failed to qualify during the unofficial period, then there is still a chance to present as CinC and win the Challenge. A "wild card" entry has been reserved for a high-scoring entry from a team that was unable to submit an accepted abstract to CinC by the original abstract submission deadline. A successful entry must be submitted by the wild card entry deadline. We will contact eligible teams and ask them to submit an abstract. The abstract will still be reviewed as thoroughly as any other abstract accepted for the conference. See [Advice on Writing an Abstract](#abstracts).

### <a name="abstracts"></a> Advice on Writing an Abstract

To improve your chances of having your abstract accepted, we offer the following advice:

- Ensure that all of your authors agree on your abstract, and be sure that all of the author details match your registration information, including email addresses.
- Stick to the word limit and deadline on the [conference website](http://www.cinc.org/cinc-conference-program-abstracts/). Include time for errors, internet outages, etc.
- Select "PhysioNet/CinC Challenge" as the submission topic so it can be identified easily by the abstract review committee. However, do not include the words "PhysioNet" or "PhysioNet/CinC" or "Challenge" in the title because this creates confusion with the hundreds of other articles and the main descriptor of the Challenge.
- Your title, abstract and author list (collaborators) can be modified in September when you submit the final paper.
- While your work is bound to change, the quality of your abstract is a good indicator of the final quality of your work. We suggest you spell check, write in full sentences, and be specific about your approaches. Include your method's cross validated training performance (using the Challenge metrics) and your score provided by the Challenge submission system. If you omit or inflate this latter score, then your abstract will be rejected.
- Do not be embarrassed by any low scores. We do not expect high scores at this stage. We are focused on the thoughtfulness of the approach and quality of the abstract.
- If you are unable to receive a score during the unofficial phase, then you can still submit, but the work should be very high quality and you should include the cross validation results of your algorithm on training set.

You will be notified if your abstract has been accepted by email from CinC in June. You may not enter more than one abstract describing your work in the Challenge. We know you may have multiple ideas, and the actual abstract will evolve over the course of the Challenge. More information, particularly on discounts and scholarships, can be found [here](http://www.cinc.org/information-for-computing-in-cardiology-authors/). We are sorry, but the Challenge Organizers do not have extra funds to enable discounts or funding to attend the conference.

Again, we cannot guarantee that your code will be run in time for the [CinC](http://cinc.org/) abstract deadline, especially if you submit your code immediately before the deadline. It is much more important to focus on writing a high-quality abstract describing your work and submit this to the conference by abstract deadline. Please follow [these instructions](#abstracts) here carefully.

Please make sure that __all of your team members are authors on your abstract__. If you need to add or subtract authors, do this at least a week before the abstract deadline. Asking us to alter your team membership near or after the deadline is going to lead to confusion that could affect your score during review. It is better to be more inclusive on the abstract in terms of authorship, though, and if we find authors have moved between abstracts/teams without permission, then this is likely to lead to disqualification. As noted above, you may change the authors/team members later in the Challenge.

Please make sure that you include __your team name__, your __official score__ as it appears on the leaderboard, and __cross validation results__ in your abstract __using the scoring metrics for this year's Challenge__ (especially if you are unable to receive a score or are scoring poorly). The novelty of your approach and the rigor of your research is much more important during the unofficial phase. Please make sure you describe your technique and any novelty very specifically. General statements such as "a 1D CNN was used" are uninformative and will score poorly in review.

The Challenge Organizers have no ability to help with any problems with the abstract submission system. We do not operate it. Please do not email us with issues related to the abstract submission system.

### <a name="open"></a> Open-Source Licenses

We encourage the use of open-source licenses for your entries.

Entries with non open-source licenses will be scored but not ranked in the official competition. All scores will be made public. At the end of the competition, all entries will be posted publicly, and therefore automatically mirrored on several sites around the world. We have no control over these sites, so we cannot remove your code even on request. Code which the organizers deem to be functional will be made publicly available after the end of the Challenge. You can request to withdraw from the Challenge, so that your entry's performance is no longer listed in the official leaderboard, up until a week before the end of the official phase. However, the Organizers reserve the right to publish any submitted open-source code after the official phase is over. The Organizers also retain the right to use a copy of submitted code for non-commercial use. This allows us to re-score if definitions change and validate any claims made by competitors.

If no license is specified in your submission, then the license given in the example code will be added to your entry, i.e., we will assume that you have released your code under the [BSD 3-Clause license](https://opensource.org/licenses/BSD-3-Clause).

## <a name="collaboration"></a> Rules on Competing in Teams / Collaboration

To maintain the scientific impact of the Challenges, it is important that all Challengers contribute truly independent ideas. For this reason, we impose the following rules on team composition/collaboration:

1. Multiple teams from a single entity (such as a company, university, or university department) are allowed as long as the teams are truly independent and do not share team members (at any point), code, or any ideas. Multiple teams from the same research group or company unit are not allowed because of the difficulty of maintaining independence in those situations. If there is any question on independence, the teams will be required to supply an official letter from the company that indicates that the teams do not interact at any point (socially or professionally) and work in separate facilities, as well as the location of those facilities.
2. You can join an existing team before the abstract deadline as long as you have not belonged to another team or communicated with another team about the current Challenge. You may update your author list by completing [this form](https://docs.google.com/forms/d/e/1FAIpQLSdADXQw3OW9Kvhc4xay_ua3Q9_A8O1d-JbAoW_aS-a9RjWutw/viewform?usp=sf_link) again (check the "Update team members" box on the form), but changes to your authors must not contravene [the rules](#collaboration) of the Challenge.
3. You may use public code from another team if they posted it before the competition.
4. You may not make your Challenge code publicly available during the Challenge or use any code from another Challenger that was shared, intentionally or not, during the course of the Challenge.
5. You may not publicly post information describing your methods (blog, vlog, code, preprint, presentation, talk, etc.) or give a talk outside your own research group at any point during the Challenge that reveals the methods you have employed or will employ in the Challenge. Obviously, you can talk about and publish the same methods on other data as long as you don't indicate that you used or planned to use it for the Challenge.
6. You must use the same team name and email address for your team throughout the course of the Challenge. The email address should be the same as the one used to register for the Challenge, and to submit your abstract to CinC. Note that the submitter of the conference article/code does not need to present at the conference or be in any particular location in the author order on the abstract/poster/paper, but they must be a contributing member of the team. If your team uses multiple team names and/or email addresses to enter the Challenge, then please contact the Organizers immediately to avoid disqualification of all team members concerned. Ambiguity will result in disqualification.
7. If you participate in the Challenge as part of a class project, then please treat your class as a single team — please use the same team name as other groups in your class, limit the number of submissions from your class to the number allowed for each team, and feel free to present your work within your class. If your class needs more submissions than the Challenge submission limits allow, then please perform cross-validation on the training data to evaluate your work.

If we discover evidence of the contravention of these rules, then you will be ineligible for a prize and your entry publicly marked as possibly associated with another entry. Although we will contact the team(s) in question, time and resources are limited and the Organizers must use their best judgement on the matter in a short period of time. The Organizers' decision on rule violations will be final.

Similarly, no individual who is affliated with the same research group, department, or similar organization unit (academic or industry) as one or more of the Organizers of that year's Challenge researchers may officially participate in the Challenge for that year, even if they do not collaborate with Organizers. If you are uncertain if your shared affiliation disallows you from officially participating, then please contact the Challenge Organizers for clarification. This rule is to prevent concerns about independence or favoritism.

## Conference Attendance

[CinC 2023](https://cinc2023.org/) will take place from 1-4 October 2023 in Atlanta, Georgia, USA. You must attend the whole conference to be eligible for prizes. If you send someone in your place who is not a team member or co-author, then you will be disqualified and your abstract will be removed from the proceedings. In particular, it is vital that the presenter (oral or poster) can defend your work and have in-depth knowledge of all decisions made during the development of your algorithm. Due to this year's challenges, both in person and remote attendance are allowed. If you require a visa to attend the conference, we strongly suggest that you apply as soon as possible. Please contact the local [conference](https://cinc2023.org/travel/#visa-information) organizing committee (not the Challenge Organizers) for any visa sponsorship letters and answer any questions concerning the conference.

## <a name="hackathon"></a> Pre-Conference Challenge Hackathon

This year, we are reintroducing a final opportunity to win a prize in the Challenge. On the Sunday morning before Computing in Cardiology starts (the 1st of October), there will be an all-day hackathon (with on-site support from 9am--1pm local time) on Emory's campus, adjacent to the Sunday Symposium. It will have the same objective as the current Challenge. This event is, once again, generously sponsored by the Gordon and Betty Moore Foundation and MathWorks.

Most of the same rules apply, but you may form a new team for this event or even merge with an existing team. (In fact, we encourage this -- mix and match ideas!) You do not need to have previously competed in the Challenge, but you must register for the event at least 4 days in advance, listing all of your hackathon team members (known at the time -- you may add or remove some later, but we will be monitoring to check for adherence to the rules).

**Please complete [this form](https://docs.google.com/forms/d/e/1FAIpQLScpm5F_7vww1TZBij7u8k7KZsTl1Ld8vaCDrouTb1hDSlDy5w/viewform) for the PhysioNet/CinC 2023 Hackathon.**

Note: At least one member of each hackathon team must be physically present and must register for the conference as well as the hackathon. If the details about your team members are missing from the above form, you will not be allowed to participate.

Space is limited and will be allocated on a first-come, first-served basis. If there is room, you may be able to register with less than 4 days to the event, or even on the same day as the event, but you will encounter delays at the entrance to the event, where security will check you against the registration list we sent 4 days earlier.

The Hackathon is not the same as the Sunday Symposium, but it is in the same building as the symposium and occurring on the morning of the symposium. You may attend both, of course.

*   Location of Hackathon: Rooms A169 and A170, Anatomy Building, Emory School of Medicine, 100 Woodruff Cir, Atlanta, GA 30322: [https://tinyurl.com/emorySOManatomy](https://tinyurl.com/emorySOManatomy)
*   Date and time: Sunday, 1 October 2023 from 9:00 AM to 1:00 PM local time.
*   Refreshments and technical support will be available.

The deadline for submitting code will be later on Sunday (exact time to be announced). Please make sure the rest of your team (who are not present) are aware of the time zone difference with their local times. You may collaborate with them remotely all day to prepare and submit your code. Due to space restrictions, a maximum on-site team size of 4 is allowed. There is no limit on the team size for remote members.

You may ask: why a hackathon?

1. Well this is no ordinary hackathon. You will have had up to 7 months to prepare for it, so we expect it to generate some novel ideas.
2. You may collaborate with other teams from the Challenge or other teams that turn up (but you may submit only one entry per collaboration), thus potentially generating new and better hybrid approaches.
3. On-site support for MATLAB and/or domain experts in clinical informatics will be present.

## <a name="sponsors"></a> Sponsors

This year's Challenge is generously co-sponsored by [MathWorks](https://www.mathworks.com/) and the [Gordon and Betty Moore Foundation](https://www.moore.org/).

### Obtaining Complimentary MATLAB Licenses

[MathWorks](http://www.mathworks.com/) has generously decided to sponsor this Challenge by providing complimentary licenses to all teams that wish to use MATLAB. Users can apply for a license and learn more about MATLAB support by visiting the [PhysioNet Challenge page](https://www.mathworks.com/academia/student-competitions/physionet.html) from MathWorks. If you have questions or need technical support, then please contact MathWorks at studentcompetitions@mathworks.com.

## <a name="acknowledgements"></a> Acknowledgements

Supported by the [National Institute of Biomedical Imaging and Bioengineering](https://www.nibib.nih.gov/) (NIBIB) under NIH grant R01EB030362.  [American Heart Association](https://www.heart.org/) (20CDA35310297, [Harold Amos Medical Faculty Development Program](https://www.amfdp.org/)), the [NIH](https://www.nih.gov/) (1K23NS090900, R01NS102190, R01NS102574, R01NS107291, 1K23NS119794, RF1AG064312, RF1NS120947, R01AG073410, R01HL161253), [NSF](https://www.nsf.gov/) (2014431), [CURE Epilepsy Foundation](https://www.cureepilepsy.org/) (Taking Flight Award), Weil-Society of Critical Care Medicine Research Grant, [Neurocritical Care Society](https://www.neurocriticalcare.org/home) (NCS research training fellowship), [Epilepsiefonds](https://www.epilepsie.nl/) (NEF 14-18), and the [Dutch Heart Foundation](https://www.hartstichting.nl/) (2018T070).

## References

1. <a name="ref-strategies"></a> Medicine I of. Strategies to Improve Cardiac Arrest Survival: A Time to Act \[Internet\]. Washington, DC: The National Academies    Press; 2015. \[Cited 2021 Dec 5\]. Available from: [https://www.nap.edu/catalog/21723/strategies-to-improve-cardiac-arrest-survival-a-time-to-act](https://www.nap.edu/catalog/21723/strategies-to-improve-cardiac-arrest-survival-a-time-to-act)

2. <a name="ref-mehra-global"></a> Mehra R. Global public health problem of sudden cardaic death. J Electrocardiol. 2007;40(6 Suppl):S118-22.

3. <a name="ref-rundgren-continuous"></a> Rundgren M, Westhall E, Cronberg T, et al. Continuous amplitude-integrated electroencephalogram predicts outcome in hypothermia-treated cardiac arrest patients. Crit. Care Med. 2010;38(9):1838--1844.

4. <a name="ref-hirsch-terminology"></a> Hirsch LJ, Fong MW, Leitinger M, et al. American Clinical Neurophysiology Society's standardized critical care EEG terminology: 2021 version. Journal of clinical neurophysiology: official publication of the American Electroencephalographic Society. 2021 Jan 1;38(1):1.

5. <a name="ref-amorim-continuous"></a> Amorim E, Rittenberger JC, Zheng JJ, et al. Continuous EEG monitoring enhances multimodal outcome prediction in hypoxic-ischemic brain injury. Resuscitation 2016;109:121--126.

6. <a name="ref-hofmeijer-early"></a> Hofmeijer J, Beernink TMJ, Bosch FH, et al. Early EEG contributes to multimodal outcome prediction of postanoxic coma. Neurology 2015;85(2):137--143.

7. <a name="ref-zheng-predicting"></a> Zheng W-L, Amorim E, Jing J, et al. Predicting neurological outcome in comatose patients after cardiac arrest with multiscale deep neural networks. Resuscitation 2021;169:86--94.

8. <a name="ref-ruijter-early"></a> Ruijter BJ, Tjepkema-Cloostermans MC, Tromp SC, van den Bergh WM, Foudraine NA, Kornips FHM, Drost G, Scholten E, Bosch FH, Beishuizen A, van Putten MJAM, Hofmeijer J. Early electroencephalography for outcome prediction of postanoxic coma: A prospective cohort study. Ann Neurol. 2019 Aug;86(2):203-214.

9. <a name="ref-tjepkema-cloostermans-outcome"></a> Tjepkema-Cloostermans MC, da Silva Lourenço C, Ruijter BJ, et al. Outcome Prediction in Postanoxic Coma With Deep Learning. Crit. Care Med. 2019;47(10):1424--1432.

10. <a name="ref-khazanova-matter"></a> Khazanova D, Douglas VC, Amorim E. A matter of timing: EEG monitoring for neurological prognostication after cardiac arrest in the era of targeted temperature management. Minerva Anestesiol. 2021;87(6):704--713.

---

This year's Challenge is generously sponsored by [MathWorks](https://www.mathworks.com/) and the [Gordon and Betty Moore Foundation](https://www.moore.org/).

{: style="text-align:center"}
![MathWorks](logo_mathworks.png){:height="40px"}&nbsp;&nbsp;&nbsp;
![Moore Foundation](logo_moore_foundation.png){:height="40px"}
