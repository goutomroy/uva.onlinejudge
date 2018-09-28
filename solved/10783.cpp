#include<stdio.h>
int main()
{
	long long  n,a,b,i,sum;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%lld%lld",&a,&b);
while(a<=b)
{
	if(a%2==1)
	{
		sum=sum+a;
		a=a+1;
	}
	else
		a=a+1;
}
printf("Case %lld:  %lld\n",i+1,sum);
	}
return 0;
	}