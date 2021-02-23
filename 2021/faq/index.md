---
layout: 2021
---

# Frequently Asked Questions (FAQ)

__Can I attend this year's conference remotely? Will I be eligible for prizes?__

We don't know yet. Due to the unique circumstances of 2020, remote attendance was allowed for CinC 2020. Participants were still eligible for prizes if they attended remotely (as long as they satisfied the other criteria).

__Can I collaborate with another team from the 2020 Challenge?__

Yes, as long as no one from either team competes in a different team.

__Why don't you merge PVC, VEB, and VPB labels?__

Each database is labelled using a different ontology, or subset of terms in an ontology (or sometimes no ontology, i.e., just a free-text description). We needed to decide how to map these ontologies to a consistent set of labels. For example, we have the following four labels for ventricular ectopic beats:
 
| Description                        | SNOMED Code | Abbreviation |
| -----------------------------------| ------------|--------------|
| Premature ventricular complexes    |   164884008 | PVC          |
| Premature ventricular contractions |   427172004 | PVC          |
| Ventricular ectopic beats          |    17338001 | VEB          |
| Ventricular premature beat         |    17338001 | VPB          |

We have chosen to retain the distinction between these in terms of SNOMED codes (but merged PVCs because we could really see no reason they had two separate codes), but the scored labels carry the same weight in scoring matrix, so mixing them up doesn't cost you any points. You may then ask, 'why not merge them all in the labelling'? That's a question you have to answer for yourself! You are certainly welcome to do that - but you may not want to. You may note that only VPB indicates the temporal location of the beat relative to the preceding normal beat. This may, or may not, affect your algorithm, depending on how you write your code. You may or may not want it to affect your algorithm - the relative timing of beats certainly gives you information!

In general, we have tried to provide you with as much useful information as possible, without overwhelming you with a complete data dump.

__Are the scores currently on the leaderboard the final scores for the Challenge?__

No, the leaderboard contains scores on a subset of the hidden data during the unofficial and official phases of the Challenge. The final scores on the full test data are released after the conference for the "best" model selected by each team.

__How will you choose which model to evaluate on the full test data? The latest entry? The best-scoring entry?__

You will be able to choose which model you would like to have scored on the full test set. We will ask for teams to choose their “best” model shortly before the end of the official phase of the Challenge. If you do not choose a model, or if there is any ambiguity about your choice, then we will use the model with the highest score on the current subset of the test data.

__Are we allowed to do transfer learning using pre-trained networks?__

Yes, most certainly. We encourage you to do this. You do not need to include your data in the code stack for training the algorithm, but you do need to include the pre-trained model in the code and provide code to retrain (continue training) on the training data we provide. You must also thoroughly document the content of the database you used to pre-train.

__Do we need to provide our training code?__

Yes, this is a required (and exciting) part of this year's Challenge.

__Can I provide my training code but request that you not use/run it?__

No, the training code is an important part of this year's Challenge.

__What computational resources do you provide for our code?__

We run your training code on Google Cloud using 8 vCPUs, 64 GB RAM, and an optional NVIDIA T4 Tensor Core GPU. The training code has a 72 hour time limit.

We run each your trained model on Google Cloud using 2 vCPUs, 13 GB RAM, and an optional NVIDIA T4 Tensor Core GPU. Your trained model has a 24 hour time limit on the test set.

__For the license, can we make it open source but restrict to non-commercial use?__

Yes, the philosophy of the Challenge is to encourage researchers to make their code free to use for research. We hope that companies will approach you to license the code, too! If you do not specify any license, then we will assume that the license is the BSD 3-Clause License.

__Are the provided records a more accurate representation of the hold-out evaluation data that what was previously provided?__

We are creating a large database of heterogeneous data with varying labels, some of which are wrong or incomplete. Leads can be inverted, noisy, mislabeled.  We have deliberately made no attempt to clean this up. The test data contains better labels, but it is not perfect either, and although it roughly correspond to the training data, it includes some deliberate differences.

__Should I submit your example code to test the submission system?__

No, please only submit your code to the submission system.

__Should I submit an empty repository to test the submission system?__

No, please only submit an entry after you have finished and tested your code.

__I left out a file, or I missed the deadline, or something else. Can I email you my code?__

No, please use the submission form to submit your entry through a repository.

__Do I need to upload your training data? What about the code for evaluating my algorithm?__

No, we have the training data, test data, and evaluation code.

__Do you run the code that was in my repository at the time of submission?__

No, not yet. If you change your code after submitting, then we may or may not run the updated version of your code. If you want to update your code but do not want us to run the updates (yet), then please make changes in a subdirectory or in another branch of your repository.

__Why is my entry unsuccessful on your submission system? It works on my computer.__

If you used Python for your entry, then test it in Docker.
    
__My entry had some kind of error. Did I lose one of my total entries?__

No, only scored entries (submitted entries that receive a score) count against the total number of allowed entries.

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
