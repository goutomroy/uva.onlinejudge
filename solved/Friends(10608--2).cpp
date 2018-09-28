#include<stdio.h>
#define sz 30010
long a[sz],count[sz],edge,node;

 int init(long k)
 {
  int i;
  for(i=1;i<=k;i++)
   {
  a[i]=i;
  count[i]=0;
   }  
    return 0;
 }  

 int pro(long x,long y)
 {
	 long i;
	 for(i=1;i<=node;i++)
		 if(a[i]==x)
			 a[i]=y;

		 return 0;
 }
   long countmax()
   {
	   long i,max=0,k;
	   for(i=1;i<=node;i++)
	   {
		   k=i;
		   while(1)
		   {
			   if(k==a[k])
			   {
				   count[k]++;
				   break;
			   }
			   else
				   k=a[k];				   
		   }
	   }
	   for(i=1;i<=node;i++)
		   if(count[i]>max)
			   max=count[i];
		   return max;
   }
   
void main()
{
	long i,cas,m,n,x,y,t;
	scanf("%ld",&cas);
	while(cas--)
	{
		
		scanf("%ld%ld",&node,&edge);
		init(node);
		for(i=1;i<=edge;i++)
		{
			scanf("%ld%ld",&n,&m);			
			if(m>n)
			{
				x=a[m];
				y=a[n];
			}
			else
			{
				x=a[n];
				y=a[m];
			}
			
			if(a[m]!=a[n])
               pro(x,y);		
		}
		
		t=countmax();
		/*for(i=1;i<=node;i++)
			printf("%ld  ",count[i]);*/
		printf("%ld\n",t);

	}
}
/*
7
7 5
2 1
3 2
6 5
7 5
5 1
*/