#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define sz 50

long node, edge, tag, graph[sz][sz], colour_power[5], colour_node[sz],tt;

long cons_can(long k, long can[])
{
	long i, t=0;
	bool check[5];

	for(i=1;i<=4;i++)
		check[i]=true;
	for(i=1;i<=graph[k][0];i++)
	{
      if(colour_node[graph[k][i]]!=5)
		  check[colour_node[graph[k][i]]]=false;
	}
	 for(i=1;i<=4;i++)
		if(check[i]==true)
			can[++t]=i;

		return t;
}

long cal(long k, long t, long can[5])
{
  long max=0, p=0, i, j, c, sum;
            
            for(i=1;i<=t;i++)
			{
				sum=0;

			 if(can[i])
			 for(j=1;j<=graph[k][0];j++)
			 {
				c=graph[k][j];

				if(colour_node[c]!=5)
				sum=sum + abs(colour_power[can[i]]-colour_power[colour_node[c]]);            
			 }

			 if(sum>max)
			 {
				 max=sum;
				 p=i;
			 }

			}

			 return p;
}

long  backtrack(long k)
{
	long t, can[5], i, j, min, p;

	if(k==node)		
		tt=0;

	
	else
	{
		k++;
		
		t=cons_can(k, can);
		//for(i=1;i<=t;i++)
			//printf("%ld  ",can[i]);
		//printf("\n");
		
		for(i=1;i<=t && tt;i++)
		{
           if(tag)
		   {
			   tag=0;
			   min=9999999;
			   for(j=1;j<=4;j++)
				   if(colour_power[can[j]]<min)
				   {
					   min=colour_power[can[j]];
					   p=j;
				   }
			   colour_node[k]=can[p];	
			    //printf("(%ld) ",can[p]);
			   can[p]=0;
			   backtrack(k);
		   }


		   else
		   {
			 p=cal(k, t, can);			 
			 colour_node[k]=can[p];
			 //printf("(%ld) ",can[p]);
			 can[p]=0;
             backtrack(k);
			 
		   }


		}
	}

return 0;
}

int main()
{
long i, x, y, res, e[sz], f[sz], a, b;
while(scanf("%ld",&node) && node)
{
 scanf("%ld%ld%ld%ld%ld",&edge,&colour_power[1],&colour_power[2],&colour_power[3],&colour_power[4]);

for(i=1;i<=node;i++)
{
graph[i][0]=0;
colour_node[i]=5;
}

 for(i=1;i<=edge;i++)
 {
    scanf("%ld%ld",&x,&y);
	e[i]=x; f[i]=y;

	a=graph[x][0]+=1;
	b=graph[y][0]+=1;

	graph[x][a]=y;
	graph[y][b]=x;
 }

 tag=1; res=0, tt=1;
 backtrack(0);

 for(i=1;i<=edge;i++)
    res=res+pow(abs(colour_power[colour_node[e[i]]] - colour_power[colour_node[f[i]]]),2);

 printf("%ld\n",res);

}
	return 0;
}