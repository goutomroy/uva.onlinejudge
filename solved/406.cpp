#include<stdio.h>
#define sz 100000



long sieve(long n,long prime[sz])
{

long i=0,j=0,r=0,c=0;
char flag[sz];

  for(i=2;i<=n;i++)
	 flag[i]='1';

	prime[c++]=1;
	  prime[c++]=2;
  for(i=3;i<=n;i+=2)
	 {
	 if(flag[i]=='1')
		{
		prime[c++]=i;
		if(i<sz/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<=n;j+=r)
          flag[j]='0';
		  }
		}


	 }
  
	
return c;  

}









void main()
{
long n,c,i,count,result,total,index,prime_center,prime[sz];

while(scanf("%ld%ld",&n,&c)==2)
	{
	total=0;
	index=0;
	prime_center=0;

	total=sieve(n,prime);
	if(n==1)
	  total=1;

	if(total%2==0)
		prime_center=c*2;
	else
		prime_center=(c*2)-1;

	index=((total-prime_center)/2);



	printf("%ld %ld: ",n,c);

	if(prime_center>n||prime_center>total)
		for(i=0;i<total;i++)
			printf("%ld ",prime[i]);
	else
	{
	while(prime_center)
	{
	
	printf("%ld ",prime[index++]);
	prime_center--;
	}
	
	
	}
	
	printf("\n\n");
	}

}