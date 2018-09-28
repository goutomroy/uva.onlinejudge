#include<stdio.h>

long i,j,k,l,n,m;

int main()
{
m=n=0;
for(i=6;i<=200;i++)
for(j=2;j<i;j++)
for(k=j+1;k<i;k++)
for(l=k+1;l<i;l++)
if((i*i*i)==((j*j*j)+(k*k*k)+(l*l*l)))
printf("Cube = %ld, Triple = (%ld,%ld,%ld)\n",i,j,k,l);		

return 0;
}





