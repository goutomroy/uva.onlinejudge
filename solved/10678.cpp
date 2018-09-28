#include<stdio.h>
#include<math.h>
# define pi 2*acos(0.0)
void main( )
{
long double l,d,area,b,a;
long i,n;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%Lf %Lf",&d,&l);
a=l/2;
b=d/2;
b=sqrtl(a*a-b*b);
area=pi*a*b;
printf("%.3Lf\n",area);
}
}
