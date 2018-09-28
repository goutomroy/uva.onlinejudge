#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#define sz 35
#define big 500000
using namespace std;
struct goutom
{
	long index,value;
}que[100];

char colour[sz],ware[500][3];
bool matrix[sz][sz];
long m,n,p,cost[sz],val;
int search(char a[3])
{
	long i;
	for(i=1;i<=m;i++)
		if(!strcmp(a,ware[i]))
			return i;
		return 0;
}

int sorting(const void *x,const void *y)
{
	
	    goutom *A=(goutom*)x;
        goutom *B=(goutom*)y;

	return (A->value - B->value);
}



long DISKTRA(long beg,long end)
{
long i,l=1,r=1,t;

que[l].index=beg;
que[l].value=cost[beg];

while(1)
{
	qsort(que+l,r-l+1,sizeof(goutom),sorting);
	t=que[l].index;
	l++;
    colour[t]='b';
	for(i=1;i<=m;i++)
		if(matrix[t][i])
		{
			
			if(colour[i]=='w' || colour[i]=='g')
			{
				if(cost[i]>cost[t]+1)
					cost[i]=cost[t]+1;
			}
			    
			if(colour[i]=='w')
			{
				r++;
				que[r].value=cost[i];
		    	que[r].index=i;
			    colour[i]='g';
			}
		}
		if(l-1==r)
			break;
}
if(cost[end]==big)
printf("NO SHIPMENT POSSIBLE\n");
else
printf("$%ld\n",cost[end]*val*100);
return 0;
}

void main()
{
	long i,cas,t1,t2,beg,end,k;
	char a[3],b[3];
	scanf("%ld",&cas);
	printf("SHIPPING ROUTES OUTPUT\n\n");
	for(k=1;k<=cas;k++)
	{
		scanf("%ld%ld%ld",&m,&n,&p);
		memset(matrix,0,sizeof(bool)*sz*sz);

		for(i=1;i<=m;i++)
			scanf("%s",ware[i]);

		for(i=1;i<=n;i++)
		{
			scanf("%s%s",a,b);
			t1=search(a);
			t2=search(b);
			matrix[t1][t2]=matrix[t2][t1]=1;
		}
		printf("DATA SET  %ld\n\n",k);
		for(i=1;i<=p;i++)
		{			
		fill_n(colour,sz,'w');
        fill_n(cost,sz,big);
scanf("%ld%s%s",&val,a,b);
beg=search(a);
end=search(b);
cost[beg]=0;
    DISKTRA(beg,end);
		}
		printf("\n");

	}
	printf("END OF OUTPUT\n");
}
