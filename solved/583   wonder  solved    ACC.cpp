#include<stdio.h>
#include<math.h>
void main( )
{
long long n,i,j,p,a[900];
while(scanf("%lld",&n)==1 && n!=0 )
{
p=0;i=0;
if(n<=-1)
{
printf("%lld = -1 x ",n);
n=n*-1;
}
else
printf("%lld = ",n);

while(n%2==0)
{
 a[i++]=2;
 n=n/2;
}
j=3;
while(j<=sqrt(n)+1)
{
if(n%j==0)
{
a[i++]=j;
n=n/j;
}
else
j=j+2;
}
if(n>1)
a[i++]=n;
for(j=0;j<i;j++)
{
printf("%lld",a[j]);
if(j!=i-1)
printf(" x ");
}
printf("\n");

		}
		}


