#include<stdio.h>
#include<math.h>
#define err 0.000000001
int numoprime();
int checkprime(long n);
long arry[11000];
void main( )
{
long double a,b,result,y,n;
long i;
numoprime();
while(scanf("%Lf%Lf",&a,&b)==2)
{
n=0;
for(i=a;i<=b;i++)
if(arry[i]==1)
n++;
y=(b-a)+1;
result=(n*100)/y;
printf("%0.2Lf\n",result+err);

}
}
int numoprime( )
{
long a=0,k,n;
while(a<=10000)
{
n=(a*a)+a+41;
k=checkprime(n);
if(k==1)
arry[a]=1;
else
arry[a]=0;
a++;
}
return 0;
}
int checkprime(long n)
{
long i,root;
if(n<=1)
return 0;
if(n==2)
return 1;
if(n%2==0)
return 0;
root=sqrt(n);
for(i=3;i<=root;i+=2)
{
if(n%i==0)
return 0;
}
return 1;
}
