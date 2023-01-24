/* file: rrgen.c
     Entry number  : 161
     Authors       : Miguel A. García-González, Juan Ramos-Castro
     Organization  : Instrumentation and Bioengineering Division, 
				Electronic Engineering Department,
				Universitat Politècnica de Catalunya
				Barcelona, Spain
     email address : magarcia at eel.upc.es

   This program should compile without errors or warnings using:
	gcc -Wall rrgen.c -lm

   See http://www.physionet.org/challenge/2002/ for further information on
   the CinC Challenge 2002.

   This program was used to generate series rr32 and rr34 of the challenge
   dataset.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define	SPS	128	/* sampling frequency (determines quantization of
				RR intervals; see main()) */
#define PI 3.14159263
#define DIM 1024

void simcirc(int *, long, float *);
void sese(int, float , float *);
void moving(float *,int,int, float *);
void escalado(float *,float, float );
void fillmat(float [][5],float *,int , int);
float mean(float *,int);
float stdv(float *,int);
void prepro(float *,int);
float generate(void);
float bbv(float,float,float,float,float,float);
float sqsig(float, float);
void square(float *, float , int , float *);
float randn(void);
float randu(void); 

/**********************************/
/* GLOBAL VARIABLES             ***/
float lf1;
float f1;
float sd1;
float xrr[1024];
long tgmax;
/**********************************/


/* This function is called once, before generate() is called.  See main()
	for a description of its arguments.
*/

/***********************************************************************/






void initialize(long seed, long tmax)
{
	float mrr,ddn;
	int mat5[5]={33,10,5,2,1};
/* Initialize global variables */
	srand((unsigned int) seed);
   mrr=0.75+0.3*randu(); /* Mean rr */
   sd1=0.07*mrr+0.04*(randu()); /* generated signal standard deviation if mean rr equals 1 second */
   lf1=0.5+randu()/2.0; /* ratio related to lf/hf index */
   f1=2.0+18.0*randu(); /* ratio related to determistic no deterministic data */
	ddn=0.5*mrr+0.05*randu();
	tgmax=tmax;
	simcirc(mat5 , tmax, xrr);
	escalado(xrr,mrr,ddn);
	return;
}


/* This function is called once per RR interval.  It should return
 the length of the next (simulated) RR interval in seconds.
*/

float generate(void)
{
	static float rr,temp,dfr,fmod,bfp,bfd,bfm,dut,ph,ts,sdf;
	static float t,fr=0.15,kf,ss[512],ss2[512],bar[512];
	int index,k;
	static int lresp,kresp;
	index = (int) floor(t/( (long) tgmax)* ((int) DIM));
	if(index>(DIM-1)) index=DIM-1;
	if(t>=kf){
		kresp=0;
		if (fr > 0.35) fr=fr-0.01*randu();
		if (fr < 0.18) {fr=fr+0.03*randu();}
		else {fr=fr+0.02*(randu()-0.5);};
		lresp= (int) floor(250.0+100.0*randu());
		dfr=0.01*(1.0+fabs(xrr[index]-1))*randu();
		kf=t+xrr[index]*lresp;
      /*Fractal signal used for simulate complex behaviour */
		sese(512, 1.3+0.1*randu(),ss);
		moving(ss,512,100,ss2);
      fmod=0.000*randu();
      bfp=0.12*(1+0.3*(randu()-0.5));
      bfd=0.003*randu();
      bfm=0.07*randu();
      dut=80.0+10.0*randu();
      ph=PI/2.0*(1+0.1*randu());
      for (k=0;k<512;k++) {
			 ts=(t+xrr[index]*k);
	  bar[k]=sqsig(2.0*PI*bfp*(1.0+bfd/2.0*(sin(2.0*PI*bfm*ts)+1.0))*ts+ph,dut);
      }
		moving(bar,512,1,bar);
		prepro(bar,512);
		temp=mean(bar,512);
		for (k=0;k<512;k++) bar[k]=bar[k]-temp;
		sdf=0.05*randu()+0.1;
	}
    /* Simulate non chaotic data */
	temp=bbv(sd1,t,xrr[index],fr,dfr,fmod)*(3*ss2[kresp]+1);
	temp=temp+(pow(xrr[index],-1.5)+0.03*randu())*bar[kresp]*sd1/lf1;
	rr=temp*pow(xrr[index],1.5)+ss[kresp]*f1*sd1*sd1*pow(xrr[index],-1)/3+0.01*randn();
	rr=rr*pow(xrr[index],2)+xrr[index];
	if ((rr > 2) || (rr < 0.5)) rr=xrr[index];
	t += rr;
	kresp++;
   return (rr);
}


/********************* Aqui pongo mi codigo ***************************/
float randn(void)  /* Generador de numeros aleatorios con dist. gaussiana */
{
	float x1,x2,z;
	x1=((float) rand())/RAND_MAX;
	x2=((float) rand())/RAND_MAX;
	x1=x1+1e-10;
	z=sqrt(-2*log(x1))*cos(2*PI*x2);
	return(z);
}

float randu(void)   /* Generador de numeros aleatorios con dist. uniforme (0-1) */
{
	return((float) rand()/RAND_MAX);

}

float mean( float *vector, int dim) /* Calcula la media del vector */
{
	int k;
	float med=0;
	for(k=0;k<dim;k++)
	{
		med=med+vector[k];
	}
	med=med/dim;
	return(med);
}

float stdv(float *vector, int dim)  /* Calcula la desv. estandar ajustada vector*/
{
	int k;
	float var=0.0;

	for(k=0;k<dim;k++)
	{
		var=var+vector[k]*vector[k];
	}
	var=sqrt((var/dim-pow(mean(vector,dim),2.0))*dim/(dim-1));
	return(var);
}

void square(float *ti, float duty, int dim, float *x)
{
	int k;
	float w,temp;
	w=2.0*PI*duty/100.0;
	for(k=0;k<dim;k++){
		temp=-2.0*PI*floor(ti[k]/(2.0*PI));
		x[k]=ti[k]+temp;
		if(x[k]<w) {x[k]=1.0;}
		else {x[k]=0.0;}
	}

}

float sqsig(float ti, float duty)
{
	float w,temp;

	w=2.0*PI*duty/100.0;
	temp=-2.0*PI*floor(ti/(2.0*PI));
	temp=ti+temp;
	if(temp<w) {return(1.0);}
	else {return(0.0);}
}

void fillmat(float mat[][5],float *x,int col, int dim)
{
	int k;
	for(k=0;k<dim;k++) mat[k][col]=x[k];
}

void moving(float *v,int dim,int wl, float *vf)
{
	int k,j;
	for(k=wl;k<(dim-wl);k++) {
		vf[k]=0;
		for(j=-wl;j<=wl;j++) vf[k]=vf[k]+v[k+j];
		vf[k]=vf[k]/(wl*2.0+1.0);
	}
	for(k=0;k<wl;k++) {
		vf[k]=vf[k+wl];
		vf[dim-k-1]=vf[dim-k-wl];
	}
}

void prepro(float *v, int dim)
{
	int k;
	float ma,mi;
	mi=1.0e10;
	ma=-1.0e10;
	for(k=0;k<dim;k++) {
		if(v[k]<mi) mi=v[k];
		if(v[k]>ma) ma=v[k];
	}
	for(k=0;k<dim;k++) v[k]=(v[k]-mi)/(ma-mi)-0.5;
}

void escalado(float *v,float mrr, float dnd)
{
	float m;
	int k;
	float vf[1024];
	prepro(v,1024);
	for(k=0;k<1024;k++) v[k]=(v[k]+1.5)*dnd;
	m=mean(v,1024);
	for(k=0;k<1024;k++){
	 vf[k]=v[k]-m+mrr;
	 }
	moving(vf,1024,2,v);
	for (k=1;k<1023;k++) {
		if (fabs(v[k+1]-v[k])>0.05) v[k]=(v[k-1]+v[k+1])/2.0;
		}
	v[1023]=v[1021];
	v[1022]=v[1020];
	
	return;
}

void simcirc(int dcd[5], long tmax, float *x)
/* Genera el ritmo circadiano */
{
	float ct[1024][5];
	float ti[1024],xf[1024],ph,pes[5];
	int k,zc[5],zcp[5],pos[5],nzc=0;
	int i,n1,n2,j;

	ph=1.5*PI+PI*randu()*0.1;
	for(k=0;k<1024;k++) ti[k]=(PI*2.0*k*tmax/(3600.0*24.0))/1023+ph;
	square(ti,dcd[0]+randu(),1024,x);
	fillmat(ct,x,0,1024);
	nzc=0;
	for(k=0;k<1023;k++){
		if(x[k]!=x[k+1]) {
			zcp[nzc]=1023-k;

			nzc++;
		}
	}
	for(k=0;k<nzc;k++){
		zc[k]=zcp[nzc-k-1];

		}
	for(i=1;i<5;i++) {
		ph=(randu()-0.5)*PI/4;
		for(k=0;k<1024;k++) ti[k]=(PI*2.0*k*tmax/(3600.0*24.0))/1023.0+ph+(k+1)*PI/4;
		square(ti,dcd[i]+randn(),1024,x);
		fillmat(ct,x,i,1024);
		pes[i]=0.5*(randu()-0.5);
	}
	pes[0]=1.0;
	for(k=0;k<1024;k++) {
		x[k]=0;
		for(i=0;i<5;i++) x[k]=x[k]+ct[1023-k][i]*pes[i];
	}

	n1= (int) ceil(((43.0-7.11)*randu())/2*tmax/3600.0/24.0);
	n2= (int) floor((13.11*randu())/2*tmax/3600.0/24.0);
	zc[nzc]=1023;
	i=zc[0];
	for(k=0;k<nzc;k++){
		pos[k]= (int) ceil((i+zc[k+1])/2);
		i=zc[k+1];
	}
	i=0;
	for(j=0;j<nzc;j++){

		for(k=0;k<(pos[j]-i);k++) ti[k]=x[k+i];
		if(j%2 == 0) moving(ti,pos[j]-i,n1,xf);
		else moving(ti,pos[j]-i,n2,xf);
		for(k=0;k<(pos[j]-i);k++) x[k+i]=xf[k];
		i=pos[j];
		}
	sese(1024,1.5,ti);
	moving(ti,1024,40,xf);
	n1= (int) (3*randu()+2);
	moving(x,1024,n1,ti);
	for(k=0;k<1024;k++) x[k]=ti[k]+xf[k]*1.5;
	return;


}

void sese(int n, float d, float *x)
/* Genera serie fractal de longitud n y dimension d, la salida esta en x */
{
	static float h,b,ti[1024],q[1024],p[1024],a[1024],c[1024],temp,temp2;
	int k,n2,j;

	n2=n/2;
	h=2-d;
	b=1+2*h;
	for(k=0;k<n2;k++){
		ti[k]=k+1;
		if(k==0) p[k]=0;
		else p[k]=pow(k,-b/2)*randn();
		q[k]=2*PI*randu();
		a[k]=p[k]*cos(q[k]);
		c[k]=p[k]*sin(q[k]);
	}
	for(k=0;k<n;k++){
		temp=0;
		for(j=0;j<n2;j++){
			temp=temp+a[j]*cos(2*PI*ti[j]*k/n)+c[j]*sin(2*PI*ti[j]*k/n);
		}
		x[k]=temp;
	}
	for(k=0;k<(n-1);k++){
		x[k]=x[k+1]-x[k];
	}
	x[n]=x[n-1];
	temp=mean(x,n);
	temp2=stdv(x,n);
	for(k=0;k<n;k++) x[k]=(x[k]-temp)/temp2;
	return;

}

/* Beat to beat deterministic variatio due to respiration and baroreceptor */
float bbv(float gsd1,float t,float rm,float fr, float dfr, float fmod)
{
/* gsd1: generated signal standard deviation if mean rr equals 1 second */
/* rm:  mean rr */
/* blf1: ratio related to lf/hf index */
/* bf1: ratio related to determistic no deterministic data */
/* t: simulation time */
/* fr: mean respiratory frequency */


   float resp; /*  */


   resp=(1.0+sin(2.0*PI*fr/rm*(1.0+dfr*sin(2.0*PI*fmod*t))*t))/2.0-0.5;
	resp=resp*(pow(rm,1.5)+0.001*randn())*gsd1;

	return(resp);

}



/***********************************************************************/


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
