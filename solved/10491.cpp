#include<stdio.h>
void main( )
{
double cow,car,show,k;
while(scanf("%lf%lf%lf",&cow,&car,&show)==3)
{
k=((1.0*(cow*car+car*(car-1))/(cow+car-show-1))/(cow+car));
printf("%.5lf\n",k);
}
}