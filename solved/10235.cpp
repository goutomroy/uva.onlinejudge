#include<stdio.h>
#include<math.h>
int checkprime(long long n);
void main( )
{
long long n,k,q,p,i,a[19],sum,x,j,l;
while(scanf("%lld",&n)==1)
{
x=n;
k=checkprime(n);
i=0;sum=0;
while(n!=0)
{
a[i++]=n%10;
n=n/10;
}
for(j=0,l=i-1;j<i;j++,l--)
sum=sum+(a[j]*pow(10,l));
p=checkprime(sum);
if(k==0)
printf("%lld is not prime.\n",x);
else if(k==1 && p==1 && sum!=x)
printf("%lld is emirp.\n",x);
else
printf("%lld is prime.\n",x);

}
}
int checkprime(long long n)
{
long long i,root;
if(n<=1)
return 0;
 if(n==2)
return 1;
if(n%2==0)
return 0;
root=sqrt(n);
for(i=3;i<=root;i+=2)
{
if(n%i==0)
return 0;
}
return 1;
}
