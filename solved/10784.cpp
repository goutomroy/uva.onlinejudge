#include<stdio.h>
#include<math.h>
void main( )
{
long long   result,cas=1;
long double N,a,b,c;
while(scanf("%Lf",&N)==1 && N!=0)
{
a=1;b=-3;c=-2*N;
result= ceil((-b + sqrtl(b*b - 4*a*c)) / 2*a);
printf("Case %lld: %lld\n",cas,result);
cas++;
}
}
