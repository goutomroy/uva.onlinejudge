#include<stdio.h>
void main( )
{
 long long n,a[18],i,j,k,sum,max,p,cas=1;
while(scanf("%lld",&n)==1)
{
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
max=0;
for(i=0;i<n;i++)
{
p=a[i];
if(p>max)
max=p;
for(j=i+1;j<n;j++)
{
p=p*a[j];
if(p>max)
max=p;
}
}
if(max<=0)
printf("Case #%lld: The maximum product is 0.\n\n",cas++);
else
printf("Case #%lld: The maximum product is %lld.\n\n",cas++,max);
}
}
