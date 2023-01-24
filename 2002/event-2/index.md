---
layout: default
---

# PhysioNet/CinC Challenge 2002 Event 2: Classification 

## Introduction

This page contains information about how to participate in event 2. For
background on this challenge, see the [challenge overview](..).
The complete set of rules for event 2 can be found
[here](../#rules-2).

As in previous challenges, there are two events, and the top-scoring
participant in each event will receive an award. Event 1 required
participants to write a program that can generate a realistic 24-hour
time series of inter-beat (RR) intervals. The outputs of these programs
form a part of the challenge dataset used for event 2, in which
participants attempt to sort the data into real and synthetic classes.

## About the challenge dataset

The PhysioNet/CinC Challenge 2002 dataset consists of 50 time series of
interbeat (RR) intervals, designated `rr01`, `rr02`, \..., `rr50`.
Each series
contains between 20 and 24 hours of data (between 70,000 and 130,000
intervals). Approximately half of the series (those belonging to group
A) contain data derived from ambulatory ECG recordings of subjects
between the ages of 20 and 50 who have no known cardiac abnormality
(although, as for most healthy adults, they may have rare isolated
ectopic beats, which have not been filtered out of these time series).
The other half (those belonging to group B) contain synthetic data,
which have been generated using the models submitted by participants in
event 1 of the challenge, and by one or more models provided by the
challenge organizers. Each model has been used to generate two time
series.

The object of event 2 is to determine which of the series belong to
group A (the real data), and which to group B (the synthetic data).

Special thanks to Diane Perry, Isaac Henry, and Joe Mietus for their
assistance in assembling the group A data.

## Downloading the challenge dataset

The challenge dataset is available in two formats:

-   Text files for each of the 50 time series. Each line contains one RR
    interval (the units are seconds). These files may be downloaded from
    the [dataset](https://archive.physionet.org/challenge/2002/dataset/)
    directory on this page.
-   All 50 of these files, collected into a gzip-compressed tar archive
    ([dataset.tar.gz](https://archive.physionet.org/challenge/2002/dataset.tar.gz), 4480860 bytes). The md5sum of
    this file is 05ea2f9df552e1f95d96ee1b5f542e32. If you don’t know
    how to read a gzip-compressed tar archive, see [this
    note](https://archive.physionet.org/faq.shtml#tar-gz).

## Preparing your entry

After downloading the challenge dataset, study it. If you are not
familiar with the characteristics of real interbeat interval time
series, it may be helpful to look at the [MIT-BIH Normal Sinus Rhythm
Database](https://physionet.org/content/nsrdb/1.0.0/),
which is a source of real data
with all of the characteristics of the time series in group A. The
interbeat intervals from the 18 records of this database, which may be
useful as reference material, are contained in
[nsrdb-rr.tar.gz](https://archive.physionet.org/challenge/2002/nsrdb-rr.tar.gz)
(1633730 bytes, in the same format as
[dataset.tar.gz](https://archive.physionet.org/challenge/2002/dataset.tar.gz)).

Classify each series in the challenge dataset as A (real), B
(synthetic), or C (unknown). You will receive 2 points for each correct
classification, and your score will be reduced by 1 point for each
incorrect classification. Your score will be neither increased nor
reduced for any series that you classify as C (unknown). Possible scores
thus range from -50 to 100.

Your entry needs to be prepared in a special text format. Download this
[template](entry.txt), and replace the `?` characters with your
classifications (`A`, `B`, or `C`) for each of the 50 series in
the challenge dataset.

## Submitting your entry for scoring

Please double-check your entry before submitting it to be sure it is in
**plain text** format, exactly like the template file. *HTML-formatted
entries will confuse the automated scorer and will not be scored.*

To submit your entry successfully, you will need:

-   A web browser that supports HTTP uploads, such as Netscape 2.0 or
    later, or MS Internet Explorer 4.0 or later.
-   A valid e-mail address that is known to us. Please sign
    in before submitting your entry. (If you signed in
    on a previous visit, you do not need to sign in again.) All entries
    are logged by date, time, and the e-mail address of the entrant.
    **Important:** Your score will be sent by e-mail to the address you
    specify. Please be sure that your e-mail address is entered
    correctly, or you won’t be able to view your score.
-   A password. If you don’t yet have a password, or if you have
    forgotten your password, go to the [entry
    form](http://www.physionet.org/cgi-bin/cinc-2002-score) (dead link), fill in
    only your e-mail address, click on the “Get password” button, and
    a password will be sent to your e-mail address immediately.

After filling in your e-mail address and password on the [entry
form](http://www.physionet.org/cgi-bin/cinc-2002-score) (dead link),
enter the name
of the file that contains your correctly-formatted entry (you may use
the **Browse** button to find it), and click on **Upload entry**.

## Notes

Please be careful not to submit more than one copy of the same
classifications, since each submission will be counted against your
quota of submissions. If this happens inadvertently, please [send a
note](mailto:webmaster@physionet.org%0Asubject=duplicate%20entry)
quoting the date and time of the duplicate submission; your submission
counter will be adjusted manually if the error can be confirmed.

If you are tempted to try submitting many entries in order to learn
about the correct classifications, why not play
[Mastermind](https://www.onlinespiele-sammlung.de/mastermind/mastermindgames/lizardpoint/)
instead? We will reject obvious attempts to circumvent the spirit of the
challenge in this way. Delivery of your score may be delayed if you
submit more than one entry per day.

UNIX versions of Netscape, and possibly other browsers, will allow the
user to specify a directory name in the **File to upload** field of the
entry form, but the browser will not transmit anything in this case and
will hang until the user interrupts it by clicking on **Stop**. This
behavior is a bug in the browser and cannot be detected or avoided by
the PhysioNet web server. Other browsers will detect and disallow
attempts to upload directories.
