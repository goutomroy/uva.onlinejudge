#include<stdio.h>
int main( )
{
	long  n,t,m;
	while(scanf("%ld",&n)==1 && n!=0)
	{
m=n;
		t=91;
		if(n<=100)
			printf("f91(%ld) = %ld\n",m,t);
		else
			printf("f91(%ld) = %ld\n",m,n-10);
	}
	return 0;
}