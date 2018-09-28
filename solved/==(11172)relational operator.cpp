#include<stdio.h>
void main( )
{
	long a,b,cas,i;
	scanf("%ld",&cas);
for(i=1;i<=cas;i++)
	{
	
		scanf("%ld%ld",&a,&b);
		if(a>b)
			printf(">\n");
		else if(a<b)
			printf("<\n");
		else
		printf("=\n");
	}
}