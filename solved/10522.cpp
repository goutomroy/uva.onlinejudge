#include<stdio.h>
#include<math.h>
void main( )
{
long  n,l=0;
long double Ha,Hb,Hc,a,b,c,result,goutom;
scanf("%ld",&n);
while(scanf("%Lf%Lf%Lf",&Ha,&Hb,&Hc)==3)
{
if(Ha<=0 || Hb<=0 || Hc<=0)
{
printf("These are invalid inputs!\n");
l++;
if(l==n)
break;
}
else
{
a=1/Ha;
b=1/Hb;
c=1/Hc;
goutom=1/((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
if(goutom<0)
{
printf("These are invalid inputs!\n");
l++;
if(l==n)
break;
}
else
{
result=sqrtl(goutom);
printf("%.3Lf\n",result);
}
}
}
}