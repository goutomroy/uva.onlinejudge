#include<stdio.h>

long x, y, a[200000], i;

int process()
{
	long n, t=0, k;

	for(n=1;n<=100000;n++)
	{
		k=n*n;

		if(k>100000)
			break;

		else
		    a[++t]=k;
		
	}

	return t;
}

int main()
{
	long i, count, t;

	t=process();

	

	while(scanf("%ld%ld",&x,&y))
	{
		if(x==0 && y==0)
			break;

		count=0;

		for(i=1;i<=t;i++)
		{
			if(a[i]>=x && a[i]<=y)
				count++;
		}
		

		printf("%ld\n",count);

	}
	
return 0;
}