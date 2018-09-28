#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	long long s, i, cas, num, tum, p; long long sum;
	scanf("%lld",&cas);
	while(cas--)
	{
		scanf("%lld",&tum); num=sum=tum; s=sqrt(num);
if(num<=0)
{
   sum=0;
}
else if(num==1)
{
   sum=num;
}
else
{
		for(i=2;i<=s;i++)
		{
			p=num/i;
			if(p==i)
				sum=sum+p;
				
			else
			   sum=sum+p+i;
			   
			   sum+=(tum-p)*(i-1);
			   tum=p-1;
		}
}
		printf("%lld\n",sum);
	}
	return 0;
}
