#include<stdio.h>
#include<algorithm>
using namespace std;
void main()
{
	long i,j,p,n,a[100],cas;
	scanf("%ld",&cas);
	while(cas--)
	{
		scanf("%ld",&n);
		if(n==1)
			printf("1\n");
		else if(n==0)
			printf("10\n");
		else
		{
		i=p=0;j=9;
		while(n!=1 && j>1)
		{			
				if(n%j==0)
				{
				a[i++]=j;
				n=n/j;
				j=9;
				}
				else
					j--;
		}
		if(j==1)
			printf("-1");
		else
		{
			sort(&a[0],&a[i]);
			for(j=0;j<i;j++)
				printf("%ld",a[j]);
		}
		printf("\n");
	}
	}
}
