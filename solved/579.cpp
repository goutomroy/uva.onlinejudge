#include<stdio.h>
int main( )
{
double h,m,d,angle,hang,mang;
char ch;
while(scanf("%lf%c%lf",&h,&ch,&m)==3 && h!=0 )
{
if(m==0)
d=0;
else
d=(m/60)*30;
hang=(h*30)+d;
mang=m*6;
angle=hang-mang;
if(angle<0)
angle=angle*-1;
if(angle>180)
angle=360-angle;
printf("%.3lf\n",angle);
}
return 0;
}
