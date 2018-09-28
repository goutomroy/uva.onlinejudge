#include<stdio.h>
void main( )
{
long long i,j,k,l,m,n,o,x,a[15],c;
for(  ;scanf("%lld",&x)==1 && x!=0;  )
{
for(c=0;c<x;c++)
scanf("%lld",&a[c]);
for (j=0 ;j<x-5; j++)
	 for (k=j+1 ;k<x-4; k++)
		for (l=k+1 ;l<x-3; l++)
		  for (m=l+1 ;m<x-2; m++)
			 for(n=m+1 ;n<x-1; n++)
				for (o=n+1 ;o<x; o++)
				printf("%lld %lld %lld %lld %lld %lld\n",a[j],a[k],a[l],a[m],a[n],a[o]);


				}
            }
