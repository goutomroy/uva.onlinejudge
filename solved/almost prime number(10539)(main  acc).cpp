#include<stdio.h>
#include<string.h>
#include<algorithm>
#define sz 1000005
#define sz2 81000
#define max 1000000000000LL
using namespace std;
bool flag[sz];
long long prime[sz2],most[sz2],k=0;

long long sieve(long long n)
{
long long i,j,r,c=0;
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
  return c; 
} 
int generate()
{
	long long i,t,pro;
	t=sieve(sz);
	for(i=0;i<t;i++)
	{
		pro=prime[i]*prime[i];
		while(1)
		{
            most[k++]=pro;
			if(pro>(max/prime[i]))
				break;
			pro=pro*prime[i];

		}
	}
	k=k-1;
	//printf("%lld\n",k);
	return 0;
}
long long search(long long item)
{
	long long beg=0,mid,end=k-1;;
	mid=(beg+end)/2;
while(beg<=end && most[mid]!=item)
	{
	if(item<most[mid])
	end=mid-1;
	else
	beg=mid+1;
	mid=(beg+end)/2;
	}
	if(most[mid]==item)
	return mid;
	else if(mid==0)
	{
		if(item<most[0])
	return 0;
	return 1;
	}
	else
		return mid+1;
}
void main( )
{
long long  n,cas,m,p,i,count ;
generate();
sort(&most[0],&most[k]);
for(i=80070;i<sz2;i++)
most[i]=max;
scanf("%lld",&cas);
while(cas--)
{
	count=0;
	scanf("%lld %lld",&n,&m);
	p=search(n);
	//printf("%lld\n",p);
	i=p;
       while(most[i] <= m)
	   {
         count++;
        i++;
	   }
printf("%lld\n",count);
}


}