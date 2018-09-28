#include<stdio.h>
void main( )
{
long  a,r[900],m,t,i,j,k,n,l=0,z,v;
scanf("%ld",&n);
for(z=0;z<n;z++)
{
scanf("%ld",&a);
i=0;k=0;v=a;
while(1)
{
m=0;
while(a!=0)
{
t=a%10;
m=m+(t*t);
a=a/10;
}
if(m==1)
{
l++;
printf("Case #%ld: %ld is a Happy number.\n",l,v);
break;
}
for(j=0;j<i;j++)
{
if(r[j]==m)
{
k=1;
break;
}
}
r[i++]=m;
if(k==1)
{
l++;
printf("Case #%ld: %ld is an Unhappy number.\n",l,v);
break;
}
a=m;
}
if(n-1<l)
break;
}
}


