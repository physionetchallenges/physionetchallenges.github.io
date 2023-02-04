---
layout: default
---

# Session M9.3
## Multitaper Spectral Estimation Reveals Excess Power At 0.02 Hz Which Characterizes Apnea Patients
## M.R. Jarvis, P.P. Mitra
### Caltech
### Pasadena, CA, USA

We have implemented a simple method for distinguishing between
patients with apnea and normal patients. The method is based on a
moving window spectrum (spectrogram) of the ECG raw signal squared and
utilizes the fact that the power in the signal changes in a
characteristic manner in apnea patients.

Apnea patients show an excess of power in a frequency band centered at
approximately 0.02 Hz which is apparent during apnea episodes. This
peak is absent in normal patients and may be used to identify both
apnea patients and their episodes with a high degree of confidence.
The success of our method stems from our use of multitaper methods for
spectral estimation. The low value of this frequency means that good
bias control is required to clearly separate this peak from zero. This
is achieved in multitaper spectral estimation by tapering the data
with a set of functions (Slepian sequences) which are explicitly
chosen to minimize bias.

In addition we have investigated the point process extracted from the
raw signal during apnea. The point process description is of interest
since the only information it utilises is the location of the cardiac
pulses regardless of shape. We find that periods of normal breathing
in apnea patients tend to be associated with a particularly periodic
heartbeat. This can also be used to identify apnea patients although
with less confidence. We conclude that simply the times of the cardiac
pulses is not complete information to extract information about apnea,
though it does provide a moderately good classification.

Finally, we looked for possible artifacts of the nature of direct
respiratory signals in the raw data (generated, say, by sensor
motion). While these are present, indicated by peaks in the spectrum
of the raw signal at the breathing frequency, they are not strong
enough to provide the sort of performance we obtained by looking more
directly at the cardiac signals. In conclusion, we have obtained a
robust yet simple signature of sleep apnea based on ECG time series by
looking at the low frequency fluctuations of the power in the signal.
We look forward to understanding the physiological origins of this
signal.

20000503.123923 Score :30/30 = 100.00%.
