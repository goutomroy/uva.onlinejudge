#include<stdio.h>
#include<string.h>
#include<math.h>

#define sz 1000005


long digit_in=0;
char flag[sz];
long digit_prime[sz];




void sieve()
{

long i=0,j=0,r=0,c=0;

	flag[0]='0';
	flag[1]='0';
	flag[2]='1';

  for(i=2;i<sz;i++)
	 flag[i]='1';

  for(i=4;i<sz;i=i+2)
	  flag[i]='0';

	  
  for(i=3;i<sz;i+=2)
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



long add_digit(long n)
	{
	
	long sum=0;

	while(n)
		{
		sum+=n%10;
		n/=10;
		}

	return(sum);
	}




void main()
	{


	long test,i,j,temp,lb,ub,count=0,digit=0;

	sieve();

	for(i=0;i<sz;i++)
		{
		if(flag[i]=='1')
			{
			temp=add_digit(i);
			if(flag[temp]=='1')
				digit++;
			digit_prime[i]=digit;
			}
		else
			digit_prime[i]=digit;

		}

	scanf("%ld",&test);

	for(i=0;i<test;i++)
		{
		scanf("%ld%ld",&lb,&ub);

		count=digit_prime[ub]-digit_prime[lb-1];

		printf("%ld\n",count);

		}


	}















