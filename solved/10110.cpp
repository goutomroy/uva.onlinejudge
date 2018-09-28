#include<stdio.h>
#include<math.h>
void main( )
{
long long num,root;
while(scanf("%lld",&num)==1 && num!=0)
{
root=sqrt(num);
if((root*root)==num)
printf("yes\n");
else
printf("no\n");
}
}