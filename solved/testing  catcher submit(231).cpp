#include<stdio.h>
#define sz 500000
long a[sz],length[sz],total;

long CALL_LIS( )
{
long i,j,max=0;
for(i=1;i<total;i++)
for(j=i+1;j<=total;j++)
if(a[i]>a[j])
if(length[i]+1>length[j])
length[j]=length[i]+1;

for(i=1;i<=total;i++)
if(length[i]>max)
max=length[i];
return max;

}
int main()
{
	long n,tag,i,j,cas=1,k=1;
	while(1)
	{
		
		total=tag=1;
		while(scanf("%ld",&n)==1 && n!=-1)
		{
          a[total++]=n;
		  tag=2;
		}
		if(tag==1)
			break;
total--;
if(k!=1)
			printf("\n");
		k=2;
for(i=1;i<=total;i++)
for(j=1;j<=total;j++)
length[i]=1;
printf("Test #%ld:\n",cas++);
		printf("  maximum possible interceptions: %ld\n",CALL_LIS( ));
	}

	return 0;
}