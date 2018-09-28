#include<stdio.h>
void main( )
{
	long i,m,n,k,d;
	while(scanf("%ld",&n)==1  &&  n!=0)
	{
		if(n==1)
			k=1;
		else
		{
		d=1;
		while(d<n)
		{
			k=d;
			d=d*2;
		}
		k=(n-k)*2;
		}
		printf("%ld\n",k);
	}
}
