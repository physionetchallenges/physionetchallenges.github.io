---
layout: after_2015
---

# Frequently Asked Questions (FAQ) for the 2024 Challenge

This page provides specific FAQs for the 2024 Challenge. Please read the [general Challenge FAQs](../../faq/) for more general questions about the Challenges.

[Rules](#rules)

- [I missed the abstract deadline. Can I still participate in the Challenge?](#missed-abstract-deadline)
- [Can I make the license open source but restrict commercial use?](#license)
- [Do I need to provide my training code?](#training-code)
- [Can I provide my training code but ask that you not use or run it?](#not-train)
- [Am I allowed to do transfer learning using pre-trained networks?](#transfer-learning)

[Data](#data)

- [Are the training data representative of the validation and test data?](#hold-out)
- [Why are the training, validation, and test data drawn from slightly different populations?](#more-hold-out)
- [Do I need to upload your training data? What about the code for evaluating my algorithm?](#upload-data)

[Scoring](#scoring)

- [What did you choose the Challenge metric? I think it is flawed or could be improved.](#metric)
- [Are the scores currently on the leaderboard the final scores for the Challenge?](#leaderboard)
- [How do I choose which my submission for evaluation on the test data?](#choose-model)

[Computation](#computation)

- [What computational resources do you provide for our code?](#resources)
- [Will our entry have network access? What if we need to download something?](#network-access)
- [Can I save something to the container's filesystem during training and access it during inference?](#persistent-filesystem)
- [If my submission times out, can you restore the state of the container and continue from there?](#timeout-behavior)
- [Is there write access to the data folder?](#write-to-data-folder)
- [What are the requirements for the Docker container?](#docker-requirements)

[Submissions](#submissions)

- [Should I submit your example code to test the submission system?](#test-submission)
- [Should I submit an empty repository to test the submission system?](#empty)
- [I left out a file, missed the deadline, or something else. Can I email you my code?](#email-code) 
- [Can I change the folder name for the pretrained model?](#model-folder-name)
- [Do you run the code that was in my repository at the time of submission?](#repository)
- [Why is my entry unsuccessful on your submission system? It works on my computer.](#unsuccessful-entry)
- [My entry had some kind of error. Did I lose one of my total entries?](#error-lose-entry)
- [I did not submit a successful entry during the unofficial phase. Can I submit entries during the official phase?](#missed-unofficial)

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

<a name="more-hold-out"></a>__Why are the training, validation, and test data drawn from slightly different populations?__

This is deliberate - it reflects the real world. Your algorithms will be used on humans in the future, and they will look different to humans now. One major challenge is to create an algorithm that generalizes to new data. We check this by evaluating the algorithms on held-out data with somewhat different populations. You can also do this by sourcing more of your own data, or building in physiological and clinical knowledge.  

<a name="upload-data"></a>__Do I need to upload your training data? What about the code for evaluating my algorithm?__

No, we have the training, validation, and test data as well as the evaluation code.

## <a name="scoring"></a> Scoring

<a name="metric"></a>__What did you choose the Challenge metric? I think it is flawed or could be improved.__

The Challenge organizers are always looking for feedback from the teams/public, particularly during the first phase of the Challenge from January to April. After that period, we update the Challenge rules to address the public commentary. The metrics are never perfect, but we do try to create meaningful metrics that are relevant to healthcare, which is why we rarely use the usual information retrieval metrics. We often attempt to build in the clinical response, the medical resources available, and the relative (health and financial) costs of false vs. true positives and negatives. In general, the top 5-10 teams are often comparable. We believe the discussion that we generate around the problem, the heterogeneity of approaches, and the optimization of domain-aware metrics is more important than any single winner.

<a name="leaderboard"></a>__Are the scores currently on the leaderboard the final scores for the Challenge?__

No, the leaderboard contains scores on the validation data during the unofficial and official phases of the Challenge. The final scores on the test data will be released after the conference for the preferred model selected by each team.

<a name="choose-model"></a>__How do I choose which my submission for evaluation on the test data?__

You will be able to choose which model you would like to have scored on the test set. We will ask for teams to choose their preferred model shortly before the end of the official phase of the Challenge. If you do not choose a model, or if there is any ambiguity about your choice, then we will use the model with the highest score on the validation data.

## <a name="computation"></a> Computation

<a name="resources"></a>__What computational resources do you provide for our code?__

We are using a [`g4dn.4xlarge` instance](https://aws.amazon.com/ec2/instance-types/g4/) on AWS to run your code. It has 16 vCPUs, 64 GB RAM (60 GB available to your code), 300 GB of local storage (in addition to the data), and an optional [NVIDIA T4 GPU](https://www.nvidia.com/en-us/data-center/tesla-t4/).

For training your model on the training data, we impose a 48 hour time limit for submissions that request a GPU and a 72 hour time limit for submissions that do not request a GPU. For running your trained model on the validation or test data, we impose a 24 hour time limit whether or not a submission requests a GPU.

<a name="network-access"></a>__Will our entry have network access? What if we need to download something?__

No, the execution environment has no network access. However, there is network access
while we are building your Docker image. If you need to download something,
you can put a download command in the Dockerfile.

<a name="persistent-filesystem"></a>__Can I save something to the container's filesystem during training and access it during inference?__

No, the filesystem is not persistent between stages. You can write to the container's filesystem
temporarily, but those changes will be lost when we finish running the container.
If you want to save something during training, it can go in the model folder that gets
passed as an argument to the `train_model` script.

<a name="timeout-behavior"></a>__If my submission times out, can you restore the state of the container and continue from there?__

No, if we restart it we will have to run your code from the beginning.

<a name="write-to-data-folder"></a>__Is there write access to the data folder?__

No, data is always read-only. If you want to make changes to the data,
you will have to make a copy and edit the copy.

<a name="docker-requirements"></a>__What are the requirements for the Docker container?__

Please make sure the Docker container meets these requirements:

- The container should only have one user (root).
- The main working directory (`WORKDIR`) should be `/challenge`.
- All downloads (not including libraries and packages, but including
  cached models) should go under the `/challenge` folder.

## <a name="submissions"></a> Submissions

<a name="test-submission"></a>__Should I submit your example code to test the submission system?__

No, please only submit your code to the submission system.

<a name="empty"></a>__Should I submit an empty repository to test the submission system?__

No, please only submit an entry after you have finished and tested your code.

<a name="email-code"></a>__I left out a file, or I missed the deadline, or something else. Can I email you my code?__

No, please use the submission form to submit your entry through a repository.

<a name="model-folder-name"></a>__Can I change the folder name for the pretrained model?__

No, please leave it as `model`. Our system will always look there for a model.

<a name="repository"></a>__Do you run the code that was in my repository at the time of submission?__

Yes, we pull the latest version of the code that was in the repository before the time of submission.

<a name="unsuccessful-entry"></a>__Why is my entry unsuccessful on your submission system? It works on my computer.__

If you used Python for your entry, then please test it in Docker. See the submissions page for details.

<a name="error-lose-entry"></a>__My entry had some kind of error. Did I lose one of my total entries?__

No, only scored entries (submitted entries that receive a score) count against the total number of allowed entries.

<a name="missed-unofficial"></a>__I did not submit a successful entry during the unofficial phase. Can I submit entries during the official phase?__

We require teams to have a successful unofficial phase entry for eligibility for rankings and prizes at the end of the Challenge. We impose this requirement because our observations and your feedback during the unofficial phase help us to improve the Challenge for the official phase. However, we also know that some teams miss the unofficial phase for various reasons, and we still want them to be able to participate in the Challenge. Therefore, we reserve a small number of [wild card](../#wild-card) entries for teams that did not submit a successful entry during the unofficial phase and/or did not have an accepted abstract to CinC. We encourage teams these teams to participate in the official phase, and we will invite a small number of teams with [wild card](../#wild-card) entries to be eligible for rankings and prizes.

__For more general Challenge FAQs, please visit [here](../../faq/).__
