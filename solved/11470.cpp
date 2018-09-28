#include<stdio.h>

long a[12][12];

int main()
{
	long n, cas=1, i, j, k, sum[100], x, t;

	while(scanf("%ld",&n) && n)
	{
		
		for(i=1;i<=n;i++)
		{
			sum[i]=0;
			for(j=1;j<=n;j++)
				scanf("%ld",&a[i][j]);
		}

			if(n%2==0)
			t=n/2;
		    else
			t=n/2+1;

			for(i=1, k=0;i<=t;i++,k++)
			{
				for(j=i;j<=n-k;j++)
					sum[i]+=a[i][j];

				for(j=k+1;j<=n-k;j++)
					sum[i]+=a[n-k][j];

				for(j=i,x=i+1;x<=n-i;x++)
					sum[i]+=a[x][j];

				for(j=n-k,x=i+1;x<=n-i;x++)
					sum[i]+=a[x][j];
			}
			if(n%2==1)
				sum[t]=a[(n/2)+1][(n/2)+1];

			printf("Case %ld: ",cas++);

			for(i=1;i<=t;i++)
			{
				if(i!=1)
					printf(" ");
				printf("%ld",sum[i]);
			}

			printf("\n");
	}
	return 0;
}