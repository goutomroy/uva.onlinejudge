#include<stdio.h>
long long  cyle (long long  a,long long  b);

void main( )
{
long long  c,d,max;

while(scanf("%lld %lld",&c,&d)==2)
{
if(c>d)
{
c^=d^=c^=d;
max=cyle(c,d);
printf("%lld %lld %lld\n",d,c,max);
}
else
{
max=cyle(c,d);
printf("%lld %lld %lld\n",c,d,max);
}

}
}
long long  cyle (long long  a,long long  b)
{
long long  l,max=0,r=a;
while(a<=b)
{
l=1;
while(a!=1)
{
 if(a%2==0)
a=a/2;
else
a=3*a+1;
l++;
}

if(l>max)
max=l;

r++;
a=r;
}


return max;
}


