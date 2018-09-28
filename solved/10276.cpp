#include<stdio.h>
#include<string.h>
#include<math.h>
void main( )
{
long a[51],i,j,k,n,last,cas,p;
scanf("%ld",&cas);
for(k=0;k<cas;k++)
{
scanf("%ld",&n);
for(i=1;i<=n;i++)
a[i]=0;
for(i=1;  ;i++)
{
for(j=1;j<=n;j++)
{
p=sqrt(a[j]+i);
if( (a[j]+i==p*p) || (a[j]+i==i) )
{
a[j]=i;
break;
}
}
if(j==n+1)
{
printf("%ld\n",i-1);
break;
}
}
}
}


