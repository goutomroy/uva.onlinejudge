#include<stdio.h>
int main()
{
	long long  count, n;
	while(scanf("%lld",&n)==1)
	{
		count=0;
		while(1)
		{
			if(n<=3)
			{
				count+=n; break;
			}
			else if(n%2==0)
			{
				count++; n=n/2; 
			}
			else if(n%2==1)
			{
				count++;
				if( ((n-1)/2)%2==0 )
					n=n-1;
				else
					n=n+1;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}