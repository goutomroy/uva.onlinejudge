 #include<stdio.h>
 #include<math.h>
 long long primefac(long long n);
int checkprime(long long x);
 int main( )
 {
 long long n,i,k,m,y;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&m);
m++;



while(1)
{
y=1;
y=checkprime(m);
if(y==0)
{
k=primefac(m);
if(k==1)
{
printf("%lld\n",m);
break;
}
m++;
}
else
m++;
}
}
return 0;
}




long long primefac(long long n)
{
long long i,j,a[200],sum=0,kum=0,m,r,b[200];
i=0 ;r=n;
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

if(j>=10)
{
m=j;
while(m!=0)
{
a[i++]=m%10;
m/=10;
}
n=n/j;
}
else
{
a[i++]=j;
n=n/j;
}
}
else
j=j+2;
}
if(n>1)
{
if(n>=10)
{
m=n;
while(m!=0)
{
a[i++]=m%10;
m=m/10;
}
}
else
a[i++]=n;
}


for(j=0;j<i;j++)
sum=sum+a[j];j=0;
 while(r!=0)
 {
 b[j++]=r%10;
 r=r/10;
 }
 for(i=0;i<j;i++)
 kum=kum+b[i];
 if(sum==kum)
 return 1;
 return 0;
}




int checkprime(long long x)
{
long long  root,i;
if(x==1)
return 0;
if(x==2)
return 1;
if(x%2==0)
return 0;
root=sqrt(x);
for(i=3;i<=root;i+=2)
{
if(x%i==0)
return 0;
}
return 1;
}





