---
layout: default
---

# Sandbox Evaluation of Entries in PhysioNet/Computing in Cardiology Challenges 

This page describes how entries in PhysioNet/CinC Challenges are
evaluated and scored automatically. The method described below was
developed to support the 2014 Challenge. Entries for future challenges,
and unofficial late entries for previous challenges, will also be
evaluated and scored using this method.

This page also includes instructions for setting up a replica of the
Challenge test environment, which may be useful for debugging Challenge
entries.

## Evaluation details

All of the processing needed to check, evaluate, and score challenge
entries is performed on dedicated 64-bit Linux servers, under control of
the supervisor script ([evaluate](evaluate)). Each server runs several
virtual machines (VMs) using qemu and kvm hardware virtualization.

Newly uploaded entries are initially placed into a queue. The oldest
entry in the queue is loaded into an idle VM as soon as one is
available, and stage 1 processing begins.

During stage 1 (managed for the 2014 Challenge by [prep](prep)),
the entry is checked to be certain that it contains all of the
components required by the rules of the challenge; if so, its setup.sh
script is run. The evaluation ends if stage 1 does not succeed for any
of these reasons:

-   the entry is unreadable or incomplete
-   `setup.sh` does not exit within five minutes
-   `setup.sh` fails (exits with non-zero status)

If stage 1 ends early, the diagnostic output of `setup.sh` (its standard
output and standard error output) is reported in the last case, or an
appropriate error message is reported otherwise. If `setup.sh` exits
successfully (with zero status), the entry is queued for stage 2
processing.

During stage 2 (managed for the 2014 Challenge by [quiz](quiz)),
the training data set is copied into the VM. The entry’s `next.sh` script
is run once with each training record as input. The evaluation ends if
stage 2 does not succeed for any of these reasons:

-   `next.sh` fails on any record
-   `next.sh` does not exit within 20 seconds
-   `next.sh`’s results (in the 2014 Challenge, its annotations) do not
    match the expected results submitted with the entry

If stage 2 ends early, the diagnostic output of next.sh (its standard
output and standard error output) is reported in the first case, or an
appropriate error message is reported otherwise. If all of the training
set records are processed successfully, and all results match the
expected results, and the entry does not include a `DRYRUN` file (which
forces a premature exit after completion of stage 2), the entry is
queued for stage 3 processing.

During stage 3 (managed for the 2014 Challenge by [exam](exam)),
the test data set is copied into the VM. The entry’s `next.sh` script is
run once with each test record as input. Unlike stage 2, however, errors
do not cause premature termination of stage 3, and `next.sh`’s diagnostic
output is not reported (to prevent leakage of information about the test
data). The numbers of failures and timeouts, if any, are reported in
lieu of detailed diagnostics. The results are collected and transmitted
from the VM to the dedicated host for stage 4 processing. (The only
exception occurs if stage 3 is not complete after 1 hour; in this case,
a timeout error is reported, and the evaluation ends at the beginning of
stage 4.)

In stage 4 (managed for the 2014 Challenge by [score](score)), the
collected results are compared with the Challenge’s reference results
to determine performance statistics and scores, which are reported to
the user.

## Replicating the Challenge test environment

In order to test your entry, it is not necessary to replicate the
Challenge test hardware, but it may be helpful to compare it with your
hardware to estimate your entry’s run time. The dedicated Challenge
servers have four quad-core 2.6 GHz AMD Opteron 6212 CPUs and 32 GB of
RAM. The VMs are configured with dual-core amd64 CPUs, 2 GB of RAM, a 10
GB read-only root partition, a 1 GB read-write home partition, a CD-ROM
drive (for loading the entry into the home partition in stage 1, the
training data in stage 2, and the test data in stage 3), and a serial
port (for transferring status reports to the host in stages 1 and 2, and
analysis results in stage 3). The VMs are not configured with network
interfaces.

To replicate the Challenge test software environment available within
the VMs, [install amd64 Debian 7
(Wheezy)](http://www.debian.org/releases/stable/debian-installer/) and
apply all updates, then install these additional packages from the
Debian stable repository:

        automake build-essential gfortran ghc libarmadillo-dev libboost-all-dev
        libgsl0-dev octave openjdk-7-jdk python-numpy r-base sharutils

        liboctave-dev gsl-bin octave-statistics
        octave-control octave-general octave-image octave-miscellaneous
        octave-optim octave-signal octave-specfun octave-struct

(See a [complete list of installed Debian packages](package-list.txt) as
of Tuesday, 26 April 2016 at 18:11 EDT.)

Finally, install the [WFDB Software Package](https://physionet.org/content/wfdb/10.7.0/).
(Installation will be much more convenient if a network interface is
available; remember, however, that your entry will not be able to use a
network interface during evaluation.)

For convenience, you may download a [bootable ISO
image](https://archive.physionet.org/challenge/sandbox/binary.hybrid.iso) (847 MB) containing the test environment. The
image also includes the training data set for the 2014 Challenge. Copy
it to a CD or USB memory stick, then boot it on any computer containing
a 64-bit AMD or Intel x86-compatible CPU, or install it within a virtual
machine. Details are [here](00README); sources and
previous versions of the image are [here](https://archive.physionet.org/challenge/sandbox/challenge-live/).

You may install and use the test software environment on a spare
computer if you wish, or in a VM using whatever VM technology you prefer
on your favorite host OS. On the Challenge servers, we use qemu-kvm,
hosted on Fedora GNU/Linux.

---

PhysioNet is a repository of freely-available medical research data,
managed by the MIT Laboratory for Computational Physiology.

Supported by the [National Institute of Biomedical Imaging and
Bioengineering (NIBIB)](https://www.nibib.nih.gov/)
under NIH grant number R01EB030362.

[Back](../)
