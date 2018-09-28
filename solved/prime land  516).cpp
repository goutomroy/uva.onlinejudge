#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
long a[1000],fre[1000],digit[1000];
int primefac(long n);
int  main( )
{
	long i,j,total;
	char *ptr,str[1000];
	while(gets(str))
	{
		if(strcmp(str,"0")==0)
			break;
		
		i=total=1;
		ptr=strtok(str," \n\t\r\b");
		while(ptr)
		{
			a[i++]=atol(ptr);
			ptr=strtok(0," \n\t\r\b");
		}
for(j=2;j<i;j+=2)
	total=total*(long)pow(a[j-1],a[j]);
primefac(total-1);
	}
	return 0;
}
int primefac(long n)
{
	long i=3,c=0,j,l,k;
	while(n%2==0)
	{
		a[c++]=2;
		n=n/2;
	}
	while(i<=sqrt(n)+1)
	{
		if(n%i==0)
		{
			a[c++]=i;
			n=n/i;
		}
		else
			i=i+2;
	}
	if(n>1)
a[c++]=n;
	a[c]=-111;
	for(j=k=0,l=1;j<c;j++)
	{
		if(a[j]==a[j+1])
			l++;
		else
		{
			fre[k]=l;
			digit[k++]=a[j];
			l=1;
		}
	}
for(c=k-1;c>=0;c--)
{
	if(c!=k-1)
		printf(" ");
printf("%ld %ld",digit[c],fre[c]);
}
printf("\n");

	return 0;
}
