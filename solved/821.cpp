#include<stdio.h>
#define big 50000000.000
#define sz 105

double graph[sz][sz];

int main()
{
	long i, j, k, cas=0, a, b, node;
	double d, sum;

	while(1)
	{
		scanf("%ld%ld", &a,&b);
		node=0;
		if(a==0 && b==0)
			break;
		for(i=1;i<sz;i++)
			for(j=1;j<sz;j++)
				graph[i][j]=big;

		if(a>node)
			node=a;
		if(b>node)
			node=b;

			graph[a][b]=1;

			while(1)
			{
				scanf("%ld%ld", &a,&b);
				if(a==0 && b==0)
					break;

				if(a>node)
					node=a;
				if(b>node)
					node=b;

			    graph[a][b]=1;
			}

			for(i=1;i<=node;i++)
				for(j=1;j<=node;j++)
				{
					if(i==j)
						graph[i][j]=0;
					else if(graph[i][j]!=1)
						graph[i][j]=big;
				}

			

			for(k=1;k<=node;k++)
				for(i=1;i<=node;i++)
					for(j=1;j<=node;j++)
						if(graph[i][j]>graph[i][k]+graph[k][j])
							graph[i][j]=graph[i][k]+graph[k][j];

					sum=d=0.000;
	
					for(i=1;i<=node;i++)
						for(j=1;j<=node;j++)
							if(graph[i][j]!=0 && graph[i][j]!=big)
							{
								sum+=graph[i][j];
								d++;
							}

						   printf("Case %ld: average length between pages = %.3lf clicks\n",++cas,sum/d);
							
	}

	return 0;
}