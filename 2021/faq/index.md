---
layout: 2021
---

# Frequently Asked Questions (FAQ) - 2021 Challenge

This page provides more specific FAQs for 2021 PhysioNet Challenge.

Please see [General Challenge FAQs](https://physionetchallenges.org/faq/) for general information of the PhysioNet Challenges.

[General Challenge FAQs (please read first)](https://physionetchallenges.org/faq/)

[Rules](#rules)
- [Can I attend this year's conference remotely? Will I be eligible for prizes?](#remotely)
- [Can I collaborate with another team from the 2020 Challenge?](#collaborate)
- [For the license, can we make it open source but restrict to non-commercial use?](#license)

[Labels and scores](#labels-scores)

- [Why don't you merge PVC, VEB, and VPB labels?](#labels)
- [Are the scores currently on the leaderboard the final scores for the Challenge?](#leaderboard)

[Data](#data)

- [Are the provided records a more accurate representation of the hold-out evaluation data that what was previously provided?](#hold-out)
- [Do I need to upload your training data? What about the code for evaluating my algorithm?](#upload-data)

[Training and testing](#train-test)

- [How will you choose which model to evaluate on the full test data? The latest entry? The best-scoring entry?](#choose-model)
- [Are we allowed to do transfer learning using pre-trained networks?](#pre-trained)
- [Do we need to provide our training code?](#training-code)
- [Can I provide my training code but request that you not use/run it?](#not-train)
- [What computational resources do you provide for our code?](#computational)
- [Should I submit your example code to test the submission system?](#test-submission)
- [Should I submit an empty repository to test the submission system?](#empty)
- [I left out a file, or I missed the deadline, or something else. Can I email you my code?](#email-code) 
- [Do you run the code that was in my repository at the time of submission?](#repository)
- [Why is my entry unsuccessful on your submission system? It works on my computer.](#unsuccessful-entry)
- [My entry had some kind of error. Did I lose one of my total entries?](#error-lose-entry)


## <a name="rules"></a> Rules

<a name="remotely"></a> __Can I attend this year's conference remotely? Will I be eligible for prizes?__

We don't know yet. Due to the unique circumstances of 2020, remote attendance was allowed for CinC 2020. Participants were still eligible for prizes if they attended remotely (as long as they satisfied the other criteria).

<a name="collaborate"></a> __Can I collaborate with another team from the 2020 Challenge?__

Yes, as long as no one from either team competes in a different team.

<a name="license"></a>__For the license, can we make it open source but restrict to non-commercial use?__

Yes, the philosophy of the Challenge is to encourage researchers to make their code free to use for research. We hope that companies will approach you to license the code, too! If you do not specify any license, then we will assume that the license is the BSD 3-Clause License.

## <a name="labels-scores"></a> Labels and scores

<a name="labels"></a> __Why don't you merge PVC, VEB, and VPB labels?__

Each database is labelled using a different ontology, or subset of terms in an ontology (or sometimes no ontology, i.e., just a free-text description). We needed to decide how to map these ontologies to a consistent set of labels. For example, we have the following four labels for ventricular ectopic beats:
 
| Description                        | SNOMED Code | Abbreviation |
| -----------------------------------| ------------|--------------|
| Premature ventricular complexes    |   164884008 | PVC          |
| Premature ventricular contractions |   427172004 | PVC          |
| Ventricular ectopic beats          |    17338001 | VEB          |
| Ventricular premature beat         |    17338001 | VPB          |

We have chosen to retain the distinction between these in terms of SNOMED codes (but merged PVCs because we could really see no reason they had two separate codes), but the scored labels carry the same weight in scoring matrix, so mixing them up doesn't cost you any points. You may then ask, 'why not merge them all in the labelling'? That's a question you have to answer for yourself! You are certainly welcome to do that - but you may not want to. You may note that only VPB indicates the temporal location of the beat relative to the preceding normal beat. This may, or may not, affect your algorithm, depending on how you write your code. You may or may not want it to affect your algorithm - the relative timing of beats certainly gives you information!

In general, we have tried to provide you with as much useful information as possible, without overwhelming you with a complete data dump.

<a name="leaderboard"></a>__Are the scores currently on the leaderboard the final scores for the Challenge?__

No, the leaderboard contains scores on a subset of the hidden data during the unofficial and official phases of the Challenge. The final scores on the full test data are released after the conference for the "best" model selected by each team.

## <a name="data"></a> Data

<a name="hold-out"></a>__Are the provided records a more accurate representation of the hold-out evaluation data that what was previously provided?__

We are creating a large database of heterogeneous data with varying labels, some of which are wrong or incomplete. Leads can be inverted, noisy, mislabeled.  We have deliberately made no attempt to clean this up. The test data contains better labels, but it is not perfect either, and although it roughly correspond to the training data, it includes some deliberate differences.

<a name="upload-data"></a>__Do I need to upload your training data? What about the code for evaluating my algorithm?__

No, we have the training data, test data, and evaluation code.

## <a name="train-test"></a> Training and Testing

<a name="choose-model"></a>__How will you choose which model to evaluate on the full test data? The latest entry? The best-scoring entry?__

You will be able to choose which model you would like to have scored on the full test set. We will ask for teams to choose their “best” model shortly before the end of the official phase of the Challenge. If you do not choose a model, or if there is any ambiguity about your choice, then we will use the model with the highest score on the current subset of the test data.

<a name="pre-trained"></a>__Are we allowed to do transfer learning using pre-trained networks?__

Yes, most certainly. We encourage you to do this. You do not need to include your data in the code stack for training the algorithm, but you do need to include the pre-trained model in the code and provide code to retrain (continue training) on the training data we provide. You must also thoroughly document the content of the database you used to pre-train.

<a name="training-code"></a>__Do we need to provide our training code?__

Yes, this is a required (and exciting) part of this year's Challenge.

<a name="not-train"></a>__Can I provide my training code but request that you not use/run it?__

No, the training code is an important part of this year's Challenge.

<a name="computational"></a>__What computational resources do you provide for our code?__

We run your training code on Google Cloud using 4 vCPUs, 32 GB RAM, and an optional NVIDIA T4 Tensor Core GPU. Your training code has a 36 hour time limit using the GPU and a 72 hours time limit without using a GPU.

We run your trained model on Google Cloud using 4 vCPUs, 32 GB RAM, and an optional NVIDIA T4 Tensor Core GPU. Your trained models have a 24 hour time limit on each of the validation and test sets.

<a name="test-submission"></a>__Should I submit your example code to test the submission system?__

No, please only submit your code to the submission system.

<a name="empty"></a>__Should I submit an empty repository to test the submission system?__

No, please only submit an entry after you have finished and tested your code.

<a name="email-code"></a>__I left out a file, or I missed the deadline, or something else. Can I email you my code?__

No, please use the submission form to submit your entry through a repository.

<a name="repository"></a>__Do you run the code that was in my repository at the time of submission?__

No, not yet. If you change your code after submitting, then we may or may not run the updated version of your code. If you want to update your code but do not want us to run the updates (yet), then please make changes in a subdirectory or in another branch of your repository.

<a name="unsuccessful-entry"></a>__Why is my entry unsuccessful on your submission system? It works on my computer.__

If you used Python for your entry, then test it in Docker.
    
<a name="error-lose-entry"></a>__My entry had some kind of error. Did I lose one of my total entries?__

No, only scored entries (submitted entries that receive a score) count against the total number of allowed entries.

__For General Challenge FAQs, please visit [here](https://physionetchallenges.org/faq/).__

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
