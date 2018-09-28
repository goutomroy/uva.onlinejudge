#include<stdio.h>
#include<math.h>
long prime(long n);
long ghat(long n,long t);
long  a[100],b[100],roy[100],num,pum;
void main( )
{
long i,len,pow,p;
while(scanf("%ld%ld",&pum,&num)==2)
{
len=prime(num);
for(i=0,p=1;i<len;i++)
{
pow=ghat(roy[i],i);
if(pow==0)
{
p=0;
break;
}
}
if(p==0)
printf("%ld does not divide %ld!\n",num,pum);
else
printf("%ld divides %ld!\n",num,pum);
}

}
long prime(long n)
{
long i=0,j,c,l;
while(!(n%2))
{
a[i++]=2;
n=n/2;
}
c=3;
while(c<=sqrt(n)+1)
{
if(n%c==0)
{
a[i++]=c;
n=n/c;
}
else
c=c+2;
}
if(n>1)
a[i++]=n;
for(j=c=a[i]=0,l=1;j<i;j++)
{
if(a[j]==a[j+1])
 l++;
 else
 {
 b[c]=l;
 roy[c++]=a[j];
 l=1;
 }
 }
return c;
}

long ghat(long n,long t)
{
long p,count=0;
p=pum;
while(p)
{
p=p/n;
count+=p;
}
if(count < b[t])
return 0;
return 1;
}


