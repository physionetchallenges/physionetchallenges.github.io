---
layout: after_2015
---

[comment]: <> (<img style="float: right;" src="../assets/img/physionet-cinc.gif" width="258" height="105" align="right">)

# Detection of Chagas Disease from the ECG: The George B. Moody PhysioNet Challenge 2025

## <a name="summary"></a> Summary

The George B. Moody PhysioNet Challenges are annual competitions that invite participants to develop automated approaches for addressing important physiological and clinical problems. Chagas disease is a parasitic disease in Central and South America. It affects an estimated 6.5 million people and causes nearly 10,000 deaths annually. Serological testing can detect Chagas disease and allow for treatment that prevents or slows damage to the cardiovascular system, but testing capacity is limited. Chagas disease symptoms may also appear in electrocardiograms (ECG), so ECGs can help to prioritize individuals for the limited numbers of serological tests and inform the impacts of and treatments for Chagas disease. The George B. Moody PhysioNet Challenge 2025 invites teams to develop open-source algorithmic approaches for identifying potential cases of Chagas disease from standard 12-lead ECGs.

## <a name="announcements"></a> Announcements

- <a name="2025.02.07"></a>__February 7, 2025:__ We have included two new datasets, and we are now accepting submissions for the unofficial phase of the Challenge. Please read the [submission instructions](submissions), double check your code, [register](https://forms.gle/dJQzeWsXNVgM2URY9), and [submit an entry](https://forms.gle/126MiJuEpZwe8tBn8) when ready.

- <a name="2025.01.09"></a>__January 9, 2025:__ The NIH-funded George B. Moody PhysioNet Challenge 2025 is [now open](https://groups.google.com/g/physionet-challenges/c/BlGlSKUcPZ8)! Please read this website for details and share questions and comments on [Challenge forum](https://groups.google.com/g/physionet-challenges/). This year's Challenge is generously sponsored by [MathWorks](https://www.mathworks.com/).

## <a name="introduction"></a> Introduction

Chagas disease is a tropical parasitic disease caused by Trypanosoma cruzi and is transmitted mainly by triatomine bugs, also known as "kissing bugs". It affects an estimated 6.5 million people in endemic countries, and causes nearly 10,000 deaths annually<sup>[1](#ref-cucunuba)</sup>. Chagas disease can also be found in immigrants living in high-income countries<sup>[2](#ref-nepomuceno)</sup>. There is no human vaccine for Chagas disease.

After an acute phase, which generally occurs in childhood, Chagas disease enters a life-long chronic phase<sup>[3](#ref-sabino),[4](#ref-nunes)</sup>. In the early stages of infection, Chagas disease has no or mild symptoms, and can be treated by specific drugs that can prevent the progression of the disease. In the later stages of infection, Chagas disease can cause cardiomyopathy, leading to heart failure, cardiac arrhythmias, and thromboembolism, and is associated with a higher risk of death. Serological testing has shown the widespread prevalence of Chagas disease in some areas, and such tests can be used for diagnosis in individual patients, but serological testing capacities are limited. However, Chagas cardiomyopathy often manifests in electrocardiograms (ECG), providing a signal for Chagas disease and informing the treatment of the resulting heart conditions.<sup>[5](#ref-jidling)</sup>

The George B. Moody PhysioNet Challenge 2025 provides an opportunity to advance the Chagas disease screening by inviting teams to develop algorithmic approaches for using ECGs to prioritize patients for confirmatory testing for Chagas disease.

## <a name="objective"></a> Objective

For the 2025 Challenge, we ask participants to develop and implement open-source algorithms for identifying potential cases of Chagas disease from standard 12-lead ECGs. The winners of the Challenge will be the team with the highest score on the hidden test set.

## <a name="data"></a> Data

The Challenge data include standard 12-lead ECG records from several sources from Central and South America and binary labels for Chagas disease.

### <a name="data-sources"></a> Data Sources

We are using the [CODE-15% dataset](https://zenodo.org/records/4916206)<sup>[6](#ref-ribeiro)</sup>, the [SaMi-Trop dataset](https://zenodo.org/records/4905618)<sup>[7](#ref-cardoso)</sup>, and the [PTB-XL dataset](https://physionet.org/content/ptb-xl/)<sup>[8](#ref-wagner)</sup>, which combine a large dataset with weak labels and two small datasets with strong labels.

The [CODE-15% dataset](https://zenodo.org/records/4916206)<sup>[6](#ref-ribeiro)</sup> contains over 300,000 12-lead ECG records collected in Brazil between 2010 and 2016. Most recordings have a duration of either 7.3 s or 10.2 s and a sampling frequency of 400 Hz. The [binary Chagas labels](data/code15_chagas_labels.zip) are self-reported and therefore may or may not have been validated. These data are publicly available and included in the Challenge training set.

The [SaMi-Trop dataset](https://zenodo.org/records/4905618)<sup>[7](#ref-cardoso)</sup> contains 1,631 12-lead ECG records collected from Chagas patients in Brazil between 2011 and 2012. Most recordings have a duration of either 7.3 s or 10.2 s and a sampling frequency of 400 Hz. The [binary Chagas labels](data/samitrop_chagas_labels.zip) are validated by serological tests, and all are positive. These data are publicly available, and half are included in the Challenge training set.

The [PTB-XL dataset](https://physionet.org/content/ptb-xl/)<sup>[8](#ref-wagner)</sup> contains 21,799 12-lead ECG records collected from presumably non-Chagas patients in Europe between 1989 and 1996. The recordings have a duration of 10 s and a sampling frequency of 500 Hz (or optionally 100 Hz). Based on geography, all or almost all of the patients are likely to be Chagas negative. They are included in the Challenge training set.

Like all data, these data have different data collection, processing, and documentation procedures, but they are realistic examples of real-world data. If you use these or other data as part of your method, then please cite them appropriately to clarify your method and attribute the data contributors.

The data will be have training, validation, and test sets. The training data are publicly shared, and the validation and test data and labels will be privately sequestered to allow for the principled assessment of the submitted algorithms. The validation and test data include sources that are not represented in the training set. The prevalence rate of Chagas disease in each of the training, validation, and test sets approximately matches the prevalence rate of the countries in which Chagas disease is endemic.

### <a name="data-formats"></a> Data Formats

The data were minimally processed from the machines to de-identify the data as necessary and provide the ECG recordings in a consistent, standardized format for the Challenge.

The data are stored in WFDB files. We provide [example code](#algorithms) for preparing, loading, and processing the data in both MATLAB and Python. Each ECG recording includes a signal file in a [WFDB-compatible binary format](https://physionet.org/physiotools/wag/signal-5.htm) for the ECG signal data and a plain text file in [WFDB header format](https://physionet.org/physiotools/wag/header-5.htm) for metadata about the recording as well as patient attributes, including the Chagas labels.

The [WFDB header file](https://physionet.org/physiotools/wag/header-5.htm) includes the sampling frequency, signal length, signal resolution, and signal names of the channels in the ECG waveform; initial and checksum values for the channels; any available demographic information; and the Chagas labels. For example, the [CODE-15% Database](https://zenodo.org/records/4916206) includes a record `113`. This record has 12 channels, a sampling frequency of 400Hz, and 4096 samples per channel:
```
113 12 400 4096
113.dat 16 1000(0)/mV 16 0 7767 28904 0 I
113.dat 16 1000(0)/mV 16 0 2820 -4132 0 II
113.dat 16 1000(0)/mV 16 0 -4947 32499 0 III
113.dat 16 1000(0)/mV 16 0 -5290 18601 0 AVR
113.dat 16 1000(0)/mV 16 0 6357 -9558 0 AVL
113.dat 16 1000(0)/mV 16 0 -1059 -23504 0 AVF
113.dat 16 1000(0)/mV 16 0 4451 27243 0 V1
113.dat 16 1000(0)/mV 16 0 3186 15474 0 V2
113.dat 16 1000(0)/mV 16 0 4451 28365 0 V3
113.dat 16 1000(0)/mV 16 0 3826 22578 0 V4
113.dat 16 1000(0)/mV 16 0 3948 -12925 0 V5
113.dat 16 1000(0)/mV 16 0 4367 -14130 0 V6
# Exam ID: 113
# Patient ID: 16860
# Age: 68
# Sex: Female
# Chagas label: False
```

### <a name="data-access"></a> Data Access

You can access the data by following the instructions in this [repository](https://github.com/physionetchallenges/python-example-2025).

## <a name="registration"></a>Registering for the Challenge and Conditions of Participation

To participate in the Challenge, [register your team](https://forms.gle/dJQzeWsXNVgM2URY9) by providing the full names, affiliations, and official email addresses of your entire team before you [submit](https://forms.gle/126MiJuEpZwe8tBn8) your algorithm. The details of all authors must be exactly the same as the details in your abstract submission to [Computing in Cardiology](http://www.cinc2025.org/). You may update your author list by completing [this form](https://forms.gle/dJQzeWsXNVgM2URY9) again (read the form for details), but changes to your authors must not contravene [the rules](#rules) of the Challenge.

## <a name="algorithms"></a> Algorithms

Each team must develop and implement an algorithm that, given a 12-lead ECG recording, provides a binary Chagas label and a probability of a positive Chagas case.

We implemented example algorithms in [MATLAB](https://github.com/physionetchallenges/matlab-example-2025) and [Python](https://github.com/physionetchallenges/python-example-2025). Other implementation languages will be considered upon request. The code repositories contain details for the examples and other helpful scripts and functions. These examples were not designed to perform well but to provide minimal working examples of how to work with the data for the Challenge task. We will also provide a version of [this code](https://github.com/carji475/ecg-chagas), which uses a deep neural network to detect Chagas disease.

Teams submit their code, including working training code, in a GitHub or Gitlab repository by submitting a Google Form. During the Challenge, we will train each entry on the training set and evaluate it on the validation set. After the Challenge, we will train entries on the training set and evaluate them on the test set. We try to provide feedback about the entry (a score on the validation set for successful entries and an error message for unsuccessful entries) within 72 hours of submission.

Please see the [submission instructions](submissions) for detailed information about how to submit a successful Challenge entry, double check your code (we cannot debug your code for you), and [submit](https://forms.gle/126MiJuEpZwe8tBn8) your algorithm when ready. We will provide feedback on your entry as soon as possible, so please wait at least **72 hours** before contacting us about the status of your entry.

Please note that you remain the [owners](#ip) of any code that you submit, and we encourage you to use an [open-source license](#open).

## <a name="scoring"></a> Scoring

Each region has a limited capacity for serological testing to validate potential cases of Chagas disease. We will evaluate each algorithm by prioritizing patients according to the algorithm's probability of a positive Chagas case and reporting the true positive rate (TPR) for Chagas cases in the patients with the 5% highest probabilities. The team with the highest TPR on the hidden test set wins the Challenge.

This metric and other traditional metrics, including AUC, are [implemented](https://github.com/physionetchallenges/evaluation-2025) in the `evaluate_model` script. We invite feedback about these metrics.

## <a name="rules"></a> Overview of rules

There are two phases for the Challenge: an unofficial phase and an official phase. The unofficial phase of the Challenge allows us to introduce and "beta test" the data, scores, and submission system before the official phase of the Challenge. Participation in the unofficial phase is mandatory for participating in the official phase of the Challenge because it helps us to improve the official phase.

Entrants may have an overall total of up to 15 scored entries over both the unofficial and official phases of the competition (see the below table). We will evaluate these entries on the validation set during the unofficial and official phases, and we will evaluate at most on successful official phase entry from each team on the test set after the official phase. All deadlines occur at 11:59pm GMT on the dates mentioned below, and all dates are during 2025 unless indicated otherwise. If you do not know the difference between GMT and your local time, then find it out before the deadline!

__Please__ [submit](https://forms.gle/126MiJuEpZwe8tBn8) your entries early to ensure that you have the most chances for success. If you wait until the last few days to submit your entries, then you may not receive feedback before the submission deadline, and you may be unable to resubmit your entries if there are unexpected errors or issues with your submissions. Every year, several teams wait until the last few days to submit their first entry and are unable to debug their work before the deadline.

### Timing and priority of entries

Although we score on a first-come-first-serve basis, please note that if you submit more than one entry in a 24-hour period, your second entry may be deprioritized compared to other teams' first entries. If you submit more than one entry in the final 24 hours before the Challenge deadline, then we may be unable to provide feedback or a score for more than one of your entries. It is unlikely that we will be able to debug any code in the final days of the Challenge.

For these reasons, we strongly suggest that you start submitting entries at least 5 days before the unofficial deadline and 10 days before the official deadline. We have found that the earlier teams enter the Challenge, the better they do because they have time to digest feedback and performance. We therefore suggest entering your submissions many weeks before the deadline to give yourself the best chance for success.

### <a name="key-dates-deadlines"></a> Key dates/deadlines

|                                            | Start              | End                               | Submissions                          |
|--------------------------------------------|--------------------|-----------------------------------|--------------------------------------|
| Unofficial phase                           | 09 January 2025    | 09 April 2025                     | 1-5 scored entries ([\*](#1ast))     |
| Hiatus                                     | 10 April 2025      | 09 May 2025                       | N/A                                  |
| Abstract deadline                          | 15 April 2025      | 15 April 2025                     | 1 abstract                           |
| Official phase                             | 10 May 2025        | 20 August 2025                    | 1-10 scored entries ([\*](#1ast))    |
| Abstract decisions released                | Mid-June 2025      | Mid-June 2025                     | N/A                                  |
| Wild card entry date                       | 31 July 2025       | 31 July 2025                      | N/A                                  |
| Hiatus                                     | 21 August 2025     | 13 September 2025                 | N/A                                  |
| Deadline to choose algorithm for test data | 27 August 2025     | 27 August 2025                    | N/A                                  |
| Preprint deadline                          | 27 August 2025     | 27 August 2025                    | One 4-page paper ([\*\*](#2ast))     |
| Conference                                 | 14 September 2025  | 17 September 2025                 | 1 presentation ([\*\*](#2ast))       |
| Final scores released                      | Mid-September 2025 | Mid-September 2025                | N/A                                  |
| Final paper deadline                       | 1 October 2025     | 1 October 2025                    | One 4-page paper ([\*\*\*](#3ast))   |

<a name="1ast"></a>(\* Entries that fail to score do not count against limits.)

<a name="2ast"></a>(\*\* Must include preliminary scores.)

<a name="3ast"></a>(\*\*\* Must include final scores, your ranking in the Challenge, and any updates to your work as a result of feedback after presenting at CinC. This final paper deadline is earlier than the deadline given by CinC so that we can check these details.)

To be eligible for the open-source award, you must do all the following:

1. Register for the Challenge [here](https://forms.gle/dJQzeWsXNVgM2URY9).
2. [Submit](https://forms.gle/126MiJuEpZwe8tBn8) at least one open-source entry that can be scored during the unofficial phase.
3. [Submit an abstract to CinC](https://cinc.org/inf_authors/) by the abstract submission deadline. Include your team name and score from the unofficial phase in your abstract. Please select "PhysioNet/CinC Challenge" as the topic of your abstract so that it can be identified easily by the abstract review committee. __Please__ read ["Advice on Writing an Abstract"](#abstracts) for important information on writing a successful abstract.
4. Submit at least one open-source entry that can be scored during the official phase.
5. [Submit a full 4-page paper](https://cinc.org/inf_authors/) on your work to CinC by the above preprint deadline.
6. One of your team members must attend [CinC 2025](http://www.cinc2025.org/) to present your work either orally or as a poster (depending on your abstract acceptance). If you have a poster, then you must stand by it to defend your work. No-shows (oral or poster) will be disqualified. One of your team members must also attend the closing ceremony to collect your prize. No substitutes will be allowed. If the conference permits remote attendance, then you will be eligible for ranking if you attend remotely (and fulfill the other required criteria), but teams must attend in person for prize eligibility.
7. [Submit a full 4-page paper](https://cinc.org/inf_authors/) on your work to CinC by the above final paper deadline. Please note that we expect the abstract to change significantly both in terms of results and methods. You may also update your title with the caveat that it must not be substantially similar to the title of the competition or contain the words "physionet," "challenge," or "competition."

You must not submit an analysis of this year's Challenge data to other conferences or journals until after CinC 2025 so that we can discuss the Challenge in a single forum. If we discover evidence that you have submitted elsewhere before the end of CinC 2025, then you will be disqualified and de-ranked on the website, banned from future Challenges, and the journal/conference will be contacted to request your article be withdrawn for contravention of the terms of use.

There are many reasons for this policy: (1) we do not release results on the test data before the end of CinC, and only reporting results on the training data increases the likelihood of overfitting and is not comparable to the official results on the test data, and (2) attempting to publish on the Challenge data before the Challengers present their results is unprofessional and comes across as a territorial grab. This requirement stands even if your abstract is rejected, but you may continue to enter the competition and receive scores. (However, unless you are accepted into the conference at a later date as a "wild card" entry, you will not be eligible to win a prize.) Of course, any publicly available data that was available before the Challenge is exempted from this condition, but any of the novelty of the Challenge (the Challenge design, the Challenge data that you downloaded from this page because it was processed for the Challenge, the scoring function, etc.) is not exempted.

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
- If you are unable to receive a score during the unofficial phase, then you can still submit, but the work should be of very high quality and you should include the cross validation results of your algorithm on the training set.

You will be notified if your abstract has been accepted by email from CinC in June. You may not enter more than one abstract describing your work in the Challenge. We know you may have multiple ideas, and the actual abstract will evolve over the course of the Challenge. More information, particularly on discounts and scholarships, can be found [here](http://www.cinc.org/information-for-computing-in-cardiology-authors/). We are sorry, but the Challenge Organizers do not have extra funds to enable discounts or funding to attend the conference.

Again, we cannot guarantee that your code will be run in time for the [CinC](http://cinc.org/) abstract deadline, especially if you submit your code immediately before the deadline. It is much more important to focus on writing a high-quality abstract describing your work and submit this to the conference by abstract deadline. Please follow [these instructions](#abstracts) here carefully.

Please make sure that __all of your team members are authors on your abstract__. If you need to add or subtract authors, do this at least a week before the abstract deadline. Asking us to alter your team membership near or after the deadline is going to lead to confusion that could affect your score during review. It is better to be more inclusive on the abstract in terms of authorship, though, and if we find authors have moved between abstracts/teams without permission, then this is likely to lead to disqualification. As noted above, you may change the authors/team members later in the Challenge.

Please make sure that you include __your team name__, your __official score__ as it appears on the leaderboard, and __cross validation results__ in your abstract __using the scoring metrics for this year's Challenge__ (especially if you are unable to receive a score or are scoring poorly). The novelty of your approach and the rigor of your research is much more important during the unofficial phase. Please make sure you describe your technique and any novelty very specifically. General statements such as "a 1D CNN was used" are uninformative and will score poorly in review.

The Challenge Organizers have no ability to help with any problems with the abstract submission system. We do not operate it. Please do not email us with issues related to the abstract submission system.

### <a name="ip"></a><a name="open"></a> Intellectual Property and Open-Source Licenses

Please note that each team remains the owners of their code and retain the intellectual property (IP) of their code. We encourage the use of open-source licenses for your entries.

Entries with non open-source licenses will be scored but not ranked in the official competition. All scores will be made public. At the end of the competition, all entries will be posted publicly, and therefore automatically mirrored on several sites around the world. We have no control over these sites, so we cannot remove your code even on request. Code which the organizers deem to be functional will be made publicly available after the end of the Challenge. You can request to withdraw from the Challenge, so that your entry's performance is no longer listed in the official leaderboard, up until a week before the end of the official phase. However, the Organizers reserve the right to publish any submitted open-source code after the official phase is over. The Organizers also retain the right to use a copy of submitted code for non-commercial use. This allows us to re-score if definitions change and validate any claims made by competitors.

If no license is specified in your submission, then the license given in the example code will be added to your entry, i.e., we will assume that you have released your code under the [BSD 3-Clause license](https://opensource.org/licenses/BSD-3-Clause).

## <a name="collaboration"></a> Rules on Competing in Teams / Collaboration

To maintain the scientific impact of the Challenges, it is important that all Challengers contribute truly independent ideas. For this reason, we impose the following rules on team composition/collaboration:

1. Multiple teams from a single entity (such as a company, university, or university department) are allowed as long as the teams are truly independent and do not share team members (at any point), code, or any ideas. Multiple teams from the same research group or company unit are not allowed because of the difficulty of maintaining independence in those situations. If there is any question on independence, the teams will be required to supply an official letter from the company that indicates that the teams do not interact at any point (socially or professionally) and work in separate facilities, as well as the location of those facilities.
2. You can join an existing team before the abstract deadline as long as you have not belonged to another team or communicated with another team about the current Challenge. You may update your author list by completing [this form](https://forms.gle/baopm4U2Z2dmju777) again (check the "Update team members" box on the form), but changes to your authors must not contravene [the rules](#collaboration) of the Challenge.
3. You may use public code from another team if they posted it before the competition.
4. You may not make your Challenge code publicly available during the Challenge or use any code from another Challenger that was shared, intentionally or not, during the course of the Challenge.
5. You may not publicly post information describing your methods (blog, vlog, code, preprint, presentation, talk, etc.) or give a talk outside your own research group at any point during the Challenge that reveals the methods you have employed or will employ in the Challenge. Obviously, you can talk about and publish the same methods on other data as long as you don't indicate that you used or planned to use it for the Challenge.
6. You must use the same team name and email address for your team throughout the course of the Challenge. The email address should be the same as the one used to register for the Challenge, and to submit your abstract to CinC. Note that the submitter of the conference article/code does not need to present at the conference or be in any particular location in the author order on the abstract/poster/paper, but they must be a contributing member of the team. If your team uses multiple team names and/or email addresses to enter the Challenge, then please contact the Organizers immediately to avoid disqualification of all team members concerned. Ambiguity will result in disqualification.
7. If you participate in the Challenge as part of a class project, then please treat your class as a single team — please use the same team name as other groups in your class, limit the number of submissions from your class to the number allowed for each team, and feel free to present your work within your class. If your class needs more submissions than the Challenge submission limits allow, then please perform cross-validation on the training data to evaluate your work.

If we discover evidence of the contravention of these rules, then you will be ineligible for a prize and your entry publicly marked as possibly associated with another entry. Although we will contact the team(s) in question, time and resources are limited and the Organizers must use their best judgment on the matter in a short period of time. The Organizers' decision on rule violations will be final.

Similarly, no individual who is affiliated with the same research group, department, or similar organization unit (academic or industry) as one or more of the Organizers of that year's Challenge researchers may officially participate in the Challenge for that year, even if they do not collaborate with Organizers. If you are uncertain if your shared affiliation disallows you from officially participating, then please contact the Challenge Organizers for clarification. This rule is to prevent concerns about independence or favoritism.

## Checking Your Code to Avoid Disqualification

Please note, as we do every year, we will perform some simple tests on your code to ensure it is more usable and reusable. We suggest you also try these similar approaches, including:

1. Change the data and/or labels in the training set. Does your code work with missing, unknown, non-physiological values in the data? Does your code work if you change the prevalence rates of the classes or remove one of the classes? (It will probably have a slightly different performance, but that is to be expected.)
2. Change the size of the training set. You can extract a subset of the training set or duplicate the training set. Does your code work with a training set that is 15% or 150% of the size of the original training set? (Again, your performance will differ, but the code should still execute.)
3. Run your training code on the modified training set. If your training code fails, then your code is too sensitive to the changes in the training set, and you should update your code until it works as expected.
4. Score the resulting model on part of the unmodified training set — ideally, data that you did not use to train your model. If your code fails, or if the model trained on the modified training set receives the same scores or almost the same scores as the model trained on the unmodified training set, then your training code didn' t learn from the training set, and you should update your code until it works as expected.

Again, this is a simplified process, and we may change how we stress test your code in future tests (such as randomizing the labels), so please think about how you can ensure that your code isn't dependent on a single set of data and labels or a single test for robustness. Of course, you should also try similar steps to check the rest of your code as well.

All of this work is in service of protecting your scientific contributions over the course of the Challenge, and we appreciate, as always, your feedback and help.

## <a name="conference"></a>Conference Attendance

[CinC 2025](https://cinc2025.org/) will take place from 14-17 September 2025 in São Paulo, Brazil. You must attend the whole conference to be eligible for prizes. If you send someone in your place who is not a team member or co-author, then you will be disqualified and your abstract will be removed from the proceedings. In particular, it is vital that the presenter (oral or poster) can defend your work and have in-depth knowledge of all decisions made during the development of your algorithm. Due to this year's challenges, both in-person and remote attendance are allowed, but only in-person attendees are eligible for prize money. If you require a visa to attend the conference, we strongly suggest that you apply as soon as possible. Please contact the local [conference](https://cinc2025.org/) organizing committee (not the Challenge Organizers) for any visa sponsorship letters and answer any questions concerning the conference.

## <a name="sponsors"></a> Sponsors

This year's Challenge is generously sponsored by [MathWorks](https://www.mathworks.com/).

### Obtaining Complimentary MATLAB Licenses

[MathWorks](http://www.mathworks.com/) has generously decided to sponsor this Challenge by providing complimentary licenses to all teams that wish to use MATLAB. Users can apply for a license and learn more about MATLAB support by visiting the [PhysioNet Challenge page](https://www.mathworks.com/academia/student-competitions/physionet.html) from MathWorks. If you have questions or need technical support, then please contact MathWorks at studentcompetitions@mathworks.com.

## <a name="acknowledgements"></a> Acknowledgements

Supported by the [National Institute of Biomedical Imaging and Bioengineering](https://www.nibib.nih.gov/) (NIBIB) under NIH grant R01EB030362.

## References

1. <a name="ref-cucunuba"></a> Cucunubá, Z. M., Gutiérrez-Romero, S. A., Ramírez, J., Velásquez-Ortiz, N., Ceccarelli, S., Parra-Henao, G., Henao-Martínez, A. F., Rabinovich, J., Basáñez, M., Nouvellet, P., & Abad-Franch, F. (2024). The epidemiology of Chagas disease in the Americas. The Lancet Regional Health - Americas, 37, 100881. doi: [10.1016/j.lana.2024.100881](https://doi.org/10.1016/j.lana.2024.100881)

2. <a name="ref-handzel"></a> Nepomuceno de Andrade G, Bosch-Nicolau P, Nascimento BR, Martins-Melo FR, Perel P, Geissbühler Y, Demacq C, Quijano M, Mosser JF, Cousin E, Machado ÍE, Rodrigues MLAC, Ribeiro ALP, Molina I. Prevalence of Chagas disease among Latin American immigrants in non-endemic countries: an updated systematic review and meta-analysis. Lancet Reg Health Eur. 2024 Sep 6;46:101040. doi: [10.1016/j.lanepe.2024.101040](https://doi.org/10.1016/j.lanepe.2024.101040). PMID: [39290806](https://pubmed.ncbi.nlm.nih.gov/39290806/); PMCID: PMC11407232.

3. <a name="ref-sabino"></a> Sabino EC, Nunes MCP, Blum J, Molina I, Ribeiro ALP. Cardiac involvement in Chagas disease and African trypanosomiasis. Nat Rev Cardiol. 2024 Jul 15. doi: [10.1038/s41569-024-01057-3](https://doi.org/10.1038/s41569-024-01057-3). Epub ahead of print. PMID: [39009679](https://pubmed.ncbi.nlm.nih.gov/39009679/).

4. <a name="ref-nunes"></a> Nunes MCP, Beaton A, Acquatella H, Bern C, Bolger AF, Echeverría LE, Dutra WO, Gascon J, Morillo CA, Oliveira-Filho J, Ribeiro ALP, Marin-Neto JA; American Heart Association Rheumatic Fever, Endocarditis and Kawasaki Disease Committee of the Council on Cardiovascular Disease in the Young; Council on Cardiovascular and Stroke Nursing; and Stroke Council. Chagas Cardiomyopathy: An Update of Current Clinical Knowledge and Management: A Scientific Statement From the American Heart Association. Circulation. 2018 Sep 18;138(12):e169-e209. doi: [10.1161/CIR.0000000000000599](https://doi.org/10.1161/CIR.0000000000000599). PMID: [30354432](https://pubmed.ncbi.nlm.nih.gov/30354432/).

5. <a name="ref-jidling"></a> Jidling C, Gedon D, Schön TB, Oliveira CDL, Cardoso CS, Ferreira AM, Giatti L, Barreto SM, Sabino EC, Ribeiro ALP, Ribeiro AH. Screening for Chagas disease from the electrocardiogram using a deep neural network. PLoS Negl Trop Dis. 2023 Jul 3;17(7):e0011118. doi: [10.1371/journal.pntd.0011118](https://10.1371/journal.pntd.0011118). PMID: [37399207](https://pubmed.ncbi.nlm.nih.gov/37399207/); PMCID: PMC10361500.

6. <a name="ref-riberio"></a> Ribeiro AH, Ribeiro MH, Paixão GMM, Oliveira DM, Gomes PR, Canazart JA, Ferreira MPS, Andersson CR, Macfarlane PW, Meira W Jr, Schön TB, Ribeiro ALP. Automatic diagnosis of the 12-lead ECG using a deep neural network. Nat Commun. 2020 Apr 9;11(1):1760. doi: 10.1038/s41467-020-15432-4. Erratum in: Nat Commun. 2020 May 1;11(1):2227. doi: [https://doi.org/10.1038/s41467-020-16172-1](10.1038/s41467-020-16172-1). PMID: [32273514](https://pubmed.ncbi.nlm.nih.gov/32273514/); PMCID: PMC7145824.

7. <a name="ref-cardoso"></a> Cardoso CS, Sabino EC, Oliveira CD, de Oliveira LC, Ferreira AM, Cunha-Neto E, Bierrenbach AL, Ferreira JE, Haikal DS, Reingold AL, Ribeiro AL. Longitudinal study of patients with chronic Chagas cardiomyopathy in Brazil (SaMi-Trop project): a cohort profile. BMJ Open. 2016 May 4;6(5):e011181. doi: [10.1136/bmjopen-2016-011181](https://doi.org/10.1136/bmjopen-2016-011181). PMID: [27147390](https://pubmed.ncbi.nlm.nih.gov/27147390/); PMCID: PMC4861110.

8. <a name="ref-wagner"></a> Wagner P, Strodthoff N, Bousseljot RD, Kreiseler D, Lunze FI, Samek W, Schaeffter T. PTB-XL, a large publicly available electrocardiography dataset. Sci Data. 2020 May 25;7(1):154. doi: [10.1038/s41597-020-0495-6](https://doi.org/10.1038/s41597-020-0495-6). PMID: [32451379](https://pubmed.ncbi.nlm.nih.gov/32451379/); PMCID: PMC7248071.

---

This year's Challenge is generously sponsored by [MathWorks](https://www.mathworks.com/).

{: style="text-align:center"}
![MathWorks](logo_mathworks.png){:height="35px"}
