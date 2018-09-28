#include<stdio.h>
#include<math.h>
void main( )
{
long double a,b,c,s,d;
while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3)
{
	if(a==0 && b==0 && c==0)
printf("The radius of the round table is: 0.000\n");
	else
	{
s=(a+b+c)*0.5;

if(s-a<=0.000||s-b<=0.000 || s-c<=0.000)
	d=0.000;
else
d=sqrtl((s-a)*(s-b)*(s-c)/s);

printf("The radius of the round table is: %.3Lf\n",d);
	}
  }
  }