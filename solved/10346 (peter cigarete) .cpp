#include<stdio.h>
void main( )
{
long long toci,butt,n,k;
while(scanf("%lld%lld",&n,&k)==2)
{
toci=butt=0;
while(n>0)
{
toci=toci+n;
butt=butt+n;
n=butt;
butt=butt%k;
n=n/k;
}
printf("%lld\n",toci);
}
}