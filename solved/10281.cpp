#include <stdio.h>
#define hour 3600.0
#define min 60
#define max 10000
char gangster[max];

void main(  )
{
long speed=0,newspeed,n,currentt,h,m,s,time;
long double distance=0;
        time=0;
while('\0'!=gets(gangster))
   {
n=sscanf(gangster,"%ld:%ld:%ld %ld",&h,&m,&s,&newspeed);
	   
currentt=h*(long)hour+m*min+s;
	   
distance=distance+(currentt-time)/hour*speed;
	   
time=currentt;
	   
if(n==3)
printf("%02ld:%02ld:%02ld %0.2Lf km\n",h,m,s,distance);
	   
else if(n==4)
speed=newspeed;
   }
}

