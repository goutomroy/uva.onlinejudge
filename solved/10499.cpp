#include<stdio.h>
void main( )
{
	long long n,area;
	char ch='%';
	while(scanf("%lld",&n)==1 && n>0)
	{
		if(n==1)
	printf("0%c\n",ch);
			
			
	
		else
		{
		area=n*25;
		printf("%lld%c\n",area,ch);
		
		}
	}
}
