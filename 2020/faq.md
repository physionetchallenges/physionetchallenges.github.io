---
layout: 2020
---

# Frequently Asked Questions (FAQ)

__Are we allowed to do transfer learning using pre-trained networks?__

Most certainly - we encourage you to do this. You do not need to include your data in the code stack for training the algorithm, but you do need to include the pretrained mode in the code harness and provide code to retrain (continue training) on the training data we provide. 
You must also thoroughly document the content of the database you used to pre-train. 

__For the license, can we make it open source but restrict to non-commercial use?__

Yes - the philosophy of the Challenge is to encourage researchers to make their code free to use for research, and we hope that companies will approach you to license the code too!

__Are the provided records a more accurate representation of the hold-out evaluation data that what was previously provided?__

We are creating a large database of heterogeneous data with varying labels, some of which are wrong or incomplete. Leads can be inverted, noisy, mislabeled.  We have deliberately made no attempt to clean this up. The test data contains better labels, but it is not perfect either, and although it roughly correspond to the training data, it includes some deliberate differences. 

__Should I submit your example code to test the submission system?__

No, please only submit your code to the submission system.

__Should I submit an empty repository to test the submission system?__

No, please only submit an entry after you have finished and tested your code.

__I left out a file, or I missed the deadline, or something else. Can I email you my code?__

No, please use the submission form to submit your entry through a repository.

__Do I need to upload your training data? What about the code for evaluating my algorithm?__

No, we have our training and test data and our evaluation code.

__Do you run the code that was in my repository at the time of submission?__

No, not yet. If you change your code after submitting, then we may or may not run the updated version of your code. If you want to update your code but do not want us to run the updates (yet), then please make changes in a subdirectory or in another branch of your repository.

__Why is my entry unsuccessful on your submission system? It works on my computer.__

If you used Python, then make sure that it runs in Docker.

__Why does my code take so long to run on your submission system? It runs quickly on my computer.__

We run each classifier on Google Cloud using an `n1-highmem-2` [VM instance](https://cloud.google.com/compute/docs/machine-types#n1_high-memory_machine_types) with 2 vCPUs, 13 GB RAM, and an NVIDIA T4 Tensor Core GPU (optional). Each classifier has a 24 hour time limit on the test set.
    
__My entry had some kind of error. Did I lose one of my total entries?__

No, only scored entries (submitted entries that receive a score) count against the total number of allowed entries.

---

[Back](index.html)
