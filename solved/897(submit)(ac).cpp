
**for hints**
#include<stdio.h>
#include<math.h>
#include <iostream>
#include <algorithm>
using namespace std;
long a[500],tag,check;
int prime(long x)
{
long i,root;
if(x==1)
return 0;
if(x==2)
return 1;
if(x%2==0)
return 0;
 root=sqrt(x);
for(i=3;i<=root;i+=2)
{
if(x%i==0)
return 0;
}
return 1;
}
long convert(long j)
{
	long sum=0,i;
	for(i=0;i<j;i++)
		sum=sum+(pow(10,i)*a[i]);
	return sum;
}
int permute(long j)
{
	long t;
	do
    {  		
	t=convert(j);
	if(prime(t)==0)
		return 0;
	
    } while ( next_permutation( a, a + j));
	printf("%ld\n",check);
	tag=1;
    return 0;
}

void main()
{
	long i,j,k,n,lb,ub,p;
	while(scanf("%ld",&lb)==1)
	{
		ub=1;i=1;tag=0;
		while(lb>=ub)
		{
			ub=pow(10,i);
            i++;
		}
		for(i=lb+1;i<=ub;i++)
		{
        j=p=0;n=i;
		while(n)
		{
			k=n%10;			
			if(k==1 || k==3 || k==7 || k==9)
				a[j++]=k;
			else
			{
			p=1;
			break;
			}						
			n=n/10;
		}
		if(p==0)
		{		
			check=i;
			permute(j);
		}
		if(tag==1)
			break;
		}
		if(tag==0)
			printf("0\n");
	}
}



***************************************************************
#include<stdio.h>
#include<math.h>
long a[50]={2,3,5,7,11,13,17,31,37,71,73,79,97,113,131,199,311,337,373,733,919,991};
void main( )
{
	long i,lb,ub,tag;
	while(scanf("%ld",&lb)==1 && lb)
	{
		if(lb>=991)
		{
			printf("0\n");
			continue;
		}

		ub=10;i=0;tag=0;
		while(lb>=ub)
		{
			ub=pow(10,i);
			i++;
		}
		for(i=0;a[i]<=ub;i++)
			if(a[i]>lb && a[i]<=ub)
			{
				printf("%ld\n",a[i]);
				tag=1;
				break;
			}
			if(tag==0)
				printf("0\n");

			
	}
}

