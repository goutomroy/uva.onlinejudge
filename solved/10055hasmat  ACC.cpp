#include<stdio.h>
void main( )
{
long long a,b,c;
while(scanf("%lld %lld",&a,&b)==2)
{
if(a<0)
a=a*(-1);
if(b<0)
b=b*(-1);
if(a>b)
c=a-b;
else
c=b-a;
printf("%lld\n",c);
}
}