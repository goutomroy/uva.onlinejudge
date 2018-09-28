#include<stdio.h>
long a[102][102];

void main()
{
    long m, n, i, j, k, l, max, sum;

	while(2==scanf("%ld %ld",&m,&n))
	{
		if(m==0  && n==0)
			break;
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
				scanf("%d",&a[i][j]);

				if(a[i][j]==0)	
				a[i][j] = 1;
				else 
				a[i][j] = 0;
				a[i][j] = a[i][j-1] + a[i][j];
		}

		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		a[i][j] = a[i][j] + a[i-1][j];

		max = 0;

		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				for(k=1;k<=m;k++)
					for(l=1;l<=n;l++)
					{
						sum = a[k][l] - a[i-1][l] - a[k][j-1] + a[i-1][j-1];
						if(sum>max && sum == (k+1 -i)*(l+1-j))
							max = sum;
					}

					printf("%ld\n",max);
	}
}
