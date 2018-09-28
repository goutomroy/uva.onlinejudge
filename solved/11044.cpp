#include<stdio.h>
void main( )
{
long long n,m,index,i;
scanf("%lld",&index);
for(i=0;i<index;i++)
{
scanf("%lld%lld",&n,&m);
printf("%lld\n",(n/3)*(m/3));
}
}