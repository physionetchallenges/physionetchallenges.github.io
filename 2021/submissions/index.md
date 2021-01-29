---
layout: 2021
---

# <a name="submission-instructions-and-form"></a>Submission Instructions

## PhysioNet/CinC Challenge 2021: Cloud Submission Instructions

__These instructions will be updated for this year's Challenge. Check back soon!__

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

Check back soon!

### <a name="matlab"></a>MATLAB-specific instructions

Check back soon!

### <a name="python"></a>Python-specific instructions

Check back soon!

###  <a name="docker"></a> Docker-specific FAQs

__Why containers?__

Containers allow you to define the environment that you think is best suited for your algorithm. For example, if you think your algorithm needs a specific version of a Linux distribution or a certain version of a library or framework, then you can use the containers to specify the environment. Here are two links with data science-centric introductions to Docker:
[https://towardsdatascience.com/how-docker-can-help-you-become-a-more-effective-data-scientist-7fc048ef91d5](https://towardsdatascience.com/how-docker-can-help-you-become-a-more-effective-data-scientist-7fc048ef91d5)
[https://link.medium.com/G87RxYuQIV](https://link.medium.com/G87RxYuQIV)

__Quickly, how can I test my submission locally?__

Install Docker. Clone your repository. Build an image. Run it on a single recording.

<a name="commands"></a> __Less quickly, how can I test my submission locally?  Please give me commands that I can copy and paste.__

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

__How do I install Docker?__

Go to [https://docs.docker.com/install/](https://docs.docker.com/install/) and install the Docker Community Edition. For troubleshooting, see [https://docs.docker.com/config/daemon/](https://docs.docker.com/config/daemon/)

__Do I have to use your Dockerfile?__

No. The only part of the Dockerfile we care about are the three lines marked as ”DO NOT EDIT”. These three lines help ensure that, during the build process of the container, your code is copied into a folder called physionet so that our cloud-based pipelines can find your code and run it. Please do not change those three lines. You are free to change your base image, and at times you should (see the next question).

__What’s the base image in Docker?__

Think of Docker as a series of images, or snapshots of a virtual machine, that are layered on top of each other. For example, your image may built on top of a very lightweight Ubuntu operating system with Python 3.7.3 that we get from the official Docker Hub (think of it as a GitHub for Docker). We can then install our requirements (NumPy and SciPy) on it. If you need the latest version of TensorFlow, then search for it on [hub.docker.com](https://hub.docker.com/) and edit your file so that the first line of your Dockerfile now reads as: `FROM tensorflow`. For a specific version, say 1.11, lookup the [tags](https://hub.docker.com/r/tensorflow/tensorflow/tags) and change it accordingly to `FROM tensorflow:1.11.0`. We recommend using specific versions for reproducibility.

__sklearn or scikit-learn?__

The single most common error we noticed in the requirements.txt file for Python submissions was the sklearn package. If your entry uses scikit-learn, then you need to install via pip using the package name scikit-learn instead of sklearn in your requirements.txt file: [See here](https://scikit-learn.org/stable/install.html).

__xgboost?__

For Python, replace `python:3.7.3-slim` with `python:3.7.3-stretch` in the first line of your Dockerfile. This image includes additional packages, such as GCC, that xgboost needs. Additionally, include xgboost in your requirements.txt file.  Specify the version of xgboost that you are using in your requirements.txt file.
For R, add `RUN R -e 'install.packages(“xgboost”)'` to your Dockerfile.

__Pandas?__

Replace `python:3.7.3-slim` with `python:3.7.3-stretch` in the first line of your Dockerfile.

__Why can’t I install a common Python or R package using Python or R’s package manager?__

 Some packages have dependencies, such as GCC, that need to be installed.  Try replacing `python:3.7.3-slim` with `python:3.7.3-stretch`, which includes more packages by default, or installing the dependencies

If the first line of your Dockerfile is `FROM python:3.7.3-slim`, then you are building a Docker image with the Debian Linux distribution, so you can install GCC and other related libraries that many Python and R packages use by adding the line `RUN apt install build-essential` to your Dockerfile before installing these packages.

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

__What can I do to make sure that my submission is successful?__

You can avoid most submission errors with the following steps: 
   - Do not change the train_model or test_model scripts.  We will only use the versions of these scripts in the MATLAB and Python example repositories ([https://github.com/physionetchallenges](https://github.com/physionetchallenges), so any changes that you make will not be used.
   - Do build your Docker image.  The above FAQ provides advice for common Docker-related issues.
   - Do test your Docker code on at least one file from the training dataset.
   - Do try to reduce the run time of your code by moving code from the run_model function to the load_model function for repeated tasks.  Most submissions can run in a couple of hours on the test data.

__Why is my entry unsuccessful on your submission system? It works on my computer.__

There are several common reasons for unexpected errors:
   - You may have changed the driver script. For consistency across submissions from different participants, we will use the driver scripts available on [https://github.com/physionetchallenges/](https://github.com/physionetchallenges).
   - You may have unmet dependencies. Note that packages in the requirements.txt file for Python submissions may have dependencies, such as gcc, that pip is unable to install. You can often identify such issues by trying to build a Docker image from your Dockerfile.
   - You may have used a specific version of a Python package on your computer, but you didn’t specify the version of the package in your Dockerfile or your requirements.txt file, so we installed the latest available version of the package. These versions may be incompatible. For example, if you train your data using one version of a machine learning package and we test it with another version of the package, then your entry may fail.

---

Supported by the [National Institute of Biomedical Imaging and Bioengineering (NIBIB)](https://www.nibib.nih.gov/) under NIH grant R01EB030362.

[Back](../)
