# PhysioNet/CinC Challenge 2018: Training/Test Sets

Data for [the 2018 PhysioNet/Computing in Cardiology
Challenge](../) were contributed by the Massachusetts
General Hospital's (MGH) Computational Clinical Neurophysiology
Laboratory (CCNL), and the Clinical Data Animation Laboratory (CDAC).
The dataset includes 1,985 subjects which were monitored at an MGH sleep
laboratory for the diagnosis of sleep disorders. The data were
partitioned into balanced training (n = 994), and test sets (n = 989).
Collected clinical characteristics and outcomes of the patients are
presented in Table 1, below.

**Table 1:** *Clinical characteristics of the dataset, and those of the
training, and testing set.*

| Clinical Feature             | Total (n=1893) | Train (n=994) | Test (n=989) |
| :---                         | :---           | :---          | :---         |
| **Age**                      | 55(+/-14.4)    | 55(+/-14.3)   | 55(+/-14.4)  |
| **Body Mass Index**          | 33(+/-7.6)     | 33(+/-7.8)    | 33(+/-7.5)   |
| **Epworth Sleepiness Scale** | 8.6(+/-5.3)    | 8.5(+/-5.3)   | 8.7(+/-5.3)  |
| **Gender (% Male)**          | 65             | 67            | 63           |
| **Drug Use (%)**             |                |               |              |
| Antidepressant               | 26.1           | 25.7          | 26.5         |
| Antihistamine                | 4.8            | 4.8           | 4.8          |
| Benzodiazepine               | 16.1           | 16.9          | 15.4         |
| Diabetic                     | 11.7           | 11.9          | 11.5         |
| Herbal                       | 4.2            | 4.3           | 4.0          |
| Hypertension                 | 40.9           | 41.0          | 40.6         |
| Neuroleptic                  | 4.2            | 4.5           | 3.8          |
| Opiate                       | 7.4            | 8.1           | 6.7          |
| Neuroactive                  | 19.1           | 20.8          | 17.5         |
| Sleep aids                   | 28.3           | 29.0          | 27.8         |
| Stimulant                    | 4.7            | 3.9           | 5.5          |
| **Reason For Visit (%)**     |                |               |              |
| Diagnostic (%)               | 41.8           | 41.16         | 42.47        |
| Split Night CPAP (%)         | 38.35          | 37.95         | 39.03        |
| All Night CPAP (%)           | 19.85          | 20.88         | 18.5         |

## Sleep Stages

The sleep stages of the subjects were annotated by clinical staff at the
MGH according to the American Academy of Sleep Medicine (AASM) manual
for the scoring of sleep. More specifically, the following six sleep
stages were annotated in 30 second contiguous intervals: *wakefulness,
stage 1, stage 2, stage 3, rapid eye movement (REM), and undefined*.
Characteristics of the subjects during sleep are presented in Table 2.

**Table 2:** Sleep and arousal characteristics of training and testing
data.


| Clinical Feature                 | Overall (n=1893) | Train (n=994) | Test (n=989)  |
| :--                              | :--              | :--           | :--           |
| **Total Recording Time (hours)** | 7.7(+/-0.67)     | 7.7(+/-0.66)  | 7.7(+/-0.68)  |
| **Total Time In bed (hours)**    | 7.5(+/-0.67)     | 7.5(+/-0.67)  | 7.5(+/-0.67)  |
| **Total Sleep Time (hours)**     | 6.2(+/-1.2)      | 6.2(+/-1.1)   | 6.1(+/-1.2)   |
| **Sleep Stages % [mean(std)]**   |                  |               |               |
| Wake                             | 29.3(+/-59)      | 28(+/-48)     | 31(+/-69)     |
| Non-REM 1                        | 19.5(+/-14)      | 19.6(+/-14.3) | 19(+/-13)     |
| Non-REM 2                        | 51.3(+/-12.9)    | 51(+/-13)     | 51.7(+/-12.6) |
| Non-REM 3                        | 13.8(+/-9.8)     | 14(+/-9.8)    | 13.8(+/-9.8)  |
| REM                              | 15.3(+/-8.4)     | 15.5(+/-8.7)  |
| **Arousal Indices [mean(std)]**  |                  |               |
| Apnea Hypopnea                   | 19(+/-14.4)      | 19(+/-14.6)   | 18.9(+/-14.4) |
| Respiratory Disturbance          | 26.2(+/-16.5)    | 26.3(+/-16.6) | 26.2(+/-16.4) |
| Periodic Limb Movement           | 24.4(+/-50.7)    | 24(+/-34.2)   |

## Arousals

Certified sleep technologists at the MGH also annotated waveforms for
the presence of arousals that interrupted the sleep of the subjects. The
annotated arousals were classified as either: *spontaneous arousals,
respiratory effort related arousals (RERA), bruxisms, hypoventilations,
hypopneas, apneas (central, obstructive and mixed), vocalizations,
snores, periodic leg movements, Cheyne-Stokes breathing or partial
airway obstructions.*

**Table 3**: Number and types of arousals in the training set.

| Target arousals             |         |
| :--                         | :--     |
| Bruxism                     | 30      |
| Cheyne-Stokes breathing     | 3       |
| Hypoventilation             | 4       |
| Noise                       | 1       |
| Partial airway obstruction  | 11      |
| Periodic leg movement (PLM) | 36      |
| Respiratory effort (RERA)   | 43,822  |
| Snoring                     | 28      |
| Spontaneous                 | 70      |
| Total                       | 44,005  |
| **Non-target arousals**     |         |
| Hypopnea                    | 56,936  |
| Central apnea               | 22,763  |
| Mixed apnea                 | 2,641   |
| Obstructive apnea           | 32,547  |
| Total                       | 114,887 |

## Signals

The subjects had a variety of physiological signals recorded as they
slept through the night including: electroencephalography (EEG),
electrooculography (EOG), electromyography (EMG), electrocardiology
(ECG), and oxygen saturation (SaO2). In Table 4, we present a full list
of the available signals. Six channels of EEG (F3-M2, F4-M1, C3-M2,
C4-M1, O1-M2, O2-M1) were collected using the [International 10/20
system](https://sleeptechstudy.wordpress.com/category/1020-system/) of
electrode placement. Single lead ECG was collected with electrodes
placed below the right clavicle near the sternum and over left lateral
chest wall. Left eye EOG was collected setting the right ear EEG
electrode (M2) as reference. EMG recordings were made at the chin,
chest, and abdomen. Excluding SaO2, all signals were sampled to 200 Hz
and were measured in microvolts. For analytic convenience, SaO2 was
resampled to 200Hz, and is measured as a percentage.

**Table 4:** Physiological signals available for the prediction of
arousals.

| Signal Name | Units | Signal Description                                      |
| :--         | :--   | :--                                                     |
| SaO2        | %     | Oxygen saturation                                       |
| ABD         | µV    | Electromyography, a measurement of abdominal movement   |
| CHEST       | µV    | Electromyography, measure of chest movement             |
| Chin1-Chin2 | µV    | Electromyography, a measure of chin movement            |
| AIRFLOW     | µV    | A measure of respiratory airflow                        |
| ECG         | mV    | Electrocardiogram, a measure of cardiac activity        |
| E1-M2       | µV    | Electrooculography, a measure of left eye activity      |
| O2-M1       | µV    | Electroencephalography, a measure of posterior activity |
| C4-M1       | µV    | Electroencephalography, a measure of central activity   |
| C3-M2       | µV    | Electroencephalography, a measure of central activity   |
| F3-M2       | µV    | Electroencephalography, a measure of frontal activity   |
| F4-M1       | µV    | Electroencephalography, a measure of frontal activity   |
| O1-M2       | µV    | Electroencephalography, a measure of posterior activity |

For compression purposes, all signals were converted from 64 bit float
format into 16 bit signed int using the scale and offset approach. Data
for the challenge are stored in Matlab-compatible WFDB signal files.

## Accessing the Data

Data for the challenge may be browsed below, or viewed online using
[LightWAVE](https://archive.physionet.org/lightwave/?db=challenge/2018). The data repository contains
two directories (`training` and `test`) which are each approximately 135
GB in size. Each directory contains one subdirectory per subject (e.g.
`training/tr03-0005`). Each subdirectory contains signal, header, and
arousal files; for example:

1.  `tr03-0005.mat`: a Matlab V4 file containing the signal data.
2.  `tr03-0005.hea`: record header file - a text file which describes
    the format of the signal data.
3.  `tr03-0005.arousal`: arousal and sleep stage annotations, in WFDB
    annotation format.
4.  `tr03-0005-arousal.mat`: a Matlab V7 structure containing a vector
    of sleep stages and target arousal events for the Challenge, sampled
    at 200 Hz.

Table 5 lists functions that can be used to import the data into Python,
Matlab, and C programs.

**Table 5**: Functions that can be used to import Challenge data.

| File type                             | Python                                                                         | Matlab                                                                            | C/C++                                                                 |
| :---                                  | :---                                                                           | :---                                                                              | :---                                                                  |
| Signal (.mat) and header (.hea) files | [wfdb.rdrecord](https://wfdb.readthedocs.io/en/latest/wfdb.html#wfdb.rdrecord) | [rdmat](https://physionet.org/physiotools/matlab/wfdb-app-matlab/html/rdmat.html) | [isigopen](https://physionet.org/physiotools/wpg/wpg_18.htm#isigopen) |
|
| Arousal annotation files (.arousal) | [wfdb.rdann](https://wfdb.readthedocs.io/en/latest/wfdb.html#wfdb.rdann)                        | [rdann](https://physionet.org/physiotools/matlab/wfdb-app-matlab/html/rdann.html) | [annopen](https://physionet.org/physiotools/wpg/wpg_18.htm#annopen) |
| Arousal files (.mat)                | [scipy.io.loadmat](https://docs.scipy.org/doc/scipy/reference/generated/scipy.io.loadmat.html) | [load](https://www.mathworks.com/help/matlab/ref/load.html)                       | [libmatio](https://sourceforge.net/projects/matio/)                 |

## Files

-   **[Click here](training.torrent) to download the
    complete training database (135 GB) using BitTorrent.**
-   **[Click here](test.torrent) to download the
    complete test database (133 GB) using BitTorrent.**

If you don’t have a BitTorrent client, we recommend
[Transmission](https://transmissionbt.com/).

### Browse

* [list of annotators](ANNOTATORS)
* [list of record names](RECORDS)
* [age-sex.csv](age-sex.csv)
* [test/](https://archive.physionet.org/physiobank/database/challenge/2018/test/)
* [training/](https://archive.physionet.org/physiobank/database/challenge/2018/training/)
