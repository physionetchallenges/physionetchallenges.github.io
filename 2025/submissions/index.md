---
layout: after_2015
---

# <a name="submission-instructions-and-form"></a> Submission instructions for the 2025 Challenge

### Table of contents

- [Introduction](#introduction)
- [Preparation and submission instructions](#preparation)
- [MATLAB-specific instructions](#matlab)
- [Python-specific instructions](#python)
- [Docker-specific FAQs](#docker)
- [FAQ](#faq)

### <a name="introduction"></a>Introduction

Similarly to [last year's Challenge](../../2024/), teams must submit the full code for their models. To help, we have implemented example entries in both MATLAB and Python. We encourage teams to use these examples as templates for their code.

### <a name="preparation"></a>Preparation and submission instructions

1. Create a private GitHub or GitLab repository for your code. We recommend cloning our example code and replacing it with your code.
2. Add your code to your repository. Like the example code, your code must be in the root directory of the main or master branch.
3. Do not include extra files that are not required to create and run your prediction code, such as the training data.
4. Follow the instructions for the programming language of your submission.
5. Share your repository with the `physionetchallengeshelper` user.
6. Submit your entry using [this form](https://forms.gle/126MiJuEpZwe8tBn8).
7. We will put the scores for successful entries on the validation set on the leaderboard.  The leaderboard will publicly show your team name and scores.

### <a name="matlab"></a>MATLAB-specific instructions

1. You can use our [MATLAB example code](https://github.com/physionetchallenges/matlab-example-2025.git) as a template. Please clone or download this repository, replace our code with your code, and push or upload the files to your repository.
2. `AUTHORS.txt`, `LICENSE.txt`, `README.md`: Update as appropriate. Please include your authors. Unfortunately, our submission system will be unable to read your README file to change how we run your code.
3. `train_model.m`: Do not change this script. It calls your `team_training_code.m` script. We will not use the `train_model.m` script from your repository, so any change made to this code will not be included.
4. `team_training_code.m`: Update this script to create and save your model.
5. `run_model.m`: Do not change this script. It loads your model by calling `load_model` and runs your model by calling your `team_testing_code` function for each patient ID. We will not use the `run_model.m` script from your repository, so any change made to this code will not be included.
6. `team_testing_code.m`: Update this script to load and run your model weights and any parameters from files in your submission.
7. Confirm that your code compiles and runs in MATLAB R2024b or R2025a (when available).
8. Push or upload your code to the root/base directory of the master branch of your repository.
9. We will download your code, compile it using the MATLAB compiler (`mcc -m train_model.m -a .` and `mcc -m run_model.m -a .`), and run it on our machines or the cloud.

### <a name="python"></a>Python-specific instructions

1. You can use our [Python example code](https://github.com/physionetchallenges/python-example-2025.git) as a template. Please clone or download this repository, replace our code with your code, and push or upload the files to your repository.
2. `Dockerfile`: Update to specify the version of Python that you are using on your machine. Add any additional packages that you need. Do not change the name or location of this file. The structure of this file is important, especially the 3 lines that are marked as "DO NOT EDIT".
3. `requirements.txt`: Add Python packages to be installed with `pip`. Specify the versions of these packages that you are using on your machine. Remove unnecessary packages that your code does not need.
4. `AUTHORS.txt`, `LICENSE.txt`, `README.md`: Update as appropriate. Please include your authors. Unfortunately, our submission system will be unable to read your README file to change how we run your code.
5. `team_code.py`: Update this script to load and run your trained model(s).  
6. `train_model.py`: Do not change this script. It calls functions from the `team_code.py` script to train your model on the training data.
7. `helper_code.py` Do not change this script. It is a script with helper functions for our code. You are welcome to use them in your code. We will not use the `helper_code.py` script from your repository, so any change made to this code will not be included.
8. `run_model.py`: Do not change this script. It calls your functions from the `team_code.py` script to load and run your trained models to run on the test data. We will not use the `run_model.py` script from your repository, so any change made to this code will not be included.
9. You can develop your code without Docker, but confirm that you can build a Docker image from your Dockerfile and run your code in Docker.
10. Push or upload your code to the root/base directory of the master branch of your repository.
11. We will download your code, build a Docker image from your Dockerfile, and run it on on our machines or the cloud.

### <a name="docker"></a> Docker-specific FAQs

__Why containers?__

Containers allow you to define the environment that you think is best suited for your algorithm. You can choose a specific version of a Linux distribution, install dependancies, and choose specific versions of your favorite libraries and frameworks. Here are [two](https://towardsdatascience.com/how-docker-can-help-you-become-a-more-effective-data-scientist-7fc048ef91d5) [links](https://link.medium.com/G87RxYuQIV) with data science-centric introductions to Docker.

__Quickly, how can I test my submission locally?__

Install Docker. Clone your repository. Build an image. Run it on the data, or at least a small subset of the data.

<a name="commands"></a> __Less quickly, how can I test my submission locally?  Please give me commands that I can copy and paste.__

To guarantee that we can run your code, please [install](https://docs.docker.com/get-docker/) Docker, build a Docker image from your code, and run it on the training data. To quickly check your code for bugs, you may want to run it on a subset of the training data.

If you have trouble running your code, then please try the following steps in the [Python example code](https://github.com/physionetchallenges/python-example-2025.git).

### <a name="faq"></a>FAQ

__What computational resources will my entry have?__

We are using a [`g4dn.4xlarge` instance](https://aws.amazon.com/ec2/instance-types/g4/) on AWS or a comparable environment to run your code. It has 16 vCPUs, 64 GB RAM (60 GB available to your code), 100 GB of local storage (in addition to the data), and an optional [NVIDIA T4 GPU](https://www.nvidia.com/en-us/data-center/tesla-t4/).

For training your model on the training set, we impose a 72 hour time limit on the training set. For running your trained model on the validation set , we impose a 24 hour time limit. For running your trained model on the test set, we impose a similar limit as the validation set, but with more time for more records, e.g., 48 hours if the test set is twice the size of the validation set.

__How do I install Docker?__

Go to [https://docs.docker.com/install/](https://docs.docker.com/install/) and install the Docker Community Edition. For troubleshooting, see [https://docs.docker.com/config/daemon/](https://docs.docker.com/config/daemon/)

__Do I have to use your Dockerfile?__

No. The only part of the Dockerfile we care about are the three lines marked as "DO NOT EDIT". These three lines help ensure that, during the build process of the container, your code is copied into a folder called `challenge` so that our processing pipeline can find your code and run it. Please do not change those three lines. You are free to change your base image, and at times you should (see the next question).

__What's the base image in Docker?__

Think of Docker as a series of images, or snapshots of a virtual machine, that are layered on top of each other. For example, your image may built on top of a very lightweight Ubuntu operating system with Python 3.8.6 from the official Docker Hub (think of it as a GitHub for Docker). You can then install your NumPy, SciPy, and other libraries on it. If you need the latest version of TensorFlow, then search for it on [hub.docker.com](https://hub.docker.com/) and edit your file so that the first line of your Dockerfile now reads as: `FROM tensorflow`. For a specific version, say 1.11, lookup the [tags](https://hub.docker.com/r/tensorflow/tensorflow/tags) and change it accordingly to a specific version, such as `FROM tensorflow:1.11.0`. We recommend using specific versions for reproducibility.

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

Please see the [George B. Moody PhysioNet Challenge 2025 webpage](../) for more details. Please post questions and concerns on the [Challenge discussion forum](https://groups.google.com/forum/#!forum/physionet-challenges).
