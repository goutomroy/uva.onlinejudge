#include<stdio.h>
#include<string.h>
#define SZ 205
#define w 1
#define b 2

bool Graph[SZ][SZ];

long node,edge,Blacknodes[SZ],maxBlack,ind;
void count(long a[])
{
	long i,max=0;
	for(i=1;i<=node;i++)
		if(a[i]==b)
			max=max+1;
		

		if(max>maxBlack)
		{
			ind=1;
			for(i=1;i<=node;i++)
				if(a[i]==2)				
					Blacknodes[ind++]=i;
                      maxBlack=max;			  
		}
	
}

long Construct(long k,long c[],long a[])
{
	long i,t;
	
	bool in_perm[SZ];

	for(i=1;i<=2;i++)
        in_perm[i]=true;

	for(i=1;i<k;i++)
		if(Graph[k][i])
			if(a[i]==b)
			{
			in_perm[2]=false;
			break;
			}

	    t=0;
        c[++t]=w;
		if(in_perm[2]==true)
			c[++t]=b;

return t;			
		
	
}

void Backtrack(long k,long a[])
{
	long i,c[SZ],t;

	if(node==k)
		count(a);

	else
	{
		k++;
		t=Construct(k,c,a);

		for(i=1;i<=t;i++)
		{
			a[k]=c[i];
			Backtrack(k,a);
		}
	}
}


int main()
{
	long x,y,i,a[SZ],cas;
	scanf("%ld",&cas);

	while(cas--)
	{
		scanf("%ld%ld",&node,&edge);
		memset(Graph,0,sizeof(bool)*SZ*SZ);
	maxBlack=0;

		for(i=1;i<=edge;i++)
		{
			scanf("%ld %ld",&x,&y);
			Graph [x][y] = true;
			Graph [y][x] = true;
		}

			Backtrack(0,a);

		printf("%ld\n",maxBlack);
			for(i=1;i<=maxBlack;i++)
			{
				if(i!=1)
					printf(" ");
				printf("%ld",Blacknodes[i]);
			}
		printf("\n");
	}
	return 0;
}