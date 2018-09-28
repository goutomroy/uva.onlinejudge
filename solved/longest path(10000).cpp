#include<stdio.h>
#include<string.h>

#define big -999999
#define sz 1000

long i, j, k, node, cost_mat[sz][sz], start, x, y, low, in, cas=0;


long max(long a, long b)
{
	if(a<b)
		return b;
	return a;
}

int main()
{
	while(scanf("%ld",&node)==1 && node)
	{
		low=big; 
		in=0;

		for(i=1;i<=node;i++)
		 for(j=1;j<=node;j++)			
			cost_mat[i][j]=big;
			
		scanf("%ld",&start);

		while(scanf("%ld%ld",&x,&y)==2 && (x>0 && y>0) )
			cost_mat[x][y]=1;
			

		 for(k=1;k<=node;k++)
		  for(i=1;i<=node;i++)
			{
				if(i!=k)
				for(j=1;j<=node;j++)
				{
					if(j!=k && i!=j)
					cost_mat[i][j]=max( cost_mat[i][j], ( cost_mat[i][k]+cost_mat[k][j] ) );
				}
			}

				for(i=1;i<=node;i++)
					if(cost_mat[start][i]>low)
					{
						low=cost_mat[start][i];
						in=i;
					}
					if(cas!=0)
						printf("\n");
			printf("Case %ld: The longest path from %ld has length %ld, finishing at %ld.\n",++cas,start,low,in);		
	}
	return 0;
}
