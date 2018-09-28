#include<stdio.h>
#define sz  2000
long que[sz][5], start[sz][5], end[sz][5], level[sz][sz];
bool board[sz][sz];

long bfs()
{
	int x, y, r, c, i, j;

	for(i=1;i<=8;i++)
		for(j=1;j<=8;j++)
		{
			board[i][j]=0;
			level[i][j]=0;
		}
	x=y=0;
	que[++x][1] =  start[1][1];
	que[x][2]   =  start[1][2];
	board[start[1][1]][start[1][2]]=1;

	while(x!=y)
	{
		r=que[++y][1];
		c=que[y][2];

		if( (r+2<=8) && (c+1<=8) && (board[r+2][c+1]==0) )
		{
			board[r+2][c+1]=1;
			que[++x][1]=r+2;
		    que[x][2]  =c+1;
			level[r+2][c+1]=level[r][c]+1;
			if(r+2==end[1][1] && c+1==end[1][2])
				return (level[r+2][c+1]);
		}

		if( (r+2<=8) && (c-1>=1) && (board[r+2][c-1]==0) )
		{
			board[r+2][c-1]=1;
			que[++x][1]=r+2;
		    que[x][2]  =c-1;
			level[r+2][c-1]=level[r][c]+1;
			if(r+2==end[1][1] && c-1==end[1][2])
				return (level[r+2][c-1]);
		}

		if( (r-2>=1) && (c+1<=8) && (board[r-2][c+1]==0) )
		{
			board[r-2][c+1]=1;
			que[++x][1]=r-2;
		    que[x][2]  =c+1;
			level[r-2][c+1]=level[r][c]+1;
			if(r-2==end[1][1] && c+1==end[1][2])
				return (level[r-2][c+1]);
		}

		if( (r-2>=1) && (c-1>=1) && (board[r-2][c-1]==0) )
		{
			board[r-2][c-1]=1;
			que[++x][1]=r-2;
		    que[x][2]  =c-1;
			level[r-2][c-1]=level[r][c]+1;
			if(r-2==end[1][1] && c-1==end[1][2])
				return (level[r-2][c-1]);
		}

		if( (c+2<=8) && (r+1<=8) && (board[r+1][c+2]==0) )
		{
			board[r+1][c+2]=1;
			que[++x][1]=r+1;
		    que[x][2]  =c+2;
			level[r+1][c+2]=level[r][c]+1;
			if(r+1==end[1][1] && c+2==end[1][2])
				return (level[r+1][c+2]);
		}

		if( (c+2<=8) && (r-1>=1) && (board[r-1][c+2]==0) )
		{
			board[r-1][c+2]=1;
			que[++x][1]=r-1;
		    que[x][2]  =c+2;
			level[r-1][c+2]=level[r][c]+1;
			if(r-1==end[1][1] && c+2==end[1][2])
				return (level[r-1][c+2]);
		}

		if( (c-2>=1) && (r+1<=8) && (board[r+1][c-2]==0) )
		{
			board[r+1][c-2]=1;
			que[++x][1]=r+1;
		    que[x][2]  =c-2;
			level[r+1][c-2]=level[r][c]+1;
			if(r+1==end[1][1] && c-2==end[1][2])
				return (level[r+1][c-2]);
		}

		if( (c-2>=1) && (r-1>=1) && (board[r-1][c-2]==0) )
		{
			board[r-1][c-2]=1;
			que[++x][1]=r-1;
		    que[x][2]  =c-2;
			level[r-1][c-2]=level[r][c]+1;
			if(r-1==end[1][1] && c-2==end[1][2])
				return (level[r-1][c-2]);
		}
	}
	return 0;
}

int main()
{
	char a[sz], b[sz];
	while(scanf("%s%s",a,b)==2)
	{
		start[1][1]=a[1]-48;
		start[1][2]=a[0]-'a'+1;

		end[1][1]=b[1]-48;
		end[1][2]=b[0]-'a'+1;
   
		printf("To get from %s to %s takes %ld knight moves.\n",a, b, bfs());

	}
	return 0;
}