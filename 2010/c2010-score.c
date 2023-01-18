/* file: c2010-score.c		G. Moody	15 March 2010
				Last revised:	23 March 2010
-------------------------------------------------------------------------------
Calculate individual record scores for events 1 and 2 of Challenge 2010
Copyright (C) 2010 George B. Moody

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place - Suite 330, Boston, MA 02111-1307, USA.

You may contact the author by e-mail (george@mit.edu) or postal mail
(MIT Room E25-505A, Cambridge, MA 02139 USA).  For updates to this software,
please visit PhysioNet (http://www.physionet.org/).
_______________________________________________________________________________

This program is used to calculate scores in the PhysioNet/CinC Challenge 2010.
It is provided here so that participants can evaluate the performance of their
signal reconstruction algorithms on the Challenge Set A records as well as on
any other available recordings.  The on-line scoring system available to
registered Challenge participants uses this code to score all Set A, B, and
(after the final deadline) C records.

Compile this program with any C compiler to produce a text-mode (command-line)
application.  For example, using the GNU C compiler:
    gcc -o c2010-score c2010-score.c -lm

To run it, provide the reference and test files as the command-line arguments.
The reference files for Set A are the text files with the suffix '.missing'
(find them in http://physionet.org/physiobank/database/challenge/2010/set-a/).
Test files should be in the same text format (one reconstructed sample per
line; although the reference samples are all integers, the test samples may be
given as either integer or floating point values in standard formats).  For
example, if the reference file is 'a00.missing' and the test file is
'a00.test', use the command
    c2010-score a00.missing a00.test
to obtain the event 1 and event 2 scores for 'a00.test'.  The third number in
the output is the number of samples in the reference file;  for the records in
the Challenge 2010 data sets, this is always 3750 (125 samples/second for 30
seconds), but this program can be applied to compare two time series of any
length (extremely long series may result in loss of precision or overflow,
however).

Note that the event 1 score uses the reference signal for normalization, so
the order of arguments is significant;  in general, the commands
    c2010-score a b
and
    c2010-score b a
will yield different event 1 scores.

See the Challenge 2010 home page (http://physionet.org/challenge/2010) for
details about the scores reported by this program and for additional information
about the Challenge.
*/

#include <stdio.h>
#include <stdlib.h>	/* needed for declaration of exit() */
#include <math.h>	/* needed for declaration of sqrt() */

int main(int argc, char **argv)
{
    char buf[80];
    double Erec, Eref, Eres, Erfc, n = 0, Q1, Q2,
	ssvrec = 0, ssvref = 0, ssvres = 0, svfc = 0,
	svrec = 0, svref = 0, svres = 0, tmp, vrec = 0, vref, vres;
    FILE *rs, *ts;

    if (argc != 3) {
	fprintf(stderr, "usage: %s reference-file test-file\n", argv[0]);
	exit(1);
    }

    if ((rs = fopen(argv[1], "rt")) == NULL) {
	fprintf(stderr, "%s: can't open reference file %s\n", argv[0], argv[1]);
	exit(2);
    }

    if ((ts = fopen(argv[2], "rt")) == NULL) {
	fprintf(stderr, "%s: can't open test file %s\n", argv[0], argv[2]);
	exit(3);
    }

    /* Read a reference sample on each iteration. */
    while (fgets(buf, sizeof(buf), rs) && (sscanf(buf, "%lf", &vref) == 1)) {
	/* Attempt to read a test sample on each iteration.  If the test file
	   ends prematurely, use its last value for any remaining samples. */  
	if (fgets(buf, sizeof(buf), ts) && (sscanf(buf, "%lf", &tmp) == 1))
	    vrec = tmp;

	/* Update variables needed for the calculation of Q1 and Q2. */
	n++;			/* number of reference samples */
	vres = vrec - vref;	/* residual */
	svres += vres;		/* sum of residuals */
	ssvres += vres*vres;	/* squared sum of residuals */
	svref += vref;		/* sum of reference samples */
	ssvref += vref*vref;	/* squared sum of reference samples */
	svrec += vrec;		/* sum of test samples */
	ssvrec += vrec*vrec;	/* squared sum of test samples */
	svfc += vref*vrec;	/* sum of cross-products */
    }

    if (n == 0) {
	fprintf(stderr, "%s: bad format or no data in reference file %s\n",
		argv[0], argv[1]);
	exit(4);
    }

    /* All reference samples have been read -- now calculate Q1 and Q2. */
    Eref = ssvref - svref*svref/n;	/* n * variance of reference signal */
    Erec = ssvrec - svrec*svrec/n;	/* n * variance of test signal */
    Erfc = svfc   - svref*svrec/n;	/* n * variance of cross-products */

    /* Event 1 score */
    if (Eref > ssvres)
	Q1 = 1 - ssvres/Eref;
    else if (ssvres == 0)  /* Eref is also 0 in this case */
        Q1 = 1;		 /* perfect reconstruction of a flat signal */
    else
	Q1 = 0;

    /* Event 2 score */
    if (Erfc > 0 && Eref > 0 && Erec > 0)
	Q2 = Erfc/sqrt((Eref*Erec));
    else if (Eref == 0 && Erec == 0)
        Q2 = 1;  	/* flat reconstruction, flat signal */
    else
	Q2 = 0;

    /* Output the scores and the number of reference samples. */
    printf("%6.4lf\t%6.4lf\t%ld\n", Q1, Q2, (long)n);
    exit(0);
}
