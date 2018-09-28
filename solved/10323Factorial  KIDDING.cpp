#include<stdio.h>
void main( )
{
long long  x,i,n;

	while(scanf("%lld",&n)==1)
	{
		
		if(n<0)
		{
		if(n%2==0)
			printf("Underflow!\n");
		else
			printf("Overflow\n!");

		
		}
		else
		{
		if(n<8)
			printf("Underflow!\n");
		else if(n>13 )
			printf("Overflow!\n");
		else
		{
		x=1;
		for(i=1;i<=n;i++)
			x=i*x;
		printf("%lld\n",x);
		}
	}
	}
}
