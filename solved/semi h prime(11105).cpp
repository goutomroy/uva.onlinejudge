#include<stdio.h>
#define sz 1000001
#include<algorithm>
using namespace std;
bool flag[sz],plag[sz];
long long hprime[sz], semi[sz],k=0;

long long sieve(long long n)
{
long long i,j,r,c=0;

for(i=5;i<=999985;i+=4)
plag[i]=1;
for(i=5;i<=n;i+=4)
	 {	
	 if(flag[i]==0)
		{
		 plag[i]=0;
		 hprime[c++]=i;
		if(i<=n/i)
		  {			
		  r=i*4;
		  for(j=i*i;j<=n;j+=r)
		  	  flag[j]=1;
		  }
		  }
	 }
	 
  return c; 
} 
/*void precalculate(long long t)
{
	printf("%lld\n",hprime[t-1]);
	/*long long i;
	for(i=0;hprime[i]<=199997;i++)	
	printf("%lld \n",i);
}*/
void precalculate(long long t)
{
long long i,j;
//printf("%lld\n",hprime[19697]);

for(i=0;i<=19697;i++)
for(j=i;hprime[i]*hprime[j]<=999985;j++)
if(plag[hprime[i]*hprime[j]]==1)
{
semi[k++]=hprime[i]*hprime[j];
plag[hprime[i]*hprime[j]]=0;
}
sort(&semi[0],&semi[k]);
//printf("%lld\n",k);
}
void main()
{
	long long i,j,t,n,count;
	t=sieve(sz);
	precalculate(t);
	while(scanf("%lld",&n)==1 && n)
	{
		count=i=0;
		while(semi[i++]<=n)
			count++;		
	printf("%lld %lld\n",n,count);
	}
}