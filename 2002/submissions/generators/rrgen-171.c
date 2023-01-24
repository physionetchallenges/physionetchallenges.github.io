/* file: rrgen.c
     Entry number  : 171
     Authors       : Dragan Gamberger, Ivan Maric, Tomislav Smuc,
                      Gordan Bosanac, Nikola Bogunovic, Goran Krstacic
     Organization  : Rudjer Boskovic Institute, 
		     Institute for Cardiovascular Prevention and Rehabilitation
                     Zagreb, Croatia
     email address : dragan.gamberger at irb.hr

   This program should compile without errors or warnings using:
	gcc -Wall rrgen.c -lm

   See http://www.physionet.org/challenge/2002/ for further information on
   the CinC Challenge 2002.

   This program was used to generate series rr27 and rr43 of the challenge
   dataset.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define	SPS	128	/* sampling frequency (determines quantization of
			   RR intervals;  see main()) */

#define     STACK  20	/* stack daepth for mean value computation */
#define     def_load  0.35	/* default load during the day */

float val[STACK];		/* previous interval values stack*/
float ip[STACK];		/* integral power values stack */
float val_mean;		/* mean value of interval values in stack */
float ip_mean;		/* mean value of integral power in stack */
float rr_high;		/* expected interval value for load 0.0*/
float rr_low;		/* expected interval value for load 1.0*/
float abs_max;		/* absolut maximal interval value */
float abs_min;		/* absolut minimal interval value */
float heart_load;		/* present heart load 0.0 - 1.0 */
float int_pow;		/* integral power (needed by the body) */
float int_pow_change;	/* change of power */
float mem_prev;		/* previous disorder */
int aux_counter;		/* auxilliary counter */

		/* load variables */
float load0;		/* long term load */
float load00;		/* intended long term load */

float load1;		/* permanent load, steps */
int load1c;			/* permanent load counter */

float load2;		/* permanent load, continuous */
float load2p;		/* positive step */
float load2m;		/* negative step */
int load2cp;		/* positive step counter */
int load2cm;		/* negative step counter */

float load3;		/* long term load, continuous */
float load3p;		/* positive step */
float load3m;		/* negative step */
int load3cp;		/* positive step counter */
int load3cm;		/* negative step counter */

float load4;		/* medium term load, continuous */
float load4p;		/* positive step */
float load4m;		/* negative step */
int load4cp;		/* positive step counter */
int load4cm;		/* negative step counter */

float load5;		/* medium term load, steps */
int load5c;			/* counter */

float load6;		/* short term load, steps */
int load6c;			/* counter */


	/* global time constants */
float start_ss,per_ss1,per_ss2;	/* basic sleep period */
float incr1,incr2;			/* increments for sleep */
float start_wk1,per_wk1;		/* basic work period */
float start_wk2,per_wk2;		/* intensive work period */

	/* main random generating routine */
float randn(void)
{
   return(((float)rand())/((float)RAND_MAX));
}

float distri(xa,xbl,xbh,xcl,xch)
float xa,xbl,xbh,xcl,xch;
{
   float x,y;
   double base,exp,res;
   x=randn();
   if(x>.5) {			/* increase interval */
      x=2.0*(x-0.5);
      exp=x;			/* x = 0,1 */
      base=2.0;			/* select distribution slope 2=flat, 25 steep */
      if(xch/xbh > 2.65) base=4.0;
      if(xch/xbh > 3.30) base=8.0;
      if(xch/xbh > 4.10) base=12.0;
      if(xch/xbh > 4.70) base=16.0;
      if(xch/xbh > 5.50) base=25.0;
      res=pow(base,exp);
      y=xa+xch*((float) res -1.0)/((float) base -1.0);
   }
   else {				/* decrease interval */
      exp=2.0*x;			/* x = 0,1 */
      base=2.0;			/* select distribution slope 2=flat, 25 steep */
      if(xcl/xbl > 2.65) base=4.0;	/* both xbl xcl MUST be negative */
      if(xcl/xbl > 3.30) base=8.0;
      if(xcl/xbl > 4.10) base=12.0;
      if(xcl/xbl > 4.70) base=16.0;
      if(xcl/xbl > 5.50) base=25.0;
      res=pow(base,exp);
      y=xa+xcl*((float) res -1.0)/((float) base -1.0);	/* xcl is negative */
   }
   return(y);
}

/* This function is called once, before generate() is called.  See main()
   for a description of its arguments.
*/

void initialize(long seed, long tmax)
{
    int j,jj;					/* auxilliary counters */

    srand((unsigned int)seed);		/* initialize random generator */

    for (j=0;;) {
       j =(int) (randn()*3000) -2000;	/* do not use few first random numbers */
       if(j>0) break;
    }
    for(jj=0;jj<j+10;jj++) randn();	
    			
		/* select and compute constants */
    rr_low = 0.48 + 0.05*randn();		/* select rr at maximal load */
    rr_high = rr_low * 1.8 + .05*randn();  /* select rr at minimal load */
    for(;;) {					/* prevent this rr to be too long */
       if(rr_high<1.150) break;
       rr_high-=0.050;
    }
    abs_min = rr_low * .7;  			/* select rr at minimal load */
    for(;;) {					/* prevent this rr to be too short */
       if(abs_min>0.35 && abs_min<rr_low-.05) break;
       if(abs_min<0.35) abs_min+=.015;
       else abs_min-=.015;
    }
    abs_max = rr_high * 1.52;			/* select theoretically maximal rr */
    for(;;) {					/* prevent this rr to be too long */
       if(abs_max<1.550) break;
       abs_max-=.05;
    }
			/* initialize previous rr intervals */
    for(j=0;j<STACK;j++) val[j]=(rr_low+rr_high)/2.0;
    for(j=0;j<STACK;j++) ip[j]=0.0;
    val_mean=(rr_low+rr_high)/2.0;
    ip_mean=0.0;

    int_pow=0;				/* integral power is in stable position */
    load0=def_load;			/* long term load default value*/
    load1=0;				/* permanent load, steps */
    load1c=0;				/* counter */
    load2=0;				/* permanent load, continuous */
    load2cp=0;				/* positive counter */
    load2cm=0;				/* negative counter */
    load3=0;				/* long term load, continuous */
    load3cp=0;				/* positive counter */
    load3cm=0;				/* negative counter */
    load4=0;				/* medium term load, continuous */
    load4cp=0;				/* positive counter */
    load4cm=0;				/* negative counter */
    load5=0;				/* medium term load, steps */
    load5c=0;				/* counter */
    load6=0;				/* short term load, steps */
    load6c=0;				/* counter */
    mem_prev=0.0;				/* no previous memory */

			/* set global time constants */
    start_ss=45000+30000*randn();		/* go to sleep whenever you like */
    per_ss2=20000+10000*randn();		/* duration about 7 hours */
							/* ajust so that you wake at least 1 hour before end */
    if(start_ss + per_ss2 >82000) start_ss = 82000- per_ss2;

    per_ss1=per_ss2*(0.7+0.2*randn());	/* duration of the first sleep part */
    per_ss2 -= per_ss1;				/* duratio of the second part */
    incr1 = (def_load*100)/ per_ss1;
    incr2 = (def_load*100)/ per_ss2;
    start_wk1=7000+1000*randn();		/* start increased load during the day */
    per_wk1=start_ss-start_wk1-10000-1000*randn();
    start_wk2=start_wk1+10000+1000*randn();	/* start second increased load during the day */
    per_wk2=start_wk1+per_wk1-start_wk2-10000-1000*randn();

    aux_counter=0;
    return;
}


/* This function is called once per RR interval.  It should return the length
   of the next (simulated) RR interval in seconds.

   The example code generates samples of a noisy sine wave.
*/

float generate(void)
{
    float rr;				/* new interval value */
    static float t;

    float xa,xbl,xbh,xcl,xch;		/* distribution constants */

    int j;					/* auxilliary counter */
    float tt;				/* auxilliary time */
    float corr1,corr2;			/* correction values for rr*/
    float change;				/* statistical instabilities of rr */

			/* compute load */
				/* long term */
    tt=t;
    for(;;) {						/* ajust for more than 24 hours */
       if(tt<=86400) break;
       else tt-=86400;
    }
 		/* medium load is default value during the day*/
    if(tt<start_ss || tt>start_ss+per_ss1+per_ss2) load0=def_load + 0.05*sin(tt*7.26/100000);	
    else {
       if(aux_counter>0) aux_counter--;
       else {
          aux_counter=100;
          if(tt>start_ss && tt<start_ss+per_ss1) load0-=incr1*2.0*randn();		/* first sleep part */
          if(tt>start_ss+per_ss1 && tt<start_ss+per_ss1+per_ss2) load0+=incr2*2.0*randn();		/* second sleep part */
          if(load0<0) load0=0;
          if(load0>def_load) load0=def_load + 0.05*sin(tt*7.26/100000);
       } 
    }
    if(tt>start_wk1 && tt<start_wk1+per_wk1) load0+=0.1;  
    if(tt>start_wk2 && tt<start_wk2+per_wk2) load0+=0.1;  
    if(tt>start_ss-10000 && tt<start_ss-3000) load0-=0.1;  

	/* permanent load changes, steps */
    if(load1c>0) load1c--;
    if(load1c==0) {
       load1c= (int) (1000*randn());		/* duration of the new offset */
       if(load0<def_load-0.05) load1=0.1*randn();		/* its magnitude */
       else load1=0.1*randn();		
    }
	/* permanent load changes, continuous */
    if(load2cp>0) {					/* first increase load */
       load2-=load2p;
       load2cp--;
    }
    else if(load2cm>0) {				/* after that decrese it */
       load2+=load2m;
       load2cm--;
    }
    if(load2cp==0 && load2cm==0) {			/* determine new period */
       load2=0;
       load2cp= (int) (10+100*randn());		/* up and down times */
       load2cm= (int) (load2cp*randn());
       load2cp -= load2cm;
       if(load0<def_load-0.05) load2p= 0.1*randn();		/* peak value */
       else load2p= 0.1*randn();
       load2m= load2p/((float) (load2cm));	/* decrease value */
       load2p= load2p/((float) (load2cp));	/* increase value */
    }

	/* long term load during the work, continuous */
    if(load3cp>0) {					/* first increase load */
       load3-=load3p;
       load3cp--;
    }
    else if(load3cm>0) {				/* after that decrease it */
       load3+=load3m;
       load3cm--;
    }
    if(load3cp==0 && load3cm==0) {			/* determine new period */
       load3=0;
       if(load0>def_load-0.05 && randn()<0.3) if(randn()<0.001) {
          load3=0.1;
          load3cp= (int) (4500+4000*randn());	/* total up and down times */
          load3cm= (int) (load3cp*randn());     /* decrease time */
          load3cp -= load3cm;				/* increase time */
          load3p= 0.1*randn()+0.1;			/* peak value */
          load3m= load3p/((float) (load3cm));	/* decrease value */
          load3p= load3p/((float) (load3cp));	/* increase value */
       }
    }

	/* medium term load during the work, continuous */
    if(load4cp>0) {					/* first increase load */
       load4-=load4p;
       load4cp--;
    }
    else if(load4cm>0) {				/* after that decrese it */
       load4+=load4m;
       load4cm--;
    }
    if(load4cp==0 && load4cm==0) {			/* determine new period */
       load4=0;
       if(load0>def_load-0.05 && randn()<0.1) if(randn()<0.001) {
          load4=0.1;
          load4cp= (int) (4500+4000*randn());	/* total up and down times */
          load4cm= (int) (load4cp*randn());     /* decrease time */
          load4cp -= load4cm;				/* increase time */
          load4p= 0.1*randn()+ 0.1;			/* peak value */
          if(randn()<0.1) load4p=load4p*(-2.0);
          if(load0+load1+load2+load3>0.7) load4p= 0.1*randn();
          load4m= load4p/((float) (load4cm));	/* decrease value */
          load4p= load4p/((float) (load4cp));	/* increase value */
       }
    }

	/* medium term load during the whole day, steps*/
    if(load5c>0) {
       load5c--;
    }
    else{
       load5=0.0;
       if(randn()<0.0005*(load0+load1+load2+load3+load4+0.1)) {
          load5c= (int) (2500+5000*randn());
          load5=0.15*randn()+0.1;
          if(load0+load1+load2+load3+load4>0.7) load5=load5/4.0;
          if(load0<def_load-0.05) load5=load5/2.0;
       }
    }

	/* short term load during the whole day, steps*/
    if(load6c>0) {
       load6c--;
    }
    else{
       load6=0.0;
       if(randn()<0.005*(load0+load1+load2+load3+load4+load5+0.1)) {
          load6c= (int) (10+50*randn());
          load6=0.1*randn()+0.05;
          if(load0+load1+load2+load3+load4+load5>0.9) load6=load6/4;
          if(val[0]<0.5) load6=0.0;
       }
    }

   

      
    heart_load=load0+load1+load2+load3+load4+load5+load6;		/* total heart load */
    if(heart_load>1.0) heart_load=1.0;			/* normalization */
    if(heart_load<0.0) heart_load=0.0;

			/* compute changes in integral power of the body */

    int_pow_change=heart_load+1.0-2*(rr_high-rr_low)/(val[0]+rr_high-2*rr_low);

    	/* integral power correction, long term stability */
      /* ** increse second constant if global oscilations are too high */ 
      /* maximal oscilation depression with C=0.015 */
    if(int_pow>0) corr1=-.002;
    else corr1=.002;
    if(int_pow>0 && int_pow>ip_mean && int_pow_change>0) corr1-=0.015*randn();
    if(int_pow<0 && int_pow<ip_mean && int_pow_change<0) corr1+=0.015*randn();
    if(int_pow>ip_mean && int_pow_change>0) corr1-=0.015*randn();
    if(int_pow<ip_mean && int_pow_change<0) corr1+=0.015*randn();
    if(int_pow_change>0) corr1-=0.003;
    if(int_pow_change<0) corr1+=0.003;


      /* recent history correction, use it only in stable situation */
    corr2=0;
    if(int_pow>-0.25 && int_pow<0.25 ) {	/* stable condition */	
       corr2+=(val_mean-val[0])*(0.0+1.0*randn())*1.2*val[0];       
       corr2+=(val_mean-val[1])*(0.0+1.0*randn())*1.4*val[0]; 

    }

		/* introduce instabilities */
		/* basic algorithm, use distribution to determine rr changes */
    xa=0.000;
    xbl=-0.010*val[0];
    xbh=0.010*val[0];
    xcl=-0.020*(1.0+val[0]);
    xch=0.030*(1.0+val[0]);
    change=distri(xa,xbl,xbh,xcl,xch);		/* use distribution to compute difference */

	/* asimetric instabilities */
    if(randn()<0.005 && val[0]>0.7)  change+=0.4*randn()*val[0];  

	/*predicted interval value is previous + corrections + instabilities */
    rr=val[0]+corr1+corr2+change;	

	/* suprises */
    if(mem_prev>0.001 || mem_prev<-0.001) {
       if(randn()<0.5) {
          rr-=mem_prev*(0.5+0.5*randn());
          mem_prev=0.0;
       }
    }
    else if(randn() < 0.002) {
       if(val[0]> 0.8 && randn()<0.1) mem_prev=(-1.0)*(0.1+0.1*randn());
       else{
          if(val[0]<1.0 && val[0]>0.6 && randn()<0.5) rr+=.2;
          else mem_prev=0.05+.1*randn();
       }
       rr+=mem_prev;
    }

			/* prevent this rr to be too short or too long*/

    for(;;) {					/* prevent this rr to be too short */
       if(rr>abs_min) break;
       if(int_pow>1.0) rr+=0.05*randn();
       else rr+=0.25*randn();
    }
    for(;;) {					/* prevent this rr to be too long */
       if(rr<abs_max) break;
       rr-=0.5*randn();
    }

    int_pow+=(int_pow_change);		/* update integral power */

    val_mean+=(rr-val[9])/10.0;		/* compute means */
    ip_mean+=(int_pow-ip[9])/10.0;
							/* save in stack */
    for(j=STACK-1;j>0;j--) val[j]=val[j-1];
    val[0]=rr;
    for(j=STACK-1;j>0;j--) ip[j]=ip[j-1];
    ip[0]=int_pow;

    t += rr;
    return (rr);
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
