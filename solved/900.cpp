#include<stdio.h>
void main( )
{
long long  a[51],i=2,j=2,n,sum,f1=1,f2=1;
for(a[1]=1 ;i<=50;i++)
{
sum=f1+f2;
a[j++]=sum;
f2=f1;
f1=sum;
}
while(scanf("%lld",&n)==1 && n!=0)
printf("%lld\n",a[n]);

}

