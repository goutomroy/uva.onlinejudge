#include<stdio.h>
#include<string.h>
void main( )
{
long n,i,a[500],j,m,k,sum;
while(scanf("%ld",&n)==1 &&n!=0)
{
	if(n==1)
		printf("The parity of %ld is %ld (mod 2).\n",n,n);
	else
	{
	k=0;sum=0;m=n;
	while(n!=1)
	{
		if(n%2==0)
			a[k++]=0;
		else
			a[k++]=1;
		n=n/2;
	}
	a[k++]=1;
	for(i=0;i<k;i++)
		sum=sum+a[i];
printf("The parity of ");
for(i=k-1;i>=0;i--)
printf("%ld",a[i]); 
	   printf(" is %ld (mod 2).\n",sum);
	}
}
}