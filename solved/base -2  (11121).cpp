#include<stdio.h>
void love(long n)
{
	char result[500];
	long c=0,i,r;
	while(n)
	{
r=n%(-2);
n=n/(-2);
if(r<0)
{
	r=r*(-1);
	n++;
}
result[c++]=r+48;
	}
	for(i=c-1;i>=0;i--)
		printf("%c",result[i]);
}
void main()
{
	long cas,n,k;
	scanf("%ld",&cas);
	for(k=1;k<=cas;k++)
	{
		scanf("%ld",&n);
		printf("Case #%ld: ",k);
		if(n==0)
			printf("0");
		else
			love(n);
		
		printf("\n");
	}
}