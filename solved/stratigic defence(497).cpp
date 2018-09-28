#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define nil -1
#define sz 500000
long a[sz],length[sz],parent[sz],path[sz],total,tt;

long CALL_LIS( )
{
long i,j,max=0;

for(i=1;i<total;i++)
for(j=i+1;j<=total;j++)
if(a[i]<a[j])
  if(length[i]+1>length[j])
  {
   length[j]=length[i]+1;
   parent[j]=i;
  }

for(i=1,tt=0;i<=total;i++)
if(length[i]>max)
{
max=length[i];
tt=i;
}
return max;
}
int pathprint()
{
	long k=1,j;
	path[k++]=a[tt];
	tt=parent[tt];
	while(tt!=nil)
	{
		path[k++]=a[tt];
		tt=parent[tt];
	}
for(j=k-1;j>=1;j--)
printf("%ld\n",path[j]);
	return 0;
}
int main()
{
	long i,j,cas,k=1;
	char ch[10],c;
	scanf("%ld",&cas);
	c=getchar();
	c=getchar();
	while(cas--)
	{
		total=1;
if(k!=1)
printf("\n");
k=2;
		while(gets(ch) && strlen(ch)!=0)
          a[total++]=atol(ch);
		 		
total--;

for(i=1;i<=total;i++)
for(j=1;j<=total;j++)
{
length[i]=1;
parent[i]=nil;
}
printf("Max hits: %ld\n",CALL_LIS());
pathprint();
	}

	return 0;
}