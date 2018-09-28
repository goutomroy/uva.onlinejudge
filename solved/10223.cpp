#include<stdio.h>
void main( )
{
long long a[19]={1,2,5,14,42,132,429,1430,4862,16796,58786,208012,742900,2674440,
				9694845,35357670,129644790,477638700,1767263190};
				long i,n;
				while(scanf("%lld",&n)==1)
				{
				for(i=0;i<19;i++)
				{
				if(n==a[i])
				{
				printf("%ld\n",i+1);
				break;
				}
				}
				}
				}