#include<stdio.h>
#include<string.h>
#define SZ 205


bool Graph[SZ][SZ],color;

long node,edge;

long Construct(long k,long n,long c[],long a[])
{
	long i,t;
	
	bool in_perm[SZ];

	for(i=1;i<=2;i++)
        in_perm[i]=true;


	for(i=1;i<k;i++)
		if(Graph[k][i])
			in_perm[a[i]]=false;
t=0;
	for(i=1;i<=2;i++)
		if(in_perm[i]==true)
			c[t++]=i;
return t;			
		
	
}

void Backtrack(long n,long k,long a[])
{
	long i,c[SZ],t;

	if(n==k)
		color=false;

	else
	{
		k++;
		t=Construct(k,n,c,a);

		for(i=0;i<t  && color;i++)
		{
			a[k]=c[i];
			Backtrack(n,k,a);
		}
	}
}


int main()
{
	long x,y,i,a[SZ];

	while(scanf("%ld",&node)==1  && node)
	{
		scanf("%ld",&edge);
		memset(Graph,0,sizeof(bool)*SZ*SZ);
		color=true;
		for(i=1;i<=edge;i++)
		{
			scanf("%ld %ld",&x,&y);

			Graph [x+1][y+1] = true;
			Graph [y+1][x+1] = true;
		}

			Backtrack(node,0,a);
		

		if(color)
			printf("NOT BICOLORABLE.\n");

		else
			printf("BICOLORABLE.\n");
		
	}
	return 0;
}