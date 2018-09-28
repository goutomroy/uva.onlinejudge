#include<stdio.h>
#include<string.h>
void main( )
{
char k[40000];
long i,c,n,r,d,a[40000],b[40000],mod,p,j,tt;
while(scanf("%ld %ld",&n,&d)!=EOF)
{
	printf("%ld/%ld = ",n,d);
p=n;
memset(k,'0',sizeof(k));
i=0;
while(1)
{
mod=n%d;
n=mod*10;
r=n/d;
a[i]=mod;
b[i]=r;
if(k[mod]=='1')
break;
k[mod]='1';
i++;
}
printf("%ld.",p/d);
for(c=0;c<i;c++)
if(a[c]==mod && b[c]==r)
break;
for(j=0;j<c;j++)
printf("%ld",b[j]);
printf("(");
for(j=c,tt=1;j<i ;j++,tt++)
{
printf("%ld",b[j]);
if(tt==50)
{
	printf("...");
	break;
}
}
printf(")\n");
printf("%4ld = number of digits in repeating cycle\n",i-c);
}
}