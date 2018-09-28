#include<stdio.h>
#include<math.h>
#define P .0000000000001

void main()
{
  double R,N,I,E,r,ang,pi,a,b;

  pi=2*acos(0);
  while(scanf("%lf%lf",&R,&N)==2)
  {
	  if(N==1)
	  {
		  r=R;
		  I=0.0;
		  E=0.0;
	  }
	  else
	  {
		  ang=pi/N;
		  r=(sin(ang)/(1+sin(ang)))*R;
		  a=(R-r)*cos(ang)*r;
		  b=2*(((pi*r*r)/4.0)-((ang/2.0)*r*r));
		  I=N*(a-b);
		  E=pi*(R*R-(N*r*r))-I;
	  }

    printf("%.10lf %.10lf %.10lf\n",(r+P),(I+P),(E+P));
  }
}
*************************************************
why wa?
#include<stdio.h>
#include<math.h>
#define err 0.0000000001
#define pi 2*acos(0.0)
 void main( )
 {
	 long double R,r,n,theta,kon,k,a1,a2,a3;
	 while(scanf("%Lf%Lf",&R,&n)==2)
	 {
  if(n==1)
{
a2=a3=0;
  printf("%.10Lf %.10Lf %.10Lf\n",R,a2,a3);
continue;
}
else
{
		 theta=pi/n;
		 r=(R*sin(theta))/(1+sin(theta));
		 k=r/tan(theta);
		 kon=asin((sin(theta)*k)/r)*2;
		 a1=0.5*k*r*2;
		 a2=fabs((a1-(0.5*r*r*kon))*n);
		 a3=(pi*R*R)-((pi*r*r*n)+a2);
		 printf("%.10Lf %.10Lf %.10Lf\n",r+err,a2+err,a3+err);
}
         		 
	 }
 }

*********************************************