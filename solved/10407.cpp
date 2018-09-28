#include<stdio.h>
long long gcd(long long a,long long b);
void main( )
{
	long long i,j,x,y,p,k,a[1500],b[1500];
	while(1)
	{
		for(i=0; ;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]==0)
				break;
		}
		if(i==0)
			break;
		for(x=0;x<i-1;x++)
		{
			for(y=0;y<i-1;y++)
			{
				if(a[y]>a[y+1])
					a[y]^=a[y+1]^=a[y]^=a[y+1];
			}
		}

		k=0;
		for(j=0;j<i-1;j++)
		b[k++]=a[i-1]-a[j];
		p=b[0];

		for(j=0;j<k-1;j++)
			p=gcd(p,b[j+1]);
		printf("%lld\n",p);
	}
}



long long gcd(long long a,long long b)
{
if(!b)
return a;
else
return gcd(b,a%b);
}