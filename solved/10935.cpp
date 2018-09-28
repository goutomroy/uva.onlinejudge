#include<stdio.h>
void main( )
{
long n,i,j,k,a[100],dis[52],c;
while(scanf("%ld",&n)==1 && n!=0)
{
for(i=1,j=0;i<=n;i++)
a[j++]=i;
for(i=0,k=0;k<n-1;i+=2,k++)
{
dis[k]=a[i];
a[j++]=a[i+1];
}
printf("Discarded cards: ");
for(i=0;i<k;i++)
{
printf("%ld",dis[i]);
if(i<k-1)
printf(", ");
}
printf("\n");
printf("Remaining card: %ld\n",a[j-1]);

}
}




