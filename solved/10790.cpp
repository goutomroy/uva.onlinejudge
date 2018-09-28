#include<stdio.h>
void main( )
{
long long cas=1,a,b,result;
while(scanf("%lld%lld",&a,&b)==2 && (a>0 && b>0))
{
a=a*(a-1);
b=b*(b-1);
result=(a*b)/4;
printf("Case %lld: %lld\n",cas,result);
cas++;
}
}

