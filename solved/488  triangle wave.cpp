#include<stdio.h>
void main( )
{
long f,a,i,j,k,t=0,n,p;
scanf("%ld",&n);
while(t<n)
{
 scanf("%ld%ld",&a,&f);
for(k=1;k<=f;k++)
{
for(i=1;i<=a;i++)
{
for(j=i;j>=1;j--)
printf("%ld",i);
printf("\n");
}
p=a-1;
for(i=p;i>=1;i--)
{
for(j=i;j>=1;j--)
printf("%ld",i);
printf("\n");
}
if(k!=f)
printf("\n");
}
t++;
}
}

