#include<stdio.h>
#include<math.h>
void main ( )
{
long long a[100500],n,m,j,k,x,y,min,i,f,t;
while(scanf("%lld",&n)==1 && n!=0)
{
t=0;
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
scanf("%lld",&m);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==m)
{
f=abs(a[i]-a[j]);
if(t==0)
{
min=f;
x=a[i];
y=a[j];
t++;
}
if(f<min)
{
x=a[i];
y=a[j];
min=f;
}
}
}
}
if(x>y)
printf("Peter should buy books whose prices are %lld and %lld.\n",y,x);
else
printf("Peter should buy books whose prices are %lld and %lld.\n",x,y);
}
}
