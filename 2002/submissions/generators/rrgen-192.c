/* file: rrgen.c
     Entry number  : 191
     Author(s)     : D.C. Lin
     Organization  : Ryerson University
     email address : derlin at acs.ryerson.ca

   This program should compile without errors or warnings using:
	gcc -Wall rrgen.c -lm

   See http://www.physionet.org/challenge/2002/ for further information on
   the CinC Challenge 2002.

   This program was used to generate series rr10 and rr37 of the challenge
   dataset.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  SPS 128

/* >>>>>>>>>>>>>>>>>>>> MY define's <<<<<<<<<<<<<<<<<<<< */
/* N is the maximum number of RR intervals; it must be enough to generate a
   sequence of up to 48 hours */
#define N 131072
#define J 17
#define max(a,b) ((a>b) ? a:b)
#define min(a,b) ((a>b) ? b:a)
#define dabs(a)  ((a>0) ? a:-a)

/* >>>>>>>>>>>>>>>>>>> MY functions <<<<<<<<<<<<<<<<<<<< */
float randn()
{
 float R=2,v1,v2;
 while (R>1) {
     v1=2*drand48()-1;
     v2=2*drand48()-1;
     R=v1*v1+v2*v2;
 }
 return(v2*sqrt(-2*log(R)/R));
}

void bsort(int *a, int *b, int n)
{
 int i, j;
 int temp;
 for (i=0;i<n;i++) b[i]=a[i];
 for (i=0;i<n-1;i++)
     for (j=i+1;j<n;j++)
         if (b[i]>b[j]) {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
         }
}
/* >>>>>>>>>>>>>>>>>>>>>>>>>> <<<<<<<<<<<<<<<<<<<<<<<<<< */

float rr[N];            /* generated RR intervals, in seconds */

void initialize(long seed, long tmax)
{
    float alpha=-0.1264, sig0=0.3;
    float meanRR, stdRR, per_pvc=0.0025;

    int   i,j,k,nsg,nsg_1,npt_sg,LLid,LRid,RLid,RRid,il,ir;
    float meanr0=0, stdr0=0, mu0, wleft, wright;
    float midr;
    static float sigmaj[J], r0[N];
    float *r = rr;

    int   ipvc=0, npvc, itmp; 
    static int   id[N];              
    float jump;
    float maxRR, minRR, RRspan;

    srand48(seed);

    meanRR=1.;
    stdRR=.1;
    for (i=0;i<J;i++) sigmaj[i]=sig0*pow(2,alpha*i);
    mu0=pow((double) meanRR, (double) 1.0/J);
    for (i=0;i<N;i++) r0[i]=mu0;

    for (j=2;j<J+2;j++) {
        nsg=pow(2,j-1);
        npt_sg=N/nsg;                      
        nsg_1=nsg/2+1;
        for (k=1;k<nsg_1;k++) {
            LLid=2*(k-1)*npt_sg; LRid=LLid+npt_sg;
            RLid=(2*k-1)*npt_sg; RRid=RLid+npt_sg;
            wleft=randn()*sigmaj[j-2]+mu0;
            wright=randn()*sigmaj[j-2]+mu0;
            for (il=LLid;il<LRid;il++) r0[il] *= wleft;
            for (ir=RLid;ir<RRid;ir++) r0[ir] *= wright;
        }
    }

    /* ADJUST r0 TO meanRR AND stdRR */
    for (i=0;i<N;i++) meanr0 += r0[i]; meanr0 /= N;
    for (i=0;i<N;i++) r[i]=r0[i]*meanRR/meanr0;
    for (i=0;i<N;i++) r[i]=r[i] - meanRR;
    for (i=0;i<N;i++) stdr0 += r[i]*r[i]; stdr0=sqrt(stdr0/N);
    for (i=0;i<N;i++) r[i] = r[i]*stdRR/stdr0 + meanRR;

    npvc=(int)(N*per_pvc);
    while (ipvc<npvc) {
        itmp=(int)(drand48()*N);
        if (ipvc==0)
           id[ipvc++]=itmp;
        else
           for (i=0;i<ipvc;i++)
               if (itmp != id[i]) {
                   id[ipvc]=itmp;
                   ipvc += 1;
                   break;
               }
    }
    bsort(id,id,npvc);
    for (i=0;i<npvc;i++) {
        j=id[i];
        if (j > 15) {
           midr=(r[j-1]+r[j])*.5;
           maxRR=-100;
           minRR=1000;
           for (k=j-15;k<j+15;k++) {
               maxRR = max(maxRR,r[k]);
               minRR = min(minRR,r[k]);
           }
           RRspan=maxRR-minRR;
           if (max(dabs(midr-r[j-1]),dabs(midr-r[j]))/midr < 0.2) {
              jump=dabs(drand48()*RRspan);
              r[j-1]=midr+jump+drand48()*midr*0.1;
              r[j]  =midr-jump+drand48()*midr*0.1;
           }
        }
    }
    /*    for (i=0;i<N;i++) r[i] *= 128;	*/
}

float generate()
{
    static int i;

    if (i >= N) {
	fprintf(stderr, "rr array is too short -- increase N and try again\n");
	exit(1);
    }
    return (rr[i++]);
}

int main(int argc, char **argv)
{
    float t = 0.0;	    /* sum of intervals since the beginning of the
			       simulation, in seconds */
    long ts = 0;	    /* t, in sample intervals */
    long tsp = 0;	    /* previous value of ts */
    long tmax = 24*60*60;   /* 24 hours, in seconds */
    long seed;		    /* a 32-bit random variable that can be used to
			       initialize the generator */
    long atol();

    if (argc < 2) {
	fprintf(stderr, "usage: %s seed [tmax]\n", argv[0]);
	exit(1);
    }
    seed = atol(argv[1]);
    if (argc > 2)
	tmax = atol(argv[2]);

    initialize(seed, tmax);
    while ((t += generate()) < tmax) {	/* add RR interval to running time */
	/* calculate and output a quantized RR interval */
	ts = (long)(SPS*t + 0.5);
	printf("%5.3f\n", (ts - tsp)/((float)SPS));
	tsp = ts;
    }

    exit(0);
}
