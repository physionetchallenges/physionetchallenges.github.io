---
layout: default
---

# Classification of 12-lead ECGs: the PhysioNet/Computing in Cardiology Challenge 2020

## Introduction

The electrocardiogram (ECG) is a non-invasive representation of the electrical activity of the heart from electrodes placed on the surface of the torso. The standard 12-lead ECG has been widely used to diagnose a variety of cardiac abnormalities such as cardiac arrhythmias, and predicts cardiovascular morbidity and mortality [[1]](http://www.onlinejacc.org/content/49/10/1109.abstract). The early and correct diagnosis of cardiac abnormalities can increase the chances of successful treatments [[2]](https://www.ahajournals.org/doi/full/10.1161/strokeaha.107.181486). However, manual interpretation of the electrocardiogram is time-consuming, and requires skilled personnel with a high degree of training [[3]](https://www.magonlinelibrary.com/doi/abs/10.12968/bjca.2019.14.3.123).

Automatic detection and classification of cardiac abnormalities can assist physicians in the diagnosis of the growing number of ECGs recorded. Over the last decade, there have been increasing numbers of attempts to stimulate 12-lead ECG classification. Many of these algorithms seem to have the potential for accurate identification of cardiac abnormalities. However, most of these methods have only been tested or developed in single, small, or relatively homogenous datasets. The PhysioNet/Computing in Cardiology Challenge 2020 provides an opportunity to address this problem by providing data from a wide set of sources.  

## Objective
The goal of the 2020 Challenge is to identify the clinical diagnosis from 12-lead ECG recordings.

We ask participants to design and implement a working, open-source algorithm that can, based only on the clinical data provided, automatically identify the cardiac abnormality or abnormalities present in each 12-lead ECG recording. The winners of the Challenge will be the team whose algorithm achieves the highest score for recordings in the hidden test set.


## Data

The data for this Challenge are from multiple sources:
1. Southeast University, China, including the data from the China Physiological Signal Challenge 2018
2. Centre for Cardiometabolic Risk Reduction in South-Asia (CARRS), India
3. A diverse population in the USA.


The initial training set is the public data used in the [China Physiological Signal Challenge in 2018 (CPSC2018)](http://2018.icbeb.org/), held during the 7th 
International Conference on Biomedical Engineering and Biotechnology in Nanjing, China.

CPSC2018: The training set consists of 6,877 (male: 3,699; female: 3,178) 12-ECG recordings lasting from 6 seconds to 60 seconds. Each recording was sampled at 500 Hz. All data is provided in [WFDB format](https://www.physionet.org/physiotools/wpg/wpg_35.htm) with a MATLAB v4 file and a header containing patient sex, age, and diagnosis (Dx) information at the end of the header file.

Each ECG recording has one or more labels from one normal sinus rhythm type and eight abnormal types:
1. Normal sinus rhythm (Sinus) 
2. Atrial fibrillation (AF)
3. First-degree atrioventricular block (I-AVB)
4. Left bundle branch block (LBBB)
5. Right bundle branch block (RBBB)
6. Premature atrial contraction (PAC)
7. Premature ventricular contraction (PVC)
8. ST-segment depression (STD)
9. ST-segment elevation (STE)

For example, the following header indicates that the label is  Right bundle branch block (RBBB):
```
#Age: 46
#Sex: Male
#Dx: RBBB
#Rx: Unknown
#Hx: Unknown
#Sx: Unknown
```
The training data can be downloaded from this [link](https://storage.cloud.google.com/physionet-challenge-2020-12-lead-ecg-public/PhysioNetChallenge2020_Training_CPSC.tar.gz). You can verify the integrity of the file with its [MD5 hash](https://en.wikipedia.org/wiki/Md5sum): `8c8c9c3dd5f3bb973c366f50b86f9d43`.

Although we will provide more training data at a later date, we are not planning to release the test data at any point, including after the end of the Challenge. Requests for the test data will not receive a response. We do not release test data to prevent overfitting on the test data and claims or publications of inflated performances. We will entertain requests to run code on the test data after the Challenge on a limited basis based on publication necessity and capacity. (The Challenge is largely staged by volunteers.)

## Registering for the Challenge and Conditions of Participation 

To participate in the Challenge, you must register here, providing the full names, affiliations and official email addresses of your entire team. The details of all authors must be exactly the same as the details you use to submit your abstract to Computing in Cardiology in April. You may add (but not subtract) authors later by emailing challenge [at] physionet.org.  

## Algorithms

For each 12-lead ECG recording, your algorithm must identify a set of one or more classes as well as a probability or confidence score for each class. For example, suppose that your classifier identifies atrial fibrillation and a first-degree atrioventricular block with probabilities of 90% and 60%, respectively, for a particular 12-lead ECG sample, but it does not identify any other rhythm types. Your code might produce the following output for a single recording (not for each lead):

```
Record ID
Normal|AF |I-AVB|LBBB|RBBB|PAC |PVC |STD|STE
  0.05|0.9|  0.6| 0.2| 0.2|0.35|0.35|0.1|0.1
     0|  1|    1|   0|   0|   0|   0|  0|  0
```
## Submitting your Algorithm

We have shared code for a simple baseline model that [...]. Please use this code as a template for your submission, and please see the following instructions for additional details for your submissions. 

For the first time in any public competition, we will require code both for your trained model and for training your model. If we cannot reproduce your model from the training code, then you will not be eligible for ranking or a prize. 

## Scoring

For this Challenge, we will initially consider multiple evaluation metrics that assign different weights to different classes and classification errors. We welcome discussion about the evaluation metric for this year’s Challenge.

The first scoring function is a general class-weighted F-score, the Fβ measure, where we have assigned more weight to recall than precision:

<img src1="Fbeta_eq1.png" width="30%">

We have initially set β = 2, penalizing a missed diagnosis twice as much as a false positive. 

The second scoring function is a generalization of the Jaccard measure, where we have given missed diagnoses twice as much weight as correct diagnoses and false alarms: 

<img src2="Gbeta_eq2.png" width="40%">

Since some recordings may have multiple labels, we normalize their contributions to these scoring functions so that each recording, not each label, makes an equal contribution. For example, if a recording has five labels, and your classifier identifies three labels correctly, identifies one label incorrectly, and misses two labels, then we increment TP by ⅗, FP by ⅕, and FN by ⅖.

The score is calculated over all recordings (with just one number per recording, not per lead), weighted by the relative importance of the diagnosis as:  

<img src3="Sum_Fbeta.png" width="30%">

 where l is the index of a given class, Cl is its corresponding importance and Nl is the number of classes. Initially all Cl ’s were set to unity. 

Note that there may be more than one label per recording, and the score stratifies by recording/patient, so that one recording does not have extra weight due to manifestation of extra labels.  For recordings that contain more than one label, the weighted FP and FN rate is calculated. The weights are normalized again by label class importance. For recordings with multiple labels, their C is set to unity to prevent double counting of the weight.

## Sample Entries

We implemented a simple regression model in Julia, MATLAB, Python, and R. Please use these implementations as templates for your entries. [Add links.]

## Rules and Deadlines

There are two phases for the Challenge: an unofficial phase and an official phase. The unofficial phase of the Challenge allows us to introduce and “beta test” the data, scores, and submission system before the official phase of the Challenge. Participation in the unofficial phase is mandatory for participating in the official phase of the Challenge because it helps us to improve the official phase.

Entrants may have an overall total of up to 15 scored entries over both the unofficial and official phases of the competition (see Table 2). All deadlines occur at 11:59pm GMT (UTC) on the dates mentioned below. If you do not know the difference between GMT and your local time, then find out what it is before the deadline! Please do not wait until the deadline to submit your entries because you will be unable to resubmit them if there are unexpected errors or issues with your submissions.

#table 2

To be eligible for the open-source award, you must do all the following:
1. Register for the Challenge [here]https://docs.google.com/forms/d/e/1FAIpQLSdZUTrpoVuotZxUTUbo23k2u-wdiOvkiZWgzorblUsQOCSnew/viewform?vc=0&c=0&w=1&usp=mail_form_link.
2. Enter at least one open-source entry that can be scored during the unofficial phase (before 11:59pm GMT 12 April).
3. Enter an Abstract to CinC: Submit an acceptable abstract (about 300 words) on your work on the Challenge to Computing in  Cardiology no later than 15 April. Include the overall score for your Phase I entry in your abstract. Please select “PhysioNet/CinC Challenge” as the topic of your abstract, so it can be identified easily by the abstract review committee. See "Advice on Writing an Abstract" below for more important information on your abstract.
4. Submit at least one open-source entry that can be scored during the second phase (between 12:01am GMT on 27 April and 11:59pm GMT on 23 August).
5. Submit a full (4-page) paper on your work on the Challenge to CinC no later than the deadline of conference paper submission and select the pre-print option.
6. Attend CinC 2020 (13-16 September 2020) in Italy and present your work there either orally (if we select you) or as a poster. You must stand by your poster to defend it. No shows (oral or poster) will be disqualified.

You must not submit analysis of this year’s Challenge data to other conferences or journals until after CinC 2020 has taken place so that the competitors can discuss the results in a single forum. If we discover evidence you have done so, you will be disqualified and de-ranked on the website, banned from future Challenges, and the journal/conference will be contacted to request your article is withdrawn for contravention of the terms of use. We expect a special issue from a journal to follow the conference and encourage all entrants (including those who missed the opportunity to compete or attend CinC 2020) to submit extended analysis and articles to that issue, taking into account the publications and discussions at CinC 2020.

## Advice on Writing an Abstract 

To improve your chances of having your abstract accepted, we offer the following advice. Make sure all the authors match your registration information and you use the same email addresses. Stick to the word limit (check [the conference website](http://www.cinc.org/cinc-conference-program-abstracts/) for updates, but it is usually between 250 and 300 words). Make sure all your co-authors agree on the abstract. Importantly, be sure to submit your abstract by the deadline, so include time for errors, internet outages, etc. When submitting, you will be asked for the topic – please select “PhysioNet/CinC Challenge” so it can be identified easily by the abstract review committee. However, do not include the words “PhysioNet” or “PhysioNet/CinC” or “Challenge” in the title – this creates confusion with the hundreds of other articles and the main descriptor of the Challenge. Although your work is bound to change, the quality of your abstract is a good indicator of the final quality of your work. We suggest you spell check, write in full sentences, and be specific about your approaches. Include cross validated training performance (using the Challenge metrics) and your score provided by the Challenge submission system. If you omit or inflate this latter score, then your abstract will be rejected. If you are unable to get the scoring system working, you can still submit, but the work should be very high quality. Your title, abstract and author list (collaborators) can be modified in September when you submit the final paper, so do not be embarrassed by any low scores. We do not expect high scores at this stage. We are focused on the thoughtfulness of the approach and quality of the abstract. 

You will be notified if your abstract has been accepted by email from CinC during the first week in June or earlier. You may not enter more than one abstract describing your work in the Challenge. We know you may have multiple ideas, and the actual abstract will evolve over the course of the Challenge – this is OK. More information, particularly on discounts and scholarships, can be found [here](http://www.cinc.org/information-for-computing-in-cardiology-authors/). We are sorry, but the Challenge organizers do not have extra funds to enable discounts or funding to attend the conference. 


## Open-Source Licenses
We encourage the use of open-source licenses for your entries.

Entries with non open-source licenses will be scored but not ranked in the official competition. All scores will be made public. At the end of the competition, all entries will be posted publicly, and therefore automatically mirrored on several sites around the world. We have no control over these sites, so we cannot remove your code even on request. Before the end of the competition, your code is not publicly available, and you can choose to withdraw it until the end of the Challenge in August. However, the organizers reserve the right to retain and use a copy of the code for non-commercial use. This allows us to re-score if definitions change and validate any claims made by competitors.

## Rules on Competing in Teams / Collaboration

To maintain the scientific impact of the Challenges, it is important that all Challengers contribute truly independent ideas. For this reason, we impose the following rules on team composition/collaboration:

1. Multiple teams from a single entity (such as a company, university, or university department) are allowed as long as the teams are truly independent and do not share team members (at any point), code, or any ideas. Multiple teams from the same research group or company unit are not allowed because of the difficulty of maintaining independence in those situations. If there is any question on independence, the teams will be required to supply an official letter from the company that indicates that the teams do not interact at any point (socially or professionally) and work in separate facilities, as well as the location of those facilities. 
2. You can join an existing team as long as you have not belonged to another team or communicated with another team about the current Challenge. You must notify us at challenge [at] physionet.org as soon as you do, supplying your full name, affiliations, email address, and the name of the team you are joining. You must cc all team members on the email addresses they used to register their team, and have each of them reply within 24 hours to confirm the new team composition. 
3. You may use public code from another team if they posted it before the competition.
4. You may not make your Challenge code publicly available during the Challenge or use any code from another Challenger that was shared, intentionally or not, during the course of the Challenge.
5. You may not publicly post information describing your methods (blog, vlog, code, preprint, presentation, talk, etc.) or give a talk outside your own research group at any point during the Challenge that reveals the methods you have employed or will employ in the Challenge. Obviously, you can talk and publish on the same methods on other data as long as you don't indicate that you used or planned to use it for the Challenge.
6. You must use the same team name and email address for your team throughout the course of the Challenge. The email address should be the same as the one used to register for the Challenge, and to submit your abstract to Computing in Cardiology. Note that the submitter of the conference article/code does not need to present at the conference or be in any particular location in the author order on the abstract/poster/paper, but they must be a contributing member of the team. If your team uses multiple team names and/or email addresses to enter the Challenge, please contact the organizers immediately to avoid disqualification of all teams concerned. Ambiguity will result in disqualification.

If we discover evidence of the contravention of these rules, then you will be ineligible for a prize and your entry publicly marked as possibly associated with another entry. Although we will contact the team(s) in question, time and resources are limited and the Organizers must use their best judgement on the matter in a short period of time. The Organizers’ decision on rule violations will be final.

## Conference Attendance

[CinC 2020](https://www.cinc2020.org/) will take place from 13-16 September 2020 in [Rimini, Italy](https://www.google.com/maps/place/Rimini,+Province+of+Rimini,+Italy/@44.053442,12.2945337,10z/). You must attend the whole conference to be eligible for prizes. If you send someone in your place who is not a team member or co-author you will be disqualified and your abstract will be removed from the proceedings. It is vital the presenter (oral or poster) can defend your work in person, and has an in-depth knowledge of all decisions made during the development of your algorithm. No exceptions will be made. No remote attendance will be allowed because the organizational burden for this is too high. If you require a visa to attend the conference, we strongly suggest that you apply as soon as possible.  Please contact the local [conference](https://www.cinc2020.org/visa-information/) organizing committee (not the Challenge organizers) for any visa sponsorship letters and answer any questions concerning the conference. 
Hackathon
Thanks to our sponsors, a pre-conference hackathon (with prizes) will take place on 13 September 2020 in Rimini, Italy, before the conference begins.

Any team with at least one conference attendee is eligible to enter. You do not need to have entered the Challenge or have an abstract in the conference before this date. Moreover, you may combine forces with other teams to produce hybrid algorithms. We suggest that you peruse the conference preprints in the first week of September to find potential partners. This part of the Challenge is organized and sponsored by MathWorks and Google Cloud, so there will be hands-on help, but you are not required to use Google Cloud or MATLAB for developing an entry. The rules and restrictions are otherwise the same as the Challenge.
Sponsors
This year's challenge is co-sponsored by MathWorks and Google.
Obtaining Complimentary MATLAB Licenses
MathWorks has generously decided to sponsor this Challenge by providing complimentary licenses to all teams that wish to use MATLAB. Users can apply for a license and learn more about MATLAB support by visiting the PhysioNet Challenge page from MathWorks. If you have questions or need technical support, then please contact MathWorks at studentcompetitions@mathworks.com.
Obtaining Complimentary Google Cloud Credits
Google has generously agreed to provide Google Cloud Platform (GCP) credits for up to 40 teams for this Challenge. We will award these to the top performing teams each month. These credits should provide an added incentive to submit more entries earlier on, and give teams the maximum opportunity to learn before spending money in the cloud.

At the time of launching this Challenge, Google Cloud offers multiple services for free on a one-year trial basis and $300 in cloud credits. Additionally, if teams are based at an educational institution in selected countries, then they can access free GCP training online here.

Google Cloud credits of $500 per team will be made available to teams (that requested credits when registering for the challenge) with both a successful entry to the official phase of the Challenge and an accepted abstract to CinC. Only one credit of exactly $500 will be provided to one email address associated with each team. An upper limit of $20,000 in credits will initially be made available to teams based on challenge scores. 
The Challenge organizers, their employers, PhysioNet and Computing in Cardiology accept no responsibility for the loss of credits, or failure to issue credits for any reason. Please note, by requesting credits, you are granting us permission to forward your details to Google for the distribution of credits. You can register for these credits during the Challenge registration process.



## References
1. Kligfield, Paul, et al. 2007.Journal of the American College of Cardiology 49.10: 1109-1127.
2. Adams Jr,et al. 2007. Stroke 38.5: 1655-1711.
3. Bickerton, Martin, and Alison Pooler. 2019 .British Journal of Cardiac Nursing 14.3: 123-132.

[Back](../index.html)
