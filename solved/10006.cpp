#include<stdio.h>
int main( )
{
long n,i,q;
long a[15]={561,1105,1729,2465,2821,6601,8911,
10585,15841,29341,41041,46657,52633,62745,63973};
while(scanf("%ld",&n)==1 && n!=0)
{
for(i=0;i<15;i++)
{
if(n==a[i])
{
printf("The number %ld is a Carmichael number.\n",n);
q=0;
break;
}
else
q=1;
}
if(q==1)
printf("%ld is normal.\n",n) ;
}
return 0;
}

