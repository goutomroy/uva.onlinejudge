#include<stdio.h>
#include<string.h>

int n=17;

void main()
{
	char c;
	int sum=0;

	while(1==scanf("%c",&c))
	{
		if(c=='1')
			sum++;

		if(c=='#')
		{
			if(sum%n==0)
				printf("YES\n");			

			else
				printf("NO\n");

			sum=0;
		}
	}
}