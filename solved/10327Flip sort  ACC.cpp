#include<stdio.h>

void main( )
{

int i,j,str[2000],k,n;

while(scanf("%d",&n)==1)
{
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
printf("Minimum exchange operations : %d\n",k);

}
}