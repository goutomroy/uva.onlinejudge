#include<stdio.h>
void main( )
{
long long  a,b,j,c,d[900],p;
while(scanf("%lld%lld",&a,&b)==2)
{
c=0;
while(b!=0)
{
d[c++]=a/b;
p=b;
b=a%b;
a=p;
}
printf("[%lld;",d[0]);
for(j=1;j<c;j++)
{
printf("%lld",d[j]);
if(j!=c-1)
printf(",");
}
printf("]\n");
}
}
