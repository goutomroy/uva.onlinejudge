#include<stdio.h>
#include<math.h>

#define sz 10005

char flag[sz];


void sieve()
{

long i=0,j=0,r=0,c=0;


  for(i=2;i<sz;i++)
	 flag[i]='1';

  for(i=4;i<sz;i=i+2)
	 flag[i]='0';

	  
  for(i=3;i<sz;i=i+2)
	 {
	 if(flag[i]=='1')
		{
	
		if(i<sz/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<sz;j+=r)
          flag[j]='0';
		  }
		}



	 }
  
	
}


void main()
	{
		long i,j,max,n,test;
		sieve();
		scanf("%ld",&test);

		for(i=0;i<test;i++)
			{
				scanf("%ld",&n);
				
			max=-999999999;

				for(j=2;j<=n;j++)
					{
					
						if(flag[j]=='1'&&n%j>max)
							max=j;
					}
				printf("%ld\n",max);
			}
	}