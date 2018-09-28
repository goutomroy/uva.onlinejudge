#include<stdio.h>
void main( )
{
	long long  n,sum;
	while(scanf("%lld",&n)==1)
	{
	sum=(n+1)*(n+1)/4-2;
	printf("%lld\n",(sum*6)+3);

	}

}