#include<stdio.h>

void main( )
{
long m,n;

while(scanf("%ld%ld",&m,&n)==2 && (m!=1||n!=1))
{
while(m!=n)
{
	if(m>n)
	{
	printf("R");
	m-=n;
	}
	else
	{
	printf("L");
	n-=m;
	}
	}
	printf("\n");
}

}