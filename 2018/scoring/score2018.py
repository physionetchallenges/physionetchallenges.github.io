#!/usr/bin/env python3

import numpy as np
import os
import sys
import glob
import h5py
from pylab import find
from sklearn.metrics import precision_recall_curve, auc, roc_auc_score
import gc

def score_training_set():
    AUROC, AUPRC = [], []
    for vec_file in glob.glob('tr*.vec'):
        gc.collect()
        record_name = vec_file[:-4]

        # Load predictions from .vec file
        predictions = np.loadtxt(vec_file)

        # Load target arousals
        arousal_file = ('training/%s/%s-arousal.mat'
                        % (record_name, record_name))
        f = h5py.File(arousal_file, 'r')
        arousals = np.array(f['data']['arousals'])

        # Remove any segments that have a -1 label before grading
        keep = find(arousals != -1)
        used_predictions = predictions[keep]
        used_arousals    = arousals[keep]

        if np.any(used_arousals):
            precision, recall, thresholds = \
                precision_recall_curve(np.ravel(used_arousals),
                                       used_predictions,
                                       pos_label=1, sample_weight=None)
            auprc = auc(recall, precision)
            auroc = roc_auc_score(np.ravel(used_arousals), used_predictions)
            AUPRC.append(auprc)
            AUROC.append(auroc)
        else:
            auprc = auroc = float('nan')
        print('%s AUROC:%f AUPRC:%f' % (record_name, auroc, auprc))

    print()
    print('Training AUROC Performance: %f+/-%f'
          % (np.mean(AUROC), np.std(AUROC)))
    print('Training AUPRC Performance: %f+/-%f'
          % (np.mean(AUPRC), np.std(AUPRC)))
    print()

if __name__ == '__main__':
    score_training_set()    
