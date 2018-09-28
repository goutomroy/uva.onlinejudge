#include<stdio.h>
#include<math.h>
#define sz 1050000

char flag[sz];

char com[sz];

void sieve()
	{
	long i,j,k,c;

	for(i=2;i<sz;i++)
		flag[i]='1';

	for(i=2;i<sz;i++)
		{
		if(flag[i]=='1')
			{
			
			for(j=2;i*j<sz;j++)
				flag[i*j]='0';
			}
		
		}


	}



void composite()
	{
	long i,j,k,c;
	com[0]='0';
	com[1]='0';
	com[2]='0';
	com[3]='0';

	for(i=4;i<sz;i++)
		com[i]='1';

	for(i=4;i<sz;i++)
		{
		if(com[i]=='1'&&flag[i]!='1')
			{
			
			for(j=2;i*j<sz;j++)
				com[i*j]='0';
			}
		else
			com[i]='0';
		
		}
	


	}




void main()
	{
	long n,i,j,count,temp;

	sieve();
composite();

	while(scanf("%ld",&n)==1)
		{
		count=0;
		for(i=0;i<n;i++)
			{
			scanf("%ld",&temp);
			if(com[temp]=='1')
				count++;
			}
		printf("%ld\n",count);
		
		}
	}











	