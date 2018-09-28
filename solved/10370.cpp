#include<stdio.h>
void main( )
{
	double a[2000],sum,m;
	long i,j,n,k;
	char c='%';
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		sum=0;k=0;
		scanf("%lf",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&a[j]);
				sum=sum+a[j];
		}
		sum=sum/m;
		for(j=0;j<m;j++)
		{
			if(a[j]>sum)
				k++;
		}
		sum=(100*k)/m;
		printf("%.3lf%c\n",sum,c);
	}
}



