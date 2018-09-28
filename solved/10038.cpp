#include<stdio.h>
#include<math.h>
#define sz 3005

int isjolly(long long total,long long array[sz])
	{
	char no[sz];
	long long i,j,diff,k;

	for(i=0;i<total;i++)
		no[i]='0';

	for(i=0;i<total-1;i++)
		{
		diff=abs(array[i]-array[i+1]);

		if(diff>total-1||diff==0)
			return 0;

		no[diff]='1';
		}

	for(i=1;i<total-1;i++)
		if(no[i]!='1')
			return 0;

		return 1;

	
	
	}


void main()
	{

	long long total,array[sz],i;
	
	while(scanf("%lld",&total)==1)
		{
		if(total==0)
			{
			printf("Not jolly\n");
			continue;
			}

		for(i=0;i<total;i++)
			scanf("%lld",&array[i]);

		if(isjolly(total,array))
			printf("Jolly\n");
		else
			printf("Not jolly\n");
		}
	
	}