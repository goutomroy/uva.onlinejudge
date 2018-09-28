#include<stdio.h>
#include<math.h>
#include<string.h>
#define sz 1000020
bool flag[sz];
long prime[sz];
long sieve(long l,long u);
void main( )
{
	long i,m1,m2,p1,p2,l,u,min,max,dis,t;
	while(scanf("%ld%ld",&l,&u)==2)
	{
		t=sieve(l,u);
		min=max=prime[1]-prime[0];
		m1=p1=prime[0];
		p2=m2=prime[1];
		if(t<2)
			printf("There are no adjacent primes.\n");
		else
		{
for(i=1;i<t-1;i++)
{
	dis=prime[i+1]-prime[i];
	if(dis<min)
	{
		m1=prime[i];
		m2=prime[i+1];
		min=dis;
	}
	if(dis>max)
	{
		p1=prime[i];
		p2=prime[i+1];
		max=dis;

	}

}
printf("%ld,%ld are closest, %ld,%ld are most distant.\n",m1,m2,p1,p2);
		}

		}
}

long sieve(long l,long u)
{
	long d,j,i,count;
	d=u-l+1;
memset(flag,1,sizeof(flag));
 for(i=(l%2!=0) ;i<d;i+=2)
		flag[i]=0;
 for (i=3;i<=sqrt(u);i+=2)
{
	 if (i>l && !flag[i-l])
		continue;
	 j=l/i*i;
	 if (j<l) j+=i;
	 if (j==i) j+=i;
	 j-=l;
	 for (;j<d;j+=i)
		flag[j]=0;
}

  if (l<=1) flag[1-l]=0;
  if (l<=2) flag[2-l]=1;
  for(i=count=0;i<d;i++)
    if(flag[i]==1)
	 prime[count++]=i+l;

	  
		  return count;
}

