---
layout: after_2015
---

# <a name="submission-instructions-and-form"></a> Submission instructions for the 2024 Challenge

### Table of contents

- [Introduction](#introduction)
- [Preparation and submission instructions](#preparation)
- [MATLAB-specific instructions](#matlab)
- [Python-specific instructions](#python)
- [Docker-specific FAQs](#docker)
- [FAQ](#faq)

### <a name="introduction"></a>Introduction

Similarly to [last year's Challenge](../../2023/), teams must submit both the code for training their models and for running their trained models. To help, we have implemented example entries in both MATLAB and Python. We encourage teams to use these examples as templates for their code.

### <a name="preparation"></a>Preparation and submission instructions

1. Create a private GitHub or GitLab repository for your code. We recommend cloning our example code and replacing it with your code.
2. Add your code to your repository. Like the example code, your code must be in the root directory of the main or master branch.
3. Do not include extra files that are not required to create and run your prediction code, such as the training data.
4. Follow the instructions for the programming language of your submission.
5. Share your repository with the `physionetchallengeshelper` user.
6. Submit your entry using this form (not yet available).
7. We will put the scores for successful entries on the validation set on the leaderboard.  The leaderboard will publicly show your team name and scores.

### <a name="matlab"></a>MATLAB-specific instructions

1. You can use our MATLAB example code ([link](https://github.com/physionetchallenges/matlab-example-2024.git)) as a template. Consider cloning or downloading this repository, replacing our code with your code, and adding the updated files to your repository.
2. `AUTHORS.txt`, `LICENSE.txt`, `README.md`: Update as appropriate. Please include your authors. Unfortunately, our submission system will be unable to read your README file to change how we run your code.
3. `train_model.m`: Do not change this script. It calls your `team_training_code.m` script. We will not use the `train_model.m` script from your repository, so any change made to this code will not be included.
4. `team_training_code.m`: Update this script to create and save your model.
5. `run_model.m`: Do not change this script. It loads your model by calling `load_model` and runs your model by calling your `team_testing_code` function for each patient ID. We will not use the `run_model.m` script from your repository, so any change made to this code will not be included.
6. `team_testing_code.m`: Update this script to load and run your model weights and any parameters from files in your submission.
7. Confirm that your code compiles and runs in MATLAB R2023b or R2024a (when available).
8. Push or upload your code to the root/base directory of the master branch of your repository.
9. We will download your code, compile it using the MATLAB compiler (`mcc -m train_model.m -a .` and `mcc -m run_model.m -a .`), and run it on our machines or Google Cloud.

### <a name="python"></a>Python-specific instructions

1. You can use our Python example code ([link](https://github.com/physionetchallenges/python-example-2024.git)) as a template. Consider cloning or downloading this repository, replacing our code with your code, and adding the updated files to your repository.
2. `Dockerfile`: Update to specify the version of Python that you are using on your machine. Add any additional packages that you need. Do not change the name or location of this file. The structure of this file is important, especially the 3 lines that are marked as "DO NOT EDIT".
3. `requirements.txt`: Add Python packages to be installed with `pip`. Specify the versions of these packages that you are using on your machine. Remove unnecessary packages that your code does not need.
4. `AUTHORS.txt`, `LICENSE.txt`, `README.md`: Update as appropriate. Please include your authors. Unfortunately, our submission system will be unable to read your README file to change how we run your code.
5. `team_code.py`: Update this script to load and run your trained model(s).  
6. `train_model.py`: Do not change this script. It calls functions from the `team_code.py` script to train your model on the training data.
7. `helper_code.py` Do not change this script. It is a script with helper functions for our code. You are welcome to use them in your code. We will not use the `helper_code.py` script from your repository, so any change made to this code will not be included.
8. `run_model.py`: Do not change this script. It calls your functions from the `team_code.py` script to load and run your trained models to run on the test data. We will not use the `run_model.py` script from your repository, so any change made to this code will not be included.
9. You can develop your code without Docker, but confirm that you can build a Docker image from your Dockerfile and run your code in Docker.
10. Push or upload your code to the root/base directory of the master branch of your repository.
11. We will download your code, build a Docker image from your Dockerfile, and run it on on our machines or Google Cloud.

### <a name="docker"></a> Docker-specific FAQs

__Why containers?__

Containers allow you to define the environment that you think is best suited for your algorithm. You can choose a specific version of a Linux distribution, install dependancies, and choose specific versions of your favorite libraries and frameworks. Here are [two](https://towardsdatascience.com/how-docker-can-help-you-become-a-more-effective-data-scientist-7fc048ef91d5) [links](https://link.medium.com/G87RxYuQIV) with data science-centric introductions to Docker.

__Quickly, how can I test my submission locally?__

Install Docker. Clone your repository. Build an image. Run it on the data, or at least a small subset of the data.

<a name="commands"></a> __Less quickly, how can I test my submission locally?  Please give me commands that I can copy and paste.__

To guarantee that we can run your code, please [install](https://docs.docker.com/get-docker/) Docker, build a Docker image from your code, and run it on the training data. To quickly check your code for bugs, you may want to run it on a subset of the training data.

If you have trouble running your code, then please try the follow steps to run the example code.

1. Create a folder `example` in your home directory with several subfolders.

        user@computer:~$ cd ~/
        user@computer:~$ mkdir example
        user@computer:~$ cd example
        user@computer:~/example$ mkdir training_data test_data model test_outputs

2. Download the training data from the [Challenge website](../). Put some of the training data in `training_data` and `test_data`. You can use some of the training data to check your code (and should perform cross-validation on the training data to evaluate your algorithm).

3. Download or clone this repository in your terminal.

        user@computer:~/example$ git clone https://github.com/physionetchallenges/python-example-2024.git

4. Build a Docker image and run the example code in your terminal.

        user@computer:~/example$ ls
        model  python-example-2024  test_data  test_outputs  training_data

        user@computer:~/example$ cd python-example-2024/

        user@computer:~/example/python-example-2024$ docker build -t image .

        Sending build context to Docker daemon  [...]kB
        [...]
        Successfully tagged image:latest

        user@computer:~/example/python-example-2024$ docker run -it -v ~/example/model:/challenge/model -v ~/example/test_data:/challenge/test_data -v ~/example/test_outputs:/challenge/test_outputs -v ~/example/training_data:/challenge/training_data image bash

        root@[...]:/challenge# ls
            Dockerfile             README.md         test_outputs
            evaluate_model.py      requirements.txt  training_data
            helper_code.py         team_code.py      train_model.py
            LICENSE                run_model.py

        root@[...]:/challenge# python train_model.py -d training_data -m model

        root@[...]:/challenge# python run_model.py -d test_data -m model -o test_outputs

        root@[...]:/challenge# python evaluate_model.py -d test_data -o test_outputs
        [...]

        root@[...]:/challenge# exit
        Exit

### <a name="faq"></a>FAQ

__What computational resources will my entry have?__

We are using a [`g4dn.4xlarge` instance](https://aws.amazon.com/ec2/instance-types/g4/) on AWS to run your code. It has 16 vCPUs, 64 GB RAM (60 GB available to your code), 300 GB of local storage (in addition to the data), and an optional [NVIDIA T4 GPU](https://www.nvidia.com/en-us/data-center/tesla-t4/).

For training your model on the training data, we impose a 48 hour time limit for submissions that request a GPU and a 72 hour time limit for submissions that do not request a GPU. For running your trained model on the validation or test data, we impose a 24 hour time limit whether or not a submission requests a GPU.

__How do I install Docker?__

Go to [https://docs.docker.com/install/](https://docs.docker.com/install/) and install the Docker Community Edition. For troubleshooting, see [https://docs.docker.com/config/daemon/](https://docs.docker.com/config/daemon/)

__Do I have to use your Dockerfile?__

No. The only part of the Dockerfile we care about are the three lines marked as "DO NOT EDIT". These three lines help ensure that, during the build process of the container, your code is copied into a folder called `physionet` so that our processing pipeline can find your code and run it. Please do not change those three lines. You are free to change your base image, and at times you should (see the next question).

__What's the base image in Docker?__

Think of Docker as a series of images, or snapshots of a virtual machine, that are layered on top of each other. For example, your image may built on top of a very lightweight Ubuntu operating system with Python 3.8.6 from the official Docker Hub (think of it as a GitHub for Docker). You can then install your NumPy, SciPy, and other libraries on it. If you need the latest version of TensorFlow, then search for it on [hub.docker.com](https://hub.docker.com/) and edit your file so that the first line of your Dockerfile now reads as: `FROM tensorflow`. For a specific version, say 1.11, lookup the [tags](https://hub.docker.com/r/tensorflow/tensorflow/tags) and change it accordingly to a specific version, such as`FROM tensorflow:1.11.0`. We recommend using specific versions for reproducibility.

__sklearn or scikit-learn?__

For Python, if your entry uses scikit-learn, then you need to install it via `pip` using the package name `scikit-learn` instead of `sklearn` in your `requirements.txt` file: [See here](https://scikit-learn.org/stable/install.html).

__Why can't I install a common Python or R package using Python or R's package manager?__

Some packages have dependencies, such as the GCC, that need to be installed.  Try `python:3.8.9-buster`, which includes more packages by default, or installing the dependencies. If the first line of your Dockerfile is `FROM python:3.8.6-slim`, then you are building a Docker image with the Debian Linux distribution, so you can install GCC and other related libraries that many Python and R packages use by adding the line `RUN apt install build-essential` to your Dockerfile before installing these packages.

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

- Do not change the `train_model`, `run_model`, or `helper_code` scripts.  We will only use the versions of these scripts in the MATLAB and Python example repositories ([https://github.com/physionetchallenges](https://github.com/physionetchallenges)), so any changes that you make will not be used.
- Do build your Docker image.  The above FAQ provides advice for common Docker-related issues.
- Do test your Docker code on at least one file from the training dataset.
- Do try to reduce the run time of your code by moving code from the run_model function to the load_model function for repeated tasks.  Most submissions can run in a couple of hours on the test data.

__Why is my entry unsuccessful on your submission system? It works on my computer.__

There are several common reasons for unexpected errors:

- You may have changed the `train_model`, `run_model`, or `helper_code` script. For consistency across submissions from different participants, we will use the scripts available on [https://github.com/physionetchallenges/](https://github.com/physionetchallenges).
- You may have unmet dependencies. Note that packages in the requirements.txt file for Python submissions may have dependencies, such as gcc, that pip is unable to install. You can often identify such issues by trying to build a Docker image from your Dockerfile.
- You may have used a specific version of a Python package on your computer, but you didn't specify the version of the package in your Dockerfile or your requirements.txt file, so we installed the latest available version of the package. These versions may be incompatible. For example, if you train your data using one version of a machine learning package and we test it with another version of the package, then your entry may fail.

## How do I learn more?

Please see the [George B. Moody PhysioNet Challenge 2024 webpage](../) for more details. Please post questions and concerns on the [Challenge discussion forum](https://groups.google.com/forum/#!forum/physionet-challenges).
