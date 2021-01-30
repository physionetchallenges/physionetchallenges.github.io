---
layout: 2021
---

# <a name="submission-instructions-and-form"></a>Submission Instructions

## PhysioNet/CinC Challenge 2021: Cloud Submission Instructions

### Table of contents

- [Introduction](#introduction)
- [Preparation and submission instructions](#preparation)
- [MATLAB-specific instructions](#matlab)
- [Python-specific instructions](#python)
- [Docker-specific FAQs](#docker)
- [FAQ](#faq) 

### <a name="introduction"></a>Introduction

Much like for [last year's Challenge](../../2020/), teams must submit both the code for their models and the code for training their models. To help, we implemented example entries in both MATLAB and Python, and we encourage teams to use these example entries as templates for their entries.

### <a name="preparation"></a>Preparation and submission instructions

1. Create a private GitHub or Gitlab repository for your code. We recommend cloning our example code and replacing it with your code. Add `physionetchallengeshelper` as a collaborator to your repository.
2. Add your classification code to your repository. Like the example code, your code must be in the root directory of the master branch.
3. Do not include extra files that are not required to create and run your classification code.
4. Follow the instructions for the programming language of your submission.
5. Use Google Forms to submit your entry. We will clone your repository using the HTTPS URL that ends in `.git`. On GitHub, you can get this URL by clicking on “Clone or download” and copying and pasting the URL, e.g., `https://github.com/physionetchallenges/python-classifier-2021.git`. Please see [here](https://help.github.com/en/articles/which-remote-url-should-i-use) for an example.
6. We will put the scores for successful entries on the leaderboard.  The leaderboard will publicly show your team name, run time, and score.

### <a name="matlab"></a>MATLAB-specific instructions

1. Confirm that your MATLAB code compiles and runs in MATLAB 2019b, MATLAB 2020a or MATLAB 2020b.
2. Using our sample MATLAB classification code ([link](https://github.com/physionetchallenges/matlab-classifier-2021.git)) as a template, format your code in the following way. Consider downloading this repository, replacing our code with your code, and adding the updated files to your repository.
3. AUTHORS.txt, LICENSE.txt, README.md: Update as needed. Unfortunately, our submission system will be unable to read your README.
4. `train_model.m`: Do not edit this script. It calls your `team_training_code.m` script. We will not use the `train_model.m` script from your repository, so any change made to this code will not be included.
5. `team_training_code.m`: Update this script to create and save your model. It takes the header with the data and demographics information, extrat features from data using `get_features.m` function which you can update and edit, and outputs and saves your model (weights and any needed parameters). You can edit this script and `get_features.m` function as much as you need.
6. `test_model.m`: Do not change this script. It loads your models by calling `load_ECG_*leads_model` functions (`*=2,3,6 or 12` for four different lead sets; 2-leads, 3-leads, 6-leads and 12-leads models). Then, it calls your `team_testing_code` function for each recording and performs on all file input and output. We will not use the `test_model.m` script from your repository, so any change made to this code will not be included.
7. `team_testing_code.m`: Update this script to load and run your model weights and any parameters from files in your submission. It takes the input test data, header files and the loaded models (outputs of your `train_model.m`) and returns a probability or confidence score and a binary classification for each class as output. 
8. `get_features.m`: Update this scripts to extract your choice of features from the ECG recordings.
9. `get_leads.m`: Do not edit this script. It extracts 4 different lead sets (2-leads, 3-leads, 6-leads and 12-leads) of ECG recordings.
10. `extract_data_from_header.m`: Do not edit this script. It extracts the data information from the header files.
11. Add your code to the root/base directory of the master branch of your repository.
12. We will download your code, compile it using the MATLAB compiler: training (`mcc -m train_model.m -a .`) and running (`mcc -m test_model.m -a .`) your classifier, and run them on Google Cloud.
13. Here is a sample repository that you can use as a template: [MATLAB classifier](https://github.com/physionetchallenges/matlab-classifier-2021).

### <a name="python"></a>Python-specific instructions
1. Using our sample Python classification code ([link](https://github.com/physionetchallenges/python-classifier-2021)) as a template, format your code in the following way. Consider downloading this repository, replacing our code with your code, and adding the updated files to your repository.
2. Dockerfile: Update to specify the version of Python that you are using on your machine. Add any additional packages that you need. Do not change the name or location of this file. The structure of this file is important, especially the 3 lines that are marked as Do Not Delete.
3. requirements.txt: Add Python packages to be installed with pip. Specify the versions of these packages that you are using on your machine. Remove unnecessary packages, such as Matplotlib, that your classification code does not need.
4. `AUTHORS.txt`, `LICENSE.txt`, `README.md`: Update as needed. Unfortunately, our submission system will be unable to read your README.
5. `team_code.py`: Update this script to load and run your trained model.  
6. `train_model.py`: Do not change this script. It calls the `team_code`, your training code to run on the training data.
7. `helper_code.py` Do not change this script. It is a script with helper variables and functions used for our code. You are welcome to use them in your code.
8. `test_model.py`: Do not change this script. It calls your trained models to run on the test data. We will not use the `test_model.py` script from your repository, so any change made to this code will not be included.
9. Add your code to the root/base directory of the master branch of your repository.
10. We will download your code, build a Docker container from your Dockerfile, and run it on Google Cloud.
11. Here is a sample repository that you can use as a template: [Python classifier](https://github.com/physionetchallenges/python-classifier-2021).

###  <a name="docker"></a> Docker-specific FAQs

__Why containers?__

Containers allow you to define the environment that you think is best suited for your algorithm. For example, if you think your algorithm needs a specific version of a Linux distribution or a certain version of a library or framework, then you can use the containers to specify the environment. Here are two links with data science-centric introductions to Docker:
[https://towardsdatascience.com/how-docker-can-help-you-become-a-more-effective-data-scientist-7fc048ef91d5](https://towardsdatascience.com/how-docker-can-help-you-become-a-more-effective-data-scientist-7fc048ef91d5)
[https://link.medium.com/G87RxYuQIV](https://link.medium.com/G87RxYuQIV)

__Quickly, how can I test my submission locally?__

Install Docker. Clone your repository. Build an image. Run it on a single recording.

<a name="commands"></a> __Less quickly, how can I test my submission locally?  Please give me commands that I can copy and paste.__

To guarantee that we can run your code, please [install](https://docs.docker.com/get-docker/) Docker, build a Docker image from your code, and run it on the training data. To quickly check your code for bugs, you may want to run it on a subset of the training data.

If you have trouble running your code, then please try the follow steps to run the example code, which is known to work.

1. Create a folder `example` in your home directory with several subfolders.

        user@computer:~$ cd ~/
        user@computer:~$ mkdir example
        user@computer:~$ cd example
        user@computer:~/example$ mkdir training_data test_data model test_outputs

2. Download the training data from the [Challenge website](https://physionetchallenges.org/2021/#data-access). Put some of the training data in `training_data` and `test_data`. You can use some of the training data to check your code (and should perform cross-validation on the training data to evaluate your algorithm).

3. Download or clone this repository in your terminal.

        user@computer:~/example$ git clone https://github.com/physionetchallenges/python-classifier-2021.git

4. Build a Docker image and run the example code in your terminal.

        user@computer:~/example$ ls
        model  python-classifier-2021  test_data  test_outputs  training_data

        user@computer:~/example$ ls training_data/
        A0001.hea  A0001.mat  A0002.hea  A0002.mat  A0003.hea  ...

        user@computer:~/example$ cd python-classifier-2021/

        user@computer:~/example/python-classifier-2021$ docker build -t image .

        Sending build context to Docker daemon  30.21kB
        [...]
        Successfully tagged image:latest

        user@computer:~/example/python-classifier-2021$ docker run -it -v ~/example/model:/physionet/model -v ~/example/test_data:/physionet/test_data -v ~/example/test_outputs:/physionet/test_outputs -v ~/example/training_data:/physionet/training_data image bash

        root@[...]:/physionet# ls
            Dockerfile             model             test_data      train_model.py
            extract_leads_wfdb.py  README.md         test_model.py
            helper_code.py         requirements.txt  test_outputs
            LICENSE                team_code.py      training_data

        root@[...]:/physionet# python train_model.py training_data model

        root@[...]:/physionet# python test_model.py model test_data test_outputs

        root@[...]:/physionet# exit
        Exit

        user@computer:~/example/python-classifier-2021$ cd ..

        user@computer:~/example$ ls test_outputs/
        A0006.csv  A0007.csv  A0008.csv  A0009.csv  A0010.csv  ...

### <a name="faq"></a>FAQ

__How do I install Docker?__

Go to [https://docs.docker.com/install/](https://docs.docker.com/install/) and install the Docker Community Edition. For troubleshooting, see [https://docs.docker.com/config/daemon/](https://docs.docker.com/config/daemon/)

__Do I have to use your Dockerfile?__

No. The only part of the Dockerfile we care about are the three lines marked as ”DO NOT EDIT”. These three lines help ensure that, during the build process of the container, your code is copied into a folder called physionet so that our cloud-based pipelines can find your code and run it. Please do not change those three lines. You are free to change your base image, and at times you should (see the next question).

__What’s the base image in Docker?__

Think of Docker as a series of images, or snapshots of a virtual machine, that are layered on top of each other. For example, your image may built on top of a very lightweight Ubuntu operating system with Python 3.8.6 that we get from the official Docker Hub (think of it as a GitHub for Docker). We can then install our requirements (NumPy and SciPy) on it. If you need the latest version of TensorFlow, then search for it on [hub.docker.com](https://hub.docker.com/) and edit your file so that the first line of your Dockerfile now reads as: `FROM tensorflow`. For a specific version, say 1.11, lookup the [tags](https://hub.docker.com/r/tensorflow/tensorflow/tags) and change it accordingly to `FROM tensorflow:1.11.0`. We recommend using specific versions for reproducibility.

__sklearn or scikit-learn?__

The single most common error we noticed in the requirements.txt file for Python submissions was the sklearn package. If your entry uses scikit-learn, then you need to install via pip using the package name scikit-learn instead of sklearn in your requirements.txt file: [See here](https://scikit-learn.org/stable/install.html).

__xgboost?__

For Python, replace `python:3.8.6-slim` with `python:3.8.6-stretch` in the first line of your Dockerfile. This image includes additional packages, such as GCC, that xgboost needs. Additionally, include xgboost in your requirements.txt file.  Specify the version of xgboost that you are using in your requirements.txt file.
For R, add `RUN R -e 'install.packages(“xgboost”)'` to your Dockerfile.

__Pandas?__

Replace `python:3.8.6-slim` with `python:3.8.6-stretch` in the first line of your Dockerfile.

__Why can’t I install a common Python or R package using Python or R’s package manager?__

 Some packages have dependencies, such as GCC, that need to be installed.  Try replacing `python:3.8.6-slim` with `python:3.8.6-stretch`, which includes more packages by default, or installing the dependencies

If the first line of your Dockerfile is `FROM python:3.8.6-slim`, then you are building a Docker image with the Debian Linux distribution, so you can install GCC and other related libraries that many Python and R packages use by adding the line `RUN apt install build-essential` to your Dockerfile before installing these packages.

__How do I build my image?__

```
git clone <<your repository URL that ends in .git>>
cd <<your repository name>>
ls
```

You should see a Dockerfile and other relevant files here.
  
```
docker build -t <<some image name that must be in lowercase letters>> .
docker images
docker run -it <<image name from above>> bash
```

This will take you into your container and you should see your code.

Please see [Docker-specific FAQs](#docker) for more information and description.


__What can I do to make sure that my submission is successful?__

You can avoid most submission errors with the following steps: 
   - Do not change the train_model or test_model scripts.  We will only use the versions of these scripts in the MATLAB and Python example repositories ([https://github.com/physionetchallenges](https://github.com/physionetchallenges)), so any changes that you make will not be used.
   - Do build your Docker image.  The above FAQ provides advice for common Docker-related issues.
   - Do test your Docker code on at least one file from the training dataset.
   - Do try to reduce the run time of your code by moving code from the run_model function to the load_model function for repeated tasks.  Most submissions can run in a couple of hours on the test data.

__Why is my entry unsuccessful on your submission system? It works on my computer.__

There are several common reasons for unexpected errors:
   - You may have changed the driver script. For consistency across submissions from different participants, we will use the driver scripts available on [https://github.com/physionetchallenges/](https://github.com/physionetchallenges).
   - You may have unmet dependencies. Note that packages in the requirements.txt file for Python submissions may have dependencies, such as gcc, that pip is unable to install. You can often identify such issues by trying to build a Docker image from your Dockerfile.
   - You may have used a specific version of a Python package on your computer, but you didn’t specify the version of the package in your Dockerfile or your requirements.txt file, so we installed the latest available version of the package. These versions may be incompatible. For example, if you train your data using one version of a machine learning package and we test it with another version of the package, then your entry may fail.

## How do I learn more?

Please see the [PhysioNet/CinC Challenge 2021 webpage](https://physionetchallenges.org/2021/) for more details. Please post questions and concerns on the [Challenge discussion forum](https://groups.google.com/forum/#!forum/physionet-challenges).

## Useful links

* [The PhysioNet/CinC Challenge 2021 webpage](https://physionetchallenges.org/2021/)
* [MATLAB example code for the PhysioNet/CinC Challenge 2021](https://github.com/physionetchallenges/matlab-classifier-2021)
* [Evaluation code for the PhysioNet/CinC Challenge 2021](https://github.com/physionetchallenges/evaluation-2021)
* [Frequently Asked Questions (FAQ)](https://physionetchallenges.org/faq/)

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
