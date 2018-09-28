#include<stdio.h>
#define sz 205

long mat[sz][sz], que[sz];
char colour[sz];
long node, edge;

int bfs(long source)
{
long i, k, p=0, q=0;

que[++q]=source;
colour[source]='r';

while(1)
{

k=que[++p];

   for(i=1;i<=mat[k][0];i++)
   {
     if(colour[mat[k][i]]==colour[k])
	 {
	   printf("NOT BICOLORABLE.\n");
	   return 0;
	 }

         if(colour[mat[k][i]]=='w' && colour[k]=='r')
		 {
			 colour[mat[k][i]]='g';
			 que[++q]=mat[k][i];
		 }

		 else if(colour[mat[k][i]]=='w' && colour[k]=='g')
		 {
			 colour[mat[k][i]]='r';
			 que[++q]=mat[k][i];
		 }
   }

if(p==q)
break;
}

printf("BICOLORABLE.\n");
	return 0;
}

int main()
{
	long i, j, x, y, p, q, source;

	while(scanf("%ld",&node)==1 && node!=0)
	{
		scanf("%ld",&edge);
		for(i=0;i<=node;i++)
		{
			colour[i]='w';
		for(j=0;j<=node;j++)
			mat[i][j]=0;
		}
		for(i=1;i<=edge;i++)
		{
			scanf("%ld%ld",&x,&y);
			x+=1;
			y+=1;

			mat[x][0]+=1;
            p=mat[x][0];

			mat[y][0]+=1;
			q=mat[y][0];

			mat[x][p]=y;
			mat[y][q]=x;
		}
		source=1;

bfs(source);

	}

	return 0;
}