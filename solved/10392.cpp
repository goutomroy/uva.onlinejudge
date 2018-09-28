 #include<stdio.h>
 #include<math.h>
 void main( )
 {
long long n,a[100],i,j,k;
while(scanf("%lld",&n)==1 && n>0)
{
if(n==0)
printf("    0\n");
else if(n==1)
printf("    1\n");
else
{
i=0 ;
while(n%2==0)
{
a[i++]=2;
n=n/2;
}
j=3;k=0;
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
printf("    %lld\n",a[j]);
printf("\n");
}
}
}