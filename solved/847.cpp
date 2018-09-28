#include<stdio.h>
#include<math.h>
void main( )
{
long double n;
while(scanf("%Lf",&n)==1)
{
while(1)
{
n=ceil(n/9);
if(n==1)
{
printf("Stan wins.\n");
break;
}
n=ceil(n/2);
if(n==1)
{
printf("Ollie wins.\n");
break;
}
}
}
}