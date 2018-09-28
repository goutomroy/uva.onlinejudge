#include<stdio.h>
#include<math.h>
int checkprime(long long x);
int main( )
{
long long n,m,d,k,r,l,w;
while(scanf("%lld",&n)==1 && n!=0)
{
d=3;m=0;l=0;w=1;
if(n==4)
printf("%lld\n",w);
else
{
while(1)
{
k=0;r=0;
m=n-d;
if(d>m)
break;
k=checkprime(m);
r=checkprime(d);
if(k==1 && r==1)
{
l++;
d=d+2;
}
else
d=d+2;
}
printf("%lld\n",l);
}
}
return 0;
}
int checkprime(long long x)
{
long long root,i;
if(x==1)
return 0;
if(x==2)
return 1;
if(x%2==0)
return 0;
root=sqrt(x);
for(i=3;i<=root;i+=2)
{
if(x%i==0)
return 0;
}
return 1;
}


