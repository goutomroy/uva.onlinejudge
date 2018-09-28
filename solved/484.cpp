#include<stdio.h>
#define sz 1000000

void main()
	{
	long num[sz],i,j,k,total=0,line,count;


	while(scanf("%ld",&num[total++])==1)
	;

   
	for(i=0;i<total-1;i++)
		{
		count=1;
		if(num[i]!=-113322)
			{
			for(j=i+1;j<total;j++)
				if(num[i]==num[j]&&num[i]!=-113322)
					{
					count++;
				  num[j]=-113322;
					}
				printf("%ld %ld\n",num[i],count);
			}

		}



	}

