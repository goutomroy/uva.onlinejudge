#include<stdio.h>
long long combi(long long n,long long m);
void main( )
{
	long long n,m,k;
	while(scanf("%lld%lld",&n,&m)==2  && (n>=1 && m>=0))
	{
		k=combi(n,m);
		printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,k);
	}
}
long long combi(long long n,long long m)
{
	long long k,i,j;
long long c,d;
	c=d=1;
	k=(m>(n-m))?m:(n-m);
	for(j=1,i=k+1;(i<=n);i++,j++)
	{
		c*=i;
		d*=j;
		if(!(c%d) && (d!=1))
		{
			c/=d;
			d=1;
		}
	}
	return c;
}
		