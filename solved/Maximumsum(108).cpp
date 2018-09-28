#include<stdio.h>
#include<string.h>

int i,j,l,m,n,max,a[101][101],b[101][101];

int main()
{ 
	while(scanf("%d",&n)==1)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				scanf("%d",&a[i][j]);

		max=a[1][1];

		for(l=1;l<=n;l++)
		{
			for(m=1;m<=n;m++)
			{
				for(i=l;i<=n;i++)
					for(j=m;j<=n;j++)
						b[i][j]=a[i][j];


				for(i=l;i<=n;i++)
					for(j=m;j<n;j++)
						b[i][j+1]+=b[i][j];


				for(i=l;i<n;i++)
					for(j=m;j<=n;j++)
						b[i+1][j]+=b[i][j];

				for(i=l;i<=n;i++)
					for(j=m;j<=n;j++)
						if(max<=b[i][j])
							max=b[i][j];
			}

		}
		printf("%d\n",max);
	}
	return 0;
	
}

