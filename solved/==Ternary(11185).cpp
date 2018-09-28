#include<stdio.h>
void main( )
{
	long num,a[20],j,i,k=0;
	while(scanf("%ld",&num)==1  && num>=0)
	{

		if(num==0)
		{
			printf("0\n");
			continue;
		}
		i=0;
		while(num!=0)
		{
			a[i++]=num%3;
			num=num/3;
		}
		for(j=i-1;j>=0;j--)
			printf("%ld\n",a[j]);



	}
}