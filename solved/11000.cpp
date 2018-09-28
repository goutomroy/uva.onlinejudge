#include<stdio.h>
void main( )
{
long long  a[69],i,j,n,sum,f1=1,f2=1;
a[0]=1;
for(i=2,j=1;i<62;i++)
{
sum=f1+f2;
a[j++]=sum;
f2=f1;
f1=sum;
}
while(scanf("%lld",&n)==1 && n>=0)
printf("%lld %lld\n",a[n]-1,a[n+1]-1);

}

