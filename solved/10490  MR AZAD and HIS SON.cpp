#include<stdio.h>
#include<math.h>
int checkprime(long long x);
void main( )
{
long long n,x,y,k,p;
while(scanf("%lld",&n)==1 && n!=0)
{
k=0;p=0;
p=checkprime(n);
x=pow(2,n)-1;
k=checkprime(x);
if(k==1)
{
y=x*pow(2,n-1);
printf("Perfect: %lld!\n",y);
}
else
{
	if(p==1)
printf("Given number is prime. But, NO perfect number is available.\n");
	else
printf("Given number is NOT prime! NO perfect number is available.\n");
}
}
}
int checkprime(long long x)
{
long long i,root;
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



