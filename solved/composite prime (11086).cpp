#include<stdio.h>
#include<math.h>
#define sz 550000
bool flag[sz],composite[1200000];
long prime[50500];
long sieve(long n)
{
long i,j,r,c=0;
prime[c++]=2;
for(i=3;i<=n;i+=2)
	 {
	 if(flag[i]==0)
		{
		prime[c++]=i;
		if(i<=n/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<=n;j+=r)
          flag[j]=1;
		}
	 }
	 }
  return 0; 
}
int comp( )
{
	long i,j;
	for(i=0;i<180;i++)
	{
		for(j=i;j<44000;j++)
		{
			if((prime[i]*prime[j])>1100000)
				break;
			composite[(prime[i]*prime[j])]=1;
		}
	}
	return 0;
}
void main( )
{
	sieve(sz);
	comp( );
	long i,count,tag,cas;
	while(scanf("%ld",&cas)==1)
	{
		for(i=count=0;i<cas;i++)
		{
			scanf("%ld",&tag);
			if(composite[tag])
				count++;
		}
		printf("%ld\n",count);
	}
}


	
