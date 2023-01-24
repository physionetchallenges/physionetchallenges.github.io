---
layout: default
---

## About the events

The PAF Prediction Challenge Database consists of 50 pairs of half-hour
ECG recordings. Each pair of recordings is obtained from a single
24-hour ECG. Subjects in group A experienced PAF; for these subjects,
one recording ends just before the onset of PAF, and the other recording
is distant in time from any PAF (there is no PAF within 45 minutes
before or after the excerpt). Subjects in group N do not have PAF; in
these, the times of the recordings have been chosen at random.

The number of subjects in group N is $$n$$ (where $$20 < n < 30$$). The
number of subjects in group A is thus $$50-n$$, a number also between 20
and 30.

**Event 1 (Screening) is intended to determine if subjects in group A
can be distinguished from those in group N**. (In other words, can
individuals at risk of PAF be identified within a larger population,
based on their ECGs?) Since each subject is represented by a pair of
consecutively numbered records in the database, entrants in event 1 of
the challenge should provide one classification (`A` or `N`) for the
50 odd-numbered records only (`t01`, `t03`, `t05`, \... `t99`). The number of
correct classifications (0 to 50) is the event 1 score.

**Event 2 (Prediction) is intended to determine if subjects in group A
have distinctive and detectable changes in their ECGs immediately before
PAF**. (In other words, is the imminent onset of PAF predictable in an
individual known to be at risk of PAF?) A successful method for doing so
should be able to determine which record of each pair of group A records
immediately precedes PAF. If the identities of the group A records were
known, it would be sufficient to classify these records only; since the
goal of event 1 is to identify group A, however, we have not provided
this information! Entrants in event 2 of the challenge must therefore
classify exactly one of each pair of records in the test set as `A`
(defined as “immediately preceding PAF, if the patient belongs to
group A”), and the other as `N` (defined as “*not immediately
preceding PAF*”). One point is awarded for each correctly classified
record pair, so that the event 2 scores range from $$n$$ to 50 (the lower
bound is $$n$$ because the group N subjects are always considered
correctly classified).

## Preparing your entry

Your entry needs to be prepared in a special text format, which depends
on the event you are entering:

-   For event 1 (Screening), download this [template](../template-test-1),
    and replace the `?` characters with your classifications (`A` or
    `N`) for each of the 50 record pairs in the test set.
-   For event 2 (Prediction), download this [template](../template-test-2),
    and replace the `?` characters with your classifications (`A` or
    `N`) for each of the 100 records in the test set.

## Submitting your entry for scoring

Please double-check your entry before submitting it to be sure it is in
**plain text** format, exactly like the template files. *HTML-formatted
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
    forgotten your password, go to the entry form (see below), fill in
    only your e-mail address, click on the “Get password” button, and
    a password will be sent to your e-mail address immediately.

After filling in your e-mail address and password on the [entry
form](http://www.physionet.org/cgi-bin/cinc-2001-score). enter the name
of the file that contains your correctly-formatted entry (you may use
the **Browse** button to find it), indicate which event you wish to
enter, and click on **Upload entry**.

If you wish to enter both events, you may do so, but you will need to
submit separate entries, one in each format, in this case.

## Notes

Please be careful not to submit more than one copy of the same results,
since each submission will be counted against your quota of submissions.
If this happens inadvertently, please [send a
note](mailto:webmaster@physionet.org%20subject=duplicate%20entry)
quoting the date and time of the duplicate submission; your submission
counter will be adjusted manually if the error can be confirmed.

If you are tempted to try submitting many entries in order to learn
about the correct classifications, why not play
[Mastermind](http://www.lizardpoint.com/fun/mastermind/mastmind.html)
instead? We will reject obvious attempts to circumvent the spirit of the
challenge in this way, including entries that do not have the correct
number of classifications (50 for event 1, 100 for event 2), entries in
event 1 with fewer than 21 or more than 29 `N` classifications,
entries in event 2 that do not have exactly one `A` classification for
each of the 50 record pairs, and large numbers of entries from a single
entrant. Delivery of your score may be delayed if you submit more than
one entry per event per day.

UNIX versions of Netscape, and possibly other browsers, will allow the
user to specify a directory name in the **File to upload** field of the
entry form, but the browser will not transmit anything in this case and
will hang until the user interrupts it by clicking on **Stop**. This
behavior is a bug in the browser and cannot be detected or avoided by
the PhysioNet web server. Other browsers will detect and disallow
attempts to upload directories.

## Frequently asked questions

If your question is not answered below, please consult the [PhysioNet
FAQ](/faq).

**Group B subjects are not explicitly defined in the text. I assume
these are Group N subjects?**

This is correct. Group B was renamed Group N. There should no longer be
any references to Group B. Sorry for the confusion!

**We have to put exactly one A under one of the subjects of each
even-odd pair in event 2. Does this mean that exactly 50 As and 50 Ns
are expected in a submission for event 2 scoring?**

This is also correct.

**I presume this scoring scheme is produced in order to allow submission
for only one of the events, and/or to eliminate the possibility of
contradictory submissions for event 1 and event 2, from the same
author?**

You are welcome to submit results for both events, but they must be
separate submissions. Because of the nature of the events, it would be a
poor strategy to submit the same classifications in both cases, even if
the autoscorer permitted this. In event 1, the goal is to minimize the
number of misclassified subjects in both groups, so it would be a
mistake to mark one record in each pair as `A` (unless you really
believe that all 50 subjects belong to group A; as stated above,
however, there are between 20 and 30 subjects in group A).

In event 2, the goal is to minimize the number of misclassified records
in group A only. In this event, it would be a mistake to omit
classifying one record in any pair as `A`, because if that pair turned
out to belong to group A, you would forfeit the opportunity to score a
point for that pair.

The submission formats for the two events were deliberately designed to
be different. This makes it easy for the autoscorer to recognize a
result submitted to the wrong event in error, so that such a case
doesn’t get counted against your quota of submissions.

**Still, one can have a high score on one event and a poor score on the
other. How do you treat this?**

The two events are really addressing rather different questions, using
the same data set. (This, in a nutshell, is one of the principal
*raisons d’être* for PhysioNet: to make it possible for data to be used
to address more than one question!) We will award US\$500 to the winner
of event 1, and US\$500 to the winner of event 2. If you win both
events, you will receive US\$1000.

**Who is eligible to win an award?**

To be eligible for an award, you must enter the competition officially
(by submitting at least one set of results for scoring, and an abstract
describing your work to Computers in Cardiology 2001, no later than the
abstract deadline of 1 May 2001). You may submit revised results at any
time until noon GMT on 21 September 2001. At that time, the winners will
be determined based on the highest scores received by official entrants.
The date and time of the submission will be used as a tiebreaker if
necessary.

Submissions from members and affiliates of our research groups at MIT,
Boston University, Harvard Medical School, Beth Israel Deaconess Medical
Center, and McGill University are not eligible for awards, although all
are welcome to participate.

If you have missed the deadline for submitting an abstract to Computers
in Cardiology 2001, we still encourage you to participate unofficially.
If you receive a high score, your achievement will be recognized on this
web site. If you are able to attend Computers in Cardiology, you will
have an opportunity to discuss your work informally with other
participants during a workshop session.

**Would it be possible to submit my classification result and ask for
scoring during the weekend? How long will it take for scoring?**

The scoring is performed automatically \-- just follow the instructions
above for submitting your results. Your score is sent to you by return
email immediately.

If your results are not properly formatted, you will receive an email
reply that will indicate this; if this happens, please review the
instructions carefully and try again. Your friendly challenge organizer
reads his
[email](mailto:webmaster@physionet.org?subject=CinC%20Challenge%202001%20Help!)
frequently (on the weekends, too), especially as the critical deadlines
approach, and promises to answer your questions quickly if you get
stuck!

**If I would like to submit more than one result for an event, should I
use the same file name for each submission of the text file (the default
names are template-test-1.txt for event 1 and template-test-2.txt for
event 2)?**

This doesn’t matter (your submission is archived using a file name
constructed from the date, time, and your email address).

**About the result template for event 1 (PAF risk assessment), there are
only odd-numbered records in the template. What should I do if the
classification results for the two records in a pair are different?
Should I just write down the results for the odd-numbered records, or
can I choose the more reliable one from each pair of records?**

Definitely, you should choose whatever classification you consider to be
more reliable, provided that you are using objective criteria for making
the choice. Each pair of records comes from one subject, so for purposes
of event 1 the correct classification is by definition the same for both
records in the pair: either the subject has PAF (`A`) or not (`N`).
Please keep in mind that the classifications must be determined by an
algorithm, not manually, so if your algorithm produces a confidence
level, for example, and you choose the classification with the higher
confidence level each time, this is acceptable (your decision is
algorithmically determined); but it would not be acceptable for you to
decide on subjective grounds which classification to use in each case.

**According to the instructions for abstract submission, I should give
the result of my algorithm. Does that mean the scoring result? So I have
to get the scores first before I can submit the abstract, right?**

This is correct: your abstract should include your score. You should
consider this score to represent preliminary results; your abstract will
be judged on the basis of the ideas you discuss and not on the score
itself (although a good score might help a marginal abstract, a poor
score will not rule out a good abstract). You may submit revised results
for scoring before or after the abstract deadline, at any time until
noon GMT on 21 September 2001. Your best results determine your standing
in the competition. In your finished manuscript (which is not due until
25 September 2001) you should include your best results and describe
what changes, if any, you made in order to improve your initial results.
