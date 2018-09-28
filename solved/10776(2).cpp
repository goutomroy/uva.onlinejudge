#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define sz 1005 
long r,t;
char s[35];
void con_can(int n,int k,int a[],int c[],int *ncandidate);
void process_solution(int n,int k,int a[]);

void subset(int n,int k,int a[])
{
	process_solution(n,k,a);
  
  if(k==n)  
	  return;
  
  int i,c[sz],ncandidate;
  k++;
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
  {
	  if(s[i-1]!=s[c[*ncandidate-1]-1])
    c[(*ncandidate)++]=i;
  }
}
void process_solution(int n,int k,int a[])
{
  int i,j;
if(k==r)
{
	
	  for(i=1;i<=k;i++)
	    printf("%c",s[a[i]-1]);	  
	 printf("\n");
}
 
}
void main()
{

    int a[40],len,i,j,tag;
	while(scanf(" %s%ld",s,&r)==2)
	{
		a[0]=t=j=0;
		len=strlen(s);
		sort(&s[0],&s[len]);
		subset(len,0,a);	
				
	}
}