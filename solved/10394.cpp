#include<stdio.h>
#include<math.h>

#define sz 20000000
#define sz2 100000

long temp,pair[sz2];

char flag[sz];


void sieve()
	{
long k=1,count=0;
long i=0,j=0,r=0,c=0;


  
	  temp=2;
  for(i=3;i<sz;i+=2)
	 {
	 if(k>sz2)
	  break;

	 if(flag[i]==0)
		{
		count++;
		 if((temp+2)==i)
			{
			pair[k++]=temp;
			}

		temp=i;

		if(i<sz/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<sz;j+=r)
          flag[j]=1;
		  }
		}


	 }

 
  
}


void main()
	{
	long n,temp;

	sieve();

	while(scanf("%ld",&n)==1)
		{
		temp=pair[n];
	printf("(%ld, %ld)\n",temp,temp+2);
		}
	}

