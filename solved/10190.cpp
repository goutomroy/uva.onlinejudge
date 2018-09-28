#include<stdio.h>
void main( )
{
long long  n,m,d,k,arry[900],p,i,j;
while(scanf("%lld%lld",&n,&d)==2)
{
i=1;p=1;arry[0]=n;
if(n==0 || d==0 || d==1 || n<d)
printf("Boring!");
else
{
while(n!=1)
{
if(n%d==0)
{
arry[i++]=n/d;
n=n/d;
}
else
{
p=0;
printf("Boring!");
break;
}
}
if(p==1)
for(j=0;j<i;j++)
printf("%lld ",arry[j]);

}
printf("\n");
}
}

