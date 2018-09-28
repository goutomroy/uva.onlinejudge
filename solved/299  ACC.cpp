#include<stdio.h>

void main( )
{

int i,j,str[100],k,n,m,t;
scanf("%d",&m);
for(t=0;t<m;t++)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&str[i]);

k=0;

for(i=0;i<n-1;i++)
{

for(j=0;j<n-1;j++)
{
if(str[j]>str[j+1])
{
str[j]^=str[j+1]^=str[j]^=str[j+1];
k++;
}
}

}
printf("Optimal train swapping takes %d swaps.\n",k);

}
}