#include<stdio.h>
#include<algorithm>
using namespace std;
#define sz 105
#define sz1 25
#define big 2000000
bool matrix[sz1][sz1];
char colour[sz1];
long node[sz1][sz1],beg,end,dis[sz1],parent[sz1];

int inputprocess( )
{
	long i,j,c,count;

	for(i=1;i<=20;i++)
	{
	for(j=1,c=1;j<=20;j++)
	if(matrix[i][j]==1)
		node[i][c++]=j;

	node[i][0]=c-1;
	}
	return 0;
}

long BFS()
{
	long i,l,r,que[50000],p,k;

	fill(colour,colour+sz1,'w');
    fill(dis,dis+sz1,big);
	fill(parent,parent+sz1,0);
    colour[beg]='g';
	dis[beg]=0;
	l=0;
	r=1;
	que[1]=beg;
   
	while(1)
	{
		l=l+1;
     p=que[l];
	 for(i=1;i<=node[p][0];i++)
	 {
		 k=node[p][i];
		 if(colour[k]=='w')
		 {
			 colour[k]='g';
			 dis[k]=dis[p]+1;
			 if(k==end)
				 return dis[k];
			 parent[k]=p;			 
				 r=r+1;
			 que[r]=k;			 
		 }

	 }
	 if(l==r)
		 break;  
	 colour[p]='b';
	}
return 0;

}
void main()
{
	long i,j,c,n,z,cas=1,input,res,t=0;
	
	while(scanf("%ld",&n)==1)
	{
j=1;  c=0;



		memset(matrix,0,sizeof(bool)*sz1*sz1);

		for(i=1;i<=n;i++)
		{
			scanf("%ld",&z);
			matrix[j][z]=matrix[z][j]=1;			
		}

		for(j=2;j<=19;j++)
		{
			c=0;
			scanf("%ld",&n);				
		for(i=1;i<=n;i++)
		{
			scanf("%ld",&z);	
			matrix[j][z]=matrix[z][j]=1;
		}

		}
		inputprocess();
		
		scanf("%ld",&input);
		printf("Test Set #%ld\n",cas++);
		for(i=1;i<=input;i++)
		{
		scanf("%ld%ld",&beg,&end);
		res=BFS( );

  if(beg<10)
  {
		printf("%2ld",beg);
		printf(" to ");

		if(end<10)
			printf("%2ld: ",end);
			
		else
			printf("%1ld: ",end);

	}

		else 
		{
		  printf("%1ld",beg);
		  printf(" to ");
		  if(end<10)
			printf("%2ld: ",end);
		  else
	
			printf("%1ld: ",end);
		}
printf("%ld\n",res);


	}
    
printf("\n");

}

}