
#include<stdio.h>
void main( )
{
long long a,b,c,x,y,p=0;
while(scanf("%lld%lld",&a,&b)==2 && (a>=0 && b>0))
{
c=1;x=a;y=b;p++;
if(a==0)
{
	c=0;
printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",p,x,y,c);
}
else
{
while(a!=1)
{
if(a%2==0)
{
a=a/2;
c++;
}
else
{
a=(3*a)+1;
if(a>b)
break;
c++;
}
}
printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",p,x,y,c);
}
}
}
