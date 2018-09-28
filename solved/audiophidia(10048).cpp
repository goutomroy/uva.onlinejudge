#include<stdio.h>
#define big 2000000

long matrix[120][120],c,first,last;

long max(long a,long b)
{
	if(a>b)
		return a;
	return b;
}


void FW()
{
	long i,k,j,tax;
for(k = 1; k <= c; k++)
for(i = 1; i<=c; i++)
for(j = 1; j <= c; j++)
{
 tax=max( matrix[i][k],matrix[k][j]);
matrix[i][j] =(matrix[i][j] < tax )? matrix[i][j] : tax ;
}


}



void main()
{
	long i,j,node,edge,query,cas=1,x,y,cost,t=1;
	while(scanf("%ld%ld%ld",&node,&edge,&query)==3 && (node && edge && query) )
	{
		if(t!=1)
			printf("\n");
		t=10;

		for(i=1;i<=node;i++)
			for(j=1;j<=node;j++)
				matrix[i][j]=big;
	
			c=node;

		for(i=1;i<=edge;i++)
		{
			scanf("%ld %ld %ld", &x,&y,&cost);
			matrix[x][y]=matrix[y][x]=cost;
		}
		FW();	
		printf("Case #%ld\n",cas++);
		for(i=1;i<=query;i++)
		{
			scanf("%ld %ld",&first,&last);
			if(matrix[first][last]==big)
printf("no path\n");
else
printf("%ld\n",matrix[first][last]);			
		}
		
	}
}


