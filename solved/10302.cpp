#include<stdio.h>
void main( )
{
long double x,n,pow,y;
while(scanf("%Lf",&n)==1)
{
x=(n/2)*(n/2);
y=(n+1)*(n+1);
pow=x*y;
printf("%0.0Lf\n",pow);
}
}