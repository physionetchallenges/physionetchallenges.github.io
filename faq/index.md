---
layout: default
---

# Frequently Asked Questions (FAQ) - General

This page provides general information and FAQs of the PhysioNet Challenges.

Please see [Current Challenge FAQs](https://physionetchallenges.org/2021/faq/) for more specific information of the current PhysioNet Challenge.


[Challenge History](#challenge-history)

- [What is the history of these challenges? ](#history)
- [Data](#data)
- [I want to evaluate my code on the test data - can you provide either the test data or test labels for the current Challenge or a previous Challenge please?](#test-data) 
- [Are we allowed to use external public or private data, and/or to leverage transfer learning using pre-trained networks?](#external-data)

[Scoring](#score)

- [I missed the Challenge/Journal Focus Issue, but I still want to run my code on the test data to be able to compare with the Challenge algorithms. If you aren't providing test data or labels, can you run my code for me?](#run-code)
- [Can you score my algorithm for one of the previous Challenges?](#previous-scoring)

[Contribution](#contribution)

- [I would like to suggest/help organize/contribute software or data to a Challenge - how can I do this?](#software-data)


## <a name="challenge-history"></a> Challenge History

<a name="history"></a> __What is the history of these challenges?__

To find the information about the history of the Challenges, please see [here](https://physionetchallenges.org/about/). 

## <a name="data"></a> Data

<a name="test-data"></a> __I want to evaluate my code on the test data - can you provide either the test data or test labels for the current Challenge or a previous Challenge please?__

No - we prohibit access to both the test data and the test labels to prevent significant information leakage from the out-of-sample test data to the training process. This is true for both current and past Challenges. Having access to the test labels provides the researcher too much of an opportunity to look at the test data and perform multiple re-tests. These re-tests constitute an outer training loop that lead to overfitting and an overly-optimistic value for the performance metric. Access to the test data (even without labels), provides the opportunity to employ techniques to extract information about the test data that are not representative of the 'future' use of an algorithm. These include extracting population statistics (mean, distributions), unsupervised clustering, and even hand-labelling of the data. 
Reducing information leakage from test to training is also the reason why you will only be allowed one shot at the full test data (or perhaps two, if you publish in the follow-up journal focus issue). We understand that providing teams up to 15 entries on a subset of the test data causes a small leak, but whenever possible we keep one database separate until the final run. One final reason for not sharing the test data and labels publicly is that we sometimes use data from previous Challenges in future Challenges.

Moreover, we try to source diverse datasets for the Challenges, and we often use datasets in the Challenges that we are unable release as test data.

<a name="external-data"></a> __Are we allowed to use external public or private data, and/or to leverage transfer learning using pre-trained networks?__

Yes, most certainly. We encourage you to do this. You do not need to include your data in the code stack for training the algorithm, but you do need to include the pre-trained model in the code and provide code to retrain (continue training) on the training data we provide. The pre-trained network must have a compatible license to the rest of your code. You must also thoroughly document the content of the database you used to pre-train your network. If you are able to provide access to the data, or it is already public, please include links in both your README, and the article documenting your entry. If you would like to contribute data to the Challenge for others to use (or as test data), please contact us directly. We'd be delighted to add you to the team/authorship of the resulting articles if the data adds value.

## <a name="score"></a> Scoring

<a name="run-code"></a> __I missed the Challenge/Journal Focus Issue, but I still want to run my code on the test data to be able to compare with the Challenge algorithms. If you aren't providing test data or labels, can you run my code for me?__

Yes - under certain conditions. First, check with us that we are able to resource your request. We are really busy and have more work that we are funded to do. If you are able to provide any donations to the resource to fund an engineer's time, your request will be prioritized. Second, you must provide a 90% complete draft of the article you are writing to describe the method, pointing out where it differs from other known approaches, particularly in the Challenge. We prioritize novelty. We won't judge your training and validation statistics too heavily, since we are more interested in adding to the discussion around methods, rather than adding a few percent to the top score. We also prioritize open source approaches, although if you do wish to keep your method secret, we may be able to offer a sponsorship plan. Finally, you need to package the code exactly as in the Challenges, and ensure it works in the containerized environment provided (not just on your personal computer or an arbitrarily configured cluster). Please note that bugs in the code will increase the likelihood that you do not receive a score, as we cannot invest large amounts of time into providing a single group with support.

<a name="previous-scoring"></a> __Can you score my algorithm for one of the previous Challenges?__

Yes, we are happy to support ongoing research with past Challenges subject to available resources (the Challenges are largely run by volunteers) and whether you are able to do the following:

1. You must share your code in a GitHub or Gitlab repository.
2. You must include your code, including your training code and forward model.
3. You must include an open-source LICENSE file, an AUTHORS file, and a README file that describes the results on the training set.
4. You must include a detailed draft article describing your method, including the results on the training set (matching the results in your README), with the target journal for your submission.
5. Your article must describe how your technique differs from all other methods from the Challenge and the subsequent focus issue, especially any previous methods that you may have developed.
6. You must include a statement that no one from your team will attempt to submit another entry. Each team receives at most one follow-up shot at the data.
7. We must be able to run your code. For recent Challenges, we expect you to follow the submission instructions and format your submission in the same way.

If you agree to the above conditions, then please contact us at challenge@physionet.org to submit your entry. Even so, we cannot guarantee that we will be able to run your code.

##  <a name="contribution"></a> Contribution

 <a name="software-data"></a> __I would like to suggest/help organize/contribute software or data to a Challenge - how can I do this?__

If you are interested in contributing to, or posing a Challenge, please feel free to contact us with details of the databases you can provide, the nature of the problem you wish to solve, and some demo code which makes a basic attempt to solve the problem. We strongly recommend having at least three independent databases, two to become public, and one to remain private/hidden. For more information on the general aims and framework of the Challenge, and the criteria for a successful event, please see [here](https://arxiv.org/abs/2007.10502).

__For Current Challenge FAQs, please visit [here](https://physionetchallenges.org/2021/faq/).__

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../index.html)
