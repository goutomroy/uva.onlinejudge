#include<stdio.h>
#define sz 106
long arr[sz],target,store[2][100],max;
void process_solution(long n,long k,long a[]);
void con_can(long n,long k,long a[],long c[],long *ncandidate);
void subset(long n,long k,long a[])
{
  process_solution(n,k,a);
  if(n==k)return;
  long i,c[sz],ncandidate;k++;
  con_can(n,k,a,c,&ncandidate);
  for(i=0;i<ncandidate;i++)
  {
    a[k]=c[i];
	subset(n,k,a);
  }
}
void con_can(long n,long k,long a[],long c[],long *ncandidate)
{
  *ncandidate=0;
  for(long i=a[k-1]+1;i<=n;i++)
    c[(*ncandidate)++]=i;
}
void process_solution(long n,long k,long a[])
{
  long i,j,sum=0;

  for(i=1;i<=k;i++)
    sum=sum+arr[a[i]];
  if(sum<=target)
  {
	 if(sum>max)
	 { 
		 max=sum;
		 store[0][0]=k;
		 for(i=1;i<=k;i++)
			 store[0][i]=arr[a[i]];
	 }	  
  }   
}
void main( )
{
	long i,k,n,a[sz];
	while(scanf("%ld %ld",&target,&n)==2)
	{		
for(i=1,k=a[0]=0;i<=n;i++)
scanf("%ld",&arr[i]);
max=0;
subset(n,k,a);
for(i=1;i<=store[0][0];i++)
{
	if(i!=1)
		printf(" ");
	printf("%ld",store[0][i]);
}
printf(" sum:%ld\n",max);
	}

}
