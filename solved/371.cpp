#include<stdio.h>


void akerman(long long lb,long long ub)
	{
	long long i,j,cycle_max=0,num_max=0,k,temp,cycle=0;

	for(i=lb;i<=ub;i++)
		{
		temp=i;
		cycle=0;


		do
		{
		
		if(temp%2==0)
			temp=temp/2;
		else
			temp=(3*temp)+1;
		cycle++;
		
		}
		while(temp!=1);

		if(cycle_max<cycle)
			{
			cycle_max=cycle;
			num_max=i;
			}
		
		}

	printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",lb,ub,num_max,cycle_max);
	
	}	 


void main()
	{
	long long lb,ub;

	while(1)
		{
		scanf("%lld%lld",&lb,&ub);

		if(lb==0&&ub==0)
			break;

		if(lb>ub)
			lb ^= ub ^= lb ^=ub;

		akerman(lb,ub);

		}


	}