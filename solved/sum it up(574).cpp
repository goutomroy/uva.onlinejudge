#include<stdio.h>
#include<string.h>
#define sz 1000
int arr[sz],target,tt=1,l;
char str[1000][50],s[50],sp[100];
void process_solution(int n,int k,int a[]);
void con_can(int n,int k,int a[],int c[],int *ncandidate);
void subset(int n,int k,int a[])
{
  process_solution(n,k,a);
  if(n==k)return;
  int i,c[sz],ncandidate;k++;
  con_can(n,k,a,c,&ncandidate);
  for(i=0;i<ncandidate;i++)
  {
    a[k]=c[i];
	subset(n,k,a);
  }
}
void con_can(int n,int k,int a[],int c[],int *ncandidate)
{
  *ncandidate=0;
  for(int i=a[k-1]+1;i<=n;i++)
    c[(*ncandidate)++]=i;
}
void process_solution(int n,int k,int a[])
{
  int i,j,sum=0,p=0;
  for(i=1;i<=k;i++)
    sum=sum+arr[a[i]];
  if(sum==target)
  {
	  strcpy(sp,"");
	  for(i=1;i<=k;i++)
	  {
		sprintf(s,"%ld",arr[a[i]]);
		strcat(sp,s);
	  }
	  for(i=1;i<tt;i++)
		  if(strcmp(str[i],sp)==0)
		  {
			  p=1;
			  break;
		  }
		  if(p==0)
		  {
			  strcpy(str[tt++],sp);
			  for(i=l=1;i<=k;i++)
			  {
				  if(i!=1)
					  printf("+");
				  printf("%ld",arr[a[i]]);
			  }
			  printf("\n");
		  }
	 
	  
  }
	   
}
void main( )
{
	int i,k,n,a[sz];
	while(scanf("%d%d",&target,&n)==2 && n!=0)
	{

for(i=1,k=a[0]=l=0;i<=n;i++)
scanf("%d",&arr[i]);
printf("Sums of %d:\n",target);
for(i=0;i<1000;i++)
strcpy(str[i],"");
subset(n,k,a);
if(l==0)
printf("NONE\n");

	}

}