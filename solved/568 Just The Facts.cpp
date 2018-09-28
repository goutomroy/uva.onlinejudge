#include<stdio.h>

int last[10001],c, fact[35670];
void factorial()
{
	unsigned int i, j, k, c=0;

	unsigned long sum;

	last[c++] = 1;    fact[35669] = 1;   fact[35668]= -1;

	for(i=1;i<=10000;i++)
	{
		sum = 0; 

		for(j=35669; ;j--)
		{
			if(fact[j]!=-1)
			{
				sum = sum + i*fact[j];
				
				fact[j] = sum%10;
				
				sum = sum/10;
			}
			
			
			if(sum!=0 && fact[j-1]==-1)
			{
				for(j= j-1;sum!=0;j--)
				{
					fact[j] = sum%10 ; 
					
					sum = 0;
				}
				
				fact[j] = -1;
			}

			if(sum==0 && fact[j]==-1)	break;
		}

		for(k=35669;;k--)
			if(fact[k]!=0){	last[c++] = fact[k] ;    break;}
	}
}

void main()
{
	factorial();
	int n;
	for(;scanf("%d",&n)==1;)
		printf("%5d -> %d\n",n,last[n]);
}