#include<stdio.h>
void main( )
{
long double g1,g2,d1,d2,x[1009],y[1009],dog,gop,g,d;
long n,i,k;
while(scanf("%ld%Lf%Lf%Lf%Lf",&n,&g1,&g2,&d1,&d2)==5)
{
for(i=0;i<n;i++)
scanf("%Lf%Lf",&x[i],&y[i]);
k=0;
for(i=0;i<n;i++)
{
gop=(g1-x[i])*(g1-x[i]) + (g2-y[i])*(g2-y[i]);
dog=(d1-x[i])*(d1-x[i]) + (d2-y[i])*(d2-y[i]);
gop=gop*4.000;
if(dog>=gop)
{
printf("The gopher can escape through the hole at (%.3Lf,%.3Lf).\n",x[i],y[i]);
k=1;
break;
}
}
if(k==0)
printf("The gopher cannot escape.\n");
}
}




