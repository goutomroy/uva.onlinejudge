#include<stdio.h>
#include<math.h>
int checkprime(long long x);
void main( )
{
	long long n,i,p,max,l,k,q,c,fac;
	while(scanf("%lld",&n)==1 && n!=0)
	{
if(n%2==1)
{
fac=n-2;
k=checkprime(fac);
if(k==1)
printf("%lld:\n2+%lld\n",n,fac);
else
printf("%lld:\nNO WAY!\n",n);
}
else
{

		max=0;q=0;c=0;
		i=2;
		while(i<=n/2)
		{
			p=n-i;
			k=checkprime(i);
			l=checkprime(p);
			if(k==1 && l==1)
			{
				q=1;
			break;
			}
			if(c==0)
			{
				c++;
				i++;
			}
			else
				i=i+2;

		}
		if(q==0)
			printf("%lld:\nNO WAY!\n",n);
		else
		printf("%lld:\n%lld+%lld\n",n,i,p);
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
for( i=3;i<=root;i+=2)
{
if(x%i==0)
return 0;
}
return 1;
}
