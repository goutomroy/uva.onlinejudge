#include<stdio.h>
void main( )
{
	long a[14]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
	long n;
	while(scanf("%ld",&n)==1 && n!=0)
	printf("%ld\n",a[n]);
}
