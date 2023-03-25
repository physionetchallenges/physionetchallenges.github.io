---
layout: 2023
---

# Frequently Asked Questions (FAQ) for the 2023 Challenge

This page provides specific FAQs for the 2023 Challenge. Please read the [general Challenge FAQs](../../faq/) for more general questions about the Challenges.

[Rules](#rules)

- [I missed the abstract deadline. Can I still participate in the Challenge?](#missed-abstract-deadline)
- [Can I make the license open source but restrict commercial use?](#license)
- [Do I need to provide my training code?](#training-code)
- [Can I provide my training code but request that you not use/run it?](#not-train)
- [Am I allowed to do transfer learning using pre-trained networks?](#transfer-learning)

[Data](#data)

- [Are the training data representative of the validation and test data?](#hold-out)
- [Do I need to upload your training data? What about the code for evaluating my algorithm?](#upload-data)

[Scoring](#scoring)

- [Are the scores currently on the leaderboard the final scores for the Challenge?](#leaderboard)
- [How do I choose which my submission for evaluation on the test data?](#choose-model)

[Computation](#computation)

- [What computational resource do you provide for our code?](#resources)

[Submissions](#submissions)

- [Should I submit your example code to test the submission system?](#test-submission)
- [Should I submit an empty repository to test the submission system?](#empty)
- [I left out a file, missed the deadline, or something else. Can I email you my code?](#email-code) 
- [Do you run the code that was in my repository at the time of submission?](#repository)
- [Why is my entry unsuccessful on your submission system? It works on my computer.](#unsuccessful-entry)
- [My entry had some kind of error. Did I lose one of my total entries?](#error-lose-entry)

## <a name="rules"></a> Rules

<a name="missed-abstract-deadline"></a> __I missed the abstract deadline. Can I still participate in the Challenge?__

Yes, you can still participate. An accepted CinC abstract is required for prizes, rankings, and the opportunity to present your work at CinC, but you can still submit algorithms to the official phase without an accepted abstract.

A 'wildcard' entry is reserved for a high-scoring team who submitted an abstract that was not accepted or who were unable to submit an abstract by the deadline. Please read [here](../#wild-card) for more details, including the deadline.

<a name="license"></a>__Can I make the license open source but restrict commercial use?__

Yes, the philosophy of the Challenge is to encourage researchers to make their code free to use for research. We hope that companies will approach you to license the code, too! If you do not specify any license, then we will assume that the license is the BSD 3-Clause License.

<a name="training-code"></a>__Do we need to provide our training code?__

Yes, this is a required (and exciting) part of this year's Challenge.

<a name="not-train"></a>__Can I provide my training code but request that you not use/run it?__

No, the training code is an important part of this year's Challenge.

<a name="transfer-learning"></a>__Am I allowed to do transfer learning using pre-trained networks?__

Yes, most certainly. We encourage you to do this. You do not need to include your data in the code stack for training the algorithm, but you do need to include the pre-trained model in the code and provide code to retrain (continue training) on the training data we provide. You must also thoroughly document the content of the database you used to pre-train. You cannot use transfer learning to avoid training your model.

## <a name="data"></a> Data

<a name="hold-out"></a>__Are the training data representative of the validation and test data?__

Yes, to a degree, but the validation and test sets do not have all of the information included in the training data, specifically the labels!

<a name="upload-data"></a>__Do I need to upload your training data? What about the code for evaluating my algorithm?__

No, we have the training, validation, and test data as well as the evaluation code.

## <a name="scoring"></a> Scoring

<a name="leaderboard"></a>__Are the scores currently on the leaderboard the final scores for the Challenge?__

No, the leaderboard contains scores on the validation data during the unofficial and official phases of the Challenge. The final scores on the test data will be released after the conference for the preferred model selected by each team.

<a name="choose-model"></a>__How do I choose which my submission for evaluation on the test data?__

You will be able to choose which model you would like to have scored on the test set. We will ask for teams to choose their preferred model shortly before the end of the official phase of the Challenge. If you do not choose a model, or if there is any ambiguity about your choice, then we will use the model with the highest score on the validation data.

## <a name="computation"></a> Computation

<a name="resources"></a>__What computational resources do you provide for our code?__

We are using a [`g4ad.4xlarge` instance](https://aws.amazon.com/ec2/instance-types/g4/) on AWS to run your code. It has 16 vCPUs, 64 GB RAM, 300 GB of local storage, and an optional AMD Radeon Pro V520 GPU.

For training your model on the training data, we impose a 48 hour time limit for submissions that request a GPU and a 72 hour time limit for submissions that do not request a GPU. For running your trained model on the validation or test data, we impose a 24 hour time limit whether or not a submission requests a GPU.

## <a name="submissions"></a> Submissions

<a name="test-submission"></a>__Should I submit your example code to test the submission system?__

No, please only submit your code to the submission system.

<a name="empty"></a>__Should I submit an empty repository to test the submission system?__

No, please only submit an entry after you have finished and tested your code.

<a name="email-code"></a>__I left out a file, or I missed the deadline, or something else. Can I email you my code?__

No, please use the submission form to submit your entry through a repository.

<a name="repository"></a>__Do you run the code that was in my repository at the time of submission?__

No, not yet. If you change your code after submitting, then we may or may not run the updated version of your code. If you want to update your code but do not want us to run the updates (yet), then please make changes in a subdirectory or in another branch of your repository.

<a name="unsuccessful-entry"></a>__Why is my entry unsuccessful on your submission system? It works on my computer.__

If you used Python for your entry, then please test it in Docker. See the submissions page for details.
 
<a name="error-lose-entry"></a>__My entry had some kind of error. Did I lose one of my total entries?__

No, only scored entries (submitted entries that receive a score) count against the total number of allowed entries.

__For more general Challenge FAQs, please visit [here](../../faq/).__
