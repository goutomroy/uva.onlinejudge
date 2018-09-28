#include<stdio.h>
#include<math.h>
void main( )
{
long n,work,prework,i,wine;
while(scanf("%ld",&n)==1  && n!=0)
{
work=prework=0;
for(i=0;i<n;i++)
{
scanf("%ld",&wine);
work+=abs(prework);
prework+=wine;
}
printf("%ld\n",work);
}
}

