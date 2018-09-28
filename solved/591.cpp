#include<stdio.h>
void main( )
{
long long n,i,ava,d,arr[400],sum,l=1;
while(scanf("%lld",&n)==1 && n!=0)
{
sum=0;
for(i=0;i<n;i++)
scanf("%lld",&arr[i]);
for(i=0;i<n;i++)
sum=sum+arr[i];
ava=sum/n;
sum=0;
for(i=0;i<n;i++)
{
d=ava-arr[i];
if(d<0)
d=d*-1;
sum=sum+d;
}
printf("set #%lld\n",l);
if(sum==0)
printf("The minimum number of moves is 0.\n");
else
printf("The minimum number of moves is %lld.\n",sum/2);
l++;
}
}


