#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#define sz 105
#define big 5000000
#define dis(a1,b1,a2,b2) sqrt( pow( (a1-a2) ,2.0 ) + pow( (b1-b2),2.0) ) 

using namespace std;

long node;
char colour[105];
double matrix[sz][sz];

int MST()
{
   long set[sz],i=0,j,tag,c;
   double min=0.0,sum=0.0;
   set[++i]=1;
   colour[1]='r';
   while(i!=node)
   {
	   min=big;
   for(c=1;c<=i;c++)
	   for(j=1;j<=node;j++)
	   {
		   if(colour[j]=='w')
		   if(matrix[set[c]][j]<min)
		   {		   
			   min=matrix[set[c]][j];
			   tag=j;	
		   }
	   }

sum=sum+min;
set[++i]=tag;
colour[tag]='r';


   }
   printf("%.2lf\n",sum);
   return 0;
}

void main()
{
	long cas,i,j;
	double a[105],b[105];
	scanf("%ld",&cas);
	while(cas--)
	{
		
		scanf("%ld",&node);
		for(i=1;i<=node;i++)
			scanf("%lf%lf",&a[i],&b[i]);

      fill(colour,colour+node+1,'w');

		    for(i=1;i<=node;i++)
			  for(j=i+1;j<=node;j++)
			  matrix[i][j]=matrix[j][i]=dis(a[i],b[i],a[j],b[j]) ;
			 	  
						
			MST();
			if(cas!=0)
				printf("\n");
	}
}

