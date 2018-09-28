#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
void main( )
{
	long i,j,cas=0,n,a[1005],c,num,b[500050],min,x,diff,m;
	while(scanf("%ld",&n)==1  &&   n)
	{
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		b[0]=a[0];
		for(i=c=0;i<n;i++)
			for(j=i+1;j<n;j++)
				b[c++]=a[i]+a[j];
        sort(&b[0],&b[c]);
		scanf("%ld",&m);
     printf("Case %ld:\n",++cas);
		for(i=1;i<=m;i++)
		{
			scanf("%ld",&num);
			min=abs(b[0]-num);
			x=b[0];
			for(j=1;j<c;j++)
			{
				diff=abs(b[j]-num);
				if(min>diff)
				{
					min=diff;
					x=b[j];
				}
			}
			printf("Closest sum to %ld is %ld.\n",num,x);
		}
		
	}
}

			

