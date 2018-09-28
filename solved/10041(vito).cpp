#include<stdio.h>
#include<math.h>
void main( )
{
long long n,a[600],i,j,sum,k,m,d,t,max,p,b;
scanf("%lld",&n);
for(k=0;k<n;k++)
{
scanf("%lld",&m);
for(i=0;i<m;i++)
scanf("%lld",&a[i]);
p=0;
for(t=0;t<m;t++)
{
sum=0;
for(j=t+1;j<m;j++)
sum=sum+abs(a[t]-a[j]);
if(t!=0)
{
for(d=t-1;d>=0;d--)
sum=sum+abs(a[t]-a[d]);
}
if(t==0)
max=sum;
if(sum<max)
max=sum;
}
sum=0;
for(i=0;i<m-1;i++)
sum=sum+abs(a[m-1]-a[i]);
 if(sum<max)
	 max=sum;

printf("%lld\n",max);
}
}



