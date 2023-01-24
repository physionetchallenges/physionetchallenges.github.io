/* file: rrgen.c
     Entry number  : 142
     Author(s)     : Albert C-C. Yang, Cheng-Hsi Chang, Huey-Wen Yien
     Organization  : Taipei Veterans General Hospital, Taipei, Taiwan
                     School of medicine, National Yang-Ming Univeristy, Taiwan
     email address : s841016 at ym.edu.tw

   This program should compile without errors or warnings using:
	gcc -Wall rrgen.c -lm

   See http://www.physionet.org/challenge/2002/ for further information on
   the CinC Challenge 2002.

   This program was used to generate series rr44 and rr49 of the challenge
   dataset.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "prob-142.h"    
  
  /* header file defines probability table of each symbolic sequence (columns) by different RR intervals (20ms / row)*/

#define	SPS	128	    /* sampling frequency (determines quantization of RR intervals;  see main()) */

    float rr;               /* RR interval */ 
    float oldrr;            /* previous RR interval */
    float mean_rr;          /* mean RR interval within 1 minute */

    float total_t;          /* time counter */

    int sequence_SF;        /* short fluctuation symbolic sequence of 8-bit binary number */
    int sequence_LF;        /* long fluctuation symbolic sequence of 2-bit binary number */

    int index_LF;           /* long fluctuation index as position index in probability table */
    int index_diurnal[96];  /* diurnal index of a day, 15 minutes per element */

    int incidence_APC;      /* incidence of atrial ectopy in unit of 1/100000 */
    int cycles_REM;         /* cycles of Non-REM to REM stage during sleep, normally 3-5
                                  Ref: N Engl J Med 1993; 328:303-307, Feb 4, 1993  */
    int incidence_REM[288]; /* incidence of heart rate burst during REM (rapid eye movement stage of sleep)
                               5 minute per element */

    int flag_rhythm;        /* flag control of rhythm
                               0: normal sinus rhythm
                               1: atrial ectopy
                               2: Exaggerate HR fluctuation during REM stage of sleep */

    int flag_APC;           /* flag control of APC (Atrial premature complex) */
    int inc_REM;            /* increment control of HR during REM */

    float REM_RRlowlimit;   /* low limit of RR interval (Maximal burst HR) during REM stage of sleep */

void initialize(long seed, long tmax)
{
    int i,j;
    int sleeptime,sleepduration;  /* time of sleep and duration of sleep */

    srand((unsigned int)seed);    /* initiate random number generator */

    /* following codes initiate global variables */

    rr = 0.6 + (RAND_MAX-(float)rand())/RAND_MAX*0.4;            /* random number between 0.6 to 1 as initial RR interval */
    mean_rr = 0.7 + (RAND_MAX-(float)rand())/RAND_MAX*0.2;       /* random number between 0.7 to 0.9 as initial mean RR interval */
    oldrr = rr;                                                  /* set initial old rr */

    total_t = 0;                                                 /* initiate time counter */

    sequence_SF = (int)(RAND_MAX-(float)rand())/RAND_MAX*255;    /* set a random number between 0 and 2^8 -1 as initial short fluctuation symbolic sequence */ 
    sequence_LF = (int)(RAND_MAX-(float)rand())/RAND_MAX*3;      /* set a random number between 0 and 2^2 -1 as initial long fluctuation symbolic sequence */ 
    
    index_LF = ((int)(mean_rr*1000))/20-40;                      /* index of long fluctuation */ 

    incidence_APC = (int)((RAND_MAX-(float)rand())/RAND_MAX*10);
                                                                 /* incidence of atrial ectopy in (1/100000) */ 

    flag_rhythm = 0;                                             /* initiate flag status as normal sinus rhythm */
    flag_APC = 0;                                                /* inactivate APC flag status */

    /* Following codes simulate diurnal influence on RR dynamics */

    sleeptime = 16+(int)((RAND_MAX-(float)rand())/RAND_MAX*40);     
                                                                 /* set time of sleep, at least 4 hours after similation start */
    sleepduration = 16+(int)((RAND_MAX-(float)rand())/RAND_MAX*20); 
                                                                 /* set duration of sleep, at least 4 hours of sleep */

    cycles_REM = 3+(int)((RAND_MAX-(float)rand())/RAND_MAX*2); 
                                                                 /* set cycles of REM, at least 3 during sleep */

    for(i=0;i<=95;i++)                                           /* initiate array by filling 0 */
       index_diurnal[i] = 0;
                                                                 /* set random diurnal index lower than -10 while sleep */
    for(i=sleeptime ; i<=(sleeptime+sleepduration) ; i++)              
       index_diurnal[i] = -10 - (int)((RAND_MAX-(float)rand())/RAND_MAX*4);
                                                                 
                                                                 /* make RR smooth up and down while sleep and wake up */
    for(i=sleeptime ; i<=(sleeptime+3) ; i++)              
       index_diurnal[i] = index_diurnal[i]/(5-i+sleeptime);
    for(i=sleeptime+sleepduration-3 ; i<=(sleeptime+sleepduration) ; i++)              
       index_diurnal[i] = index_diurnal[i]/(5+i-sleeptime-sleepduration);

    for(i=0;i<=287;i++)                                          /* set baseline HR burst incidence */
       if ( index_diurnal[i/3] < -5 ) incidence_REM[i] = 1;

    for(i=1 ; i<=cycles_REM ; i++)                               /* incidence of HR burst during REM stage */ 
    {
      for(j=1 ; j <= 3+(int)((RAND_MAX-(float)rand())/RAND_MAX*5) ; j++)
        incidence_REM[j + ( sleeptime + sleepduration/cycles_REM*(i-1) + 2 ) * 3] = 5 + (int)((RAND_MAX-(float)rand())/RAND_MAX*5);
    }               
 
    return;
}

float grandom(void)         /* gausian noise generating function */
{
    float result;           /* gausian distributed random number */
    float urandom1;         /* uniform distributed random number A */
    float urandom2;         /* uniform distributed random number B */

    urandom1 = (RAND_MAX-(float)rand())/RAND_MAX;    
                            /* generating a uniform distributed random number A between 0 and 1*/
    urandom2 = (RAND_MAX-(float)rand())/RAND_MAX;    
                            /* generating a uniform distributed random number B between 0 and 1*/

    result = sqrtf(-2*logf(urandom1))*sinf (2*M_PI*(urandom2));    
                            /* generating a gausian distributed random number according to urandom1 and urandom2 */
    return (result);
}


float generate(void)
{
    float rramp;           /* increment of next RR interval */
    float prr;             /* probability of transition from current sequence to next one */
    int position;          /* position index of probability table according to current RR interval */


    /* if APC occurrs, then switch rhythm flag to 1 */

    if (  (( (RAND_MAX-(float)rand())/RAND_MAX ) <= ((float)incidence_APC/100000) ) )
    { 
     flag_rhythm = 1;
     flag_APC = 1;
    }

    /* If REM occures, then switch rhythm flag to 2 */  

    if ( ((( (RAND_MAX-(float)rand())/RAND_MAX ) <= ((float)incidence_REM[(int)(total_t)/300]/1000))) && (flag_rhythm==0) )
    { 
     flag_rhythm = 2;  
     inc_REM = 0;
     REM_RRlowlimit = 0.6 + (RAND_MAX-(float)rand())/RAND_MAX*0.25;  /* set Maximal burst HR */
    }

  /* following codes generate short (beat to beat) fluctuaion according to different type of rhythm */

  switch(flag_rhythm)    /* rhythm switcher */
  {
    case   0:            /* normal sinus rhythm */

       rramp = copysignf(grandom()/660/(1+0.25*expf(logf(6)/10*(index_LF+index_diurnal[(int)(total_t)/900])))*25,1);     
       
       /* increment of next RR interval is determined by following factor
          1. absolute value of gausian noise (mean+-SD 0.8+-0.6)
          2. multiply by amplitude factor
                       25   
             ---------------------
             660 ( 1 + a*exp ( bx ))

             a = o.25
             b = log(6)/10
             x standford net effect of long fluctuation and diurnal index */

       /* following codes then determine the position index of probability table according to current RR interval
          each rows in matrix represent range of 20 ms , thus position = rr (ms) / 20 */

       if (  ((int)(rr*1000) % 20)==0 )                                                            
       {
        position = (int)(rr*1000) / 20 ;   
       }
       else 
       {  
        position = ( (int)(rr*1000) / 20 )+1;  
       }
 
       /* once postition index is determined, 
          we can determine transition probability according to table */
 
       prr = Prob_short[sequence_SF][position + index_LF + index_diurnal[(int)(total_t)/900] ];     

       /* probability of sequence transition eg. 1(10010) to (10010)1 or (10010)0 
          determined by [current sequence] and [current RR intervals + long-fluctuation index + diurnal index] */ 

       /* the last bit of resuting sequence determins the next increment, 
          
          0: negative increment (decrease in RR) 
          1: postive increment (increase in RR) 
          
          Following (if..else) statement controls the transition of sequences from current to next one according to prr 
          First the program generate a uniform-random number to compare with prr 
          if it is small than prr, then sequence transition will be (Lower 7 bit << 1) +1 resulting in increasing RR 
                              else then sequence transition will be (Lower 7 bit << 1)    resulting in decreasing RR 
       */

      if ( ((RAND_MAX-(float)rand())/RAND_MAX) < prr )                                                              
      {                                                                                              
       sequence_SF = ( ( sequence_SF - ( (sequence_SF >> 7) << 7 ) ) << 1 ) + 1;  /* Raise lower 7 bits by 1 bit and plus 1 in tail */
       rr+=rramp;                                                                 /* increase RR interval */
      }
      else 
      {
       sequence_SF = ( sequence_SF - ( (sequence_SF >> 7) << 7 ) ) << 1;          /* Raise lower 7 bits by 1 bit and plus 0 in tail */
       rr-=rramp;                                                                 /* decrease RR interval */
      }
      break;        /* end of case 0 */

    case    1:      /* APC ectopy */   
  
       switch(flag_APC)
       {
         case 1:         /* premature beat */
            rr = oldrr/(2+((RAND_MAX-(float)rand())/RAND_MAX*0.1));
            flag_APC = 2;
            break;
         case    2:      /* Compensatory beat */
            rr = oldrr/2*(5+((RAND_MAX-(float)rand())/RAND_MAX*0.1));
            flag_APC = 3;
            break;
         case    3:      /* Return to normal sinus rhythm */
            rr = oldrr/(5+((RAND_MAX-(float)rand())/RAND_MAX*0.1))*4;
            flag_APC = 0;
            flag_rhythm=0;
            break;
        }
        break;      /* end of case 1 */

    case    2:      /* simulate HR burst during REM stage of sleep */


       if ( (oldrr >= REM_RRlowlimit) && (inc_REM<30) )
       {
        inc_REM+=1;
        rramp = copysignf(grandom()/500/inc_REM*55,1);  /* decreased RR interval until approaching to limit */
        if (rramp>0.1)
          rramp = copysignf(grandom()/500/inc_REM*30,1);
        rr-=rramp;
       }
       else
       {
        rramp = copysignf(grandom()/500*20,1);  /* give control back to normal sinus rhythm */
        rr+=rramp;
        flag_rhythm=0;
       }
       break;        /* end of case 2 */
          

  }
  
    total_t+=rr;    /* count time */

    /* following codes generate long fluctuaion (minute to minute), principle similar to above */

    if ( ( (int)(total_t)/60 - (int)(total_t-rr)/60 ) > 0  )        /* check current time every minute */
    {
       rramp = copysignf(grandom()/1000/((unsigned int)index_diurnal[(int)(total_t)/900]+1)*16,1);         
       
       if (  ((int)(mean_rr*1000) % 100)==0 )          /* principle same as short fluctuation */
       {
        position = (int)(mean_rr*1000) / 100 ;   
       }
       else 
       {  
        position = ((int)(mean_rr*1000) / 100)+1;  
       }
   
       prr = Prob_long[sequence_LF][position];

       if ( ((RAND_MAX-(float)rand())/RAND_MAX) < prr )                                                              
       {                                                                                              
        mean_rr+=rramp;
        sequence_LF = ( ( sequence_LF - ( (sequence_LF >> 1) << 1 ) ) << 1 )+1;
       }
       else 
       {
        mean_rr-=rramp;
        sequence_LF = ( sequence_LF - ( (sequence_LF >> 1) << 1 ) ) << 1;
       }
   
        index_LF = ((int)(mean_rr*1000))/20-40;          /* calculate new long fluctuation index */    
    }

    oldrr = rr;
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

