#include<stdio.h>
int b2sequence(long n );
char b[1000005];
 long a[109];
void main( )
{
long n,k,cas=1,c,i,last,p;

while(scanf("%ld",&n)==1)
{
for(i=0;i<1000005;i++)
b[i]='0';
last=p=0;
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]<=0 || a[i]<=last)
{
printf("Case #%ld: It is not a B2-Sequence.\n",cas++);
p=1;
break;
}
last=a[i];
}
if(p==0)
{
k=b2sequence(n);
if(k==0)
printf("Case #%ld: It is not a B2-Sequence.\n",cas++);
else
printf("Case #%ld: It is a B2-Sequence.\n",cas++);
}
}
}
int b2sequence(long n)
{
long i,j,sum=0;

for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
sum=a[i]+a[j];
if(b[sum]=='1')
return 0;
else
b[sum]='1';
}
}
return 1;
}





