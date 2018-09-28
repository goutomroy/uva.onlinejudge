#include<stdio.h>
int main ( )
{
	long long n,d,k,p;
	while(scanf("%lld",&n)==1 && n>=0)
	{
		if(n==0)
			printf("1\n");
		else
		{
			k=(n*n);
			d=(k+n)/2;
			p=d+1;
			printf("%lld\n",p);
		}
	}
	return 0;
}