#include<stdio.h>
#include<math.h>
void main( )
{
long long  n,i,j,a[300],b[200],p,x,y,w,c[200],goutom,l,divisor,sum;
while(scanf("%lld",&n)==1)
{
if(n==1)
printf("0\n");
else
{
goutom=n;
i=0;p=n;
while(n%2==0)
{
a[i++]=2;
n=n/2;
}
j=3;
while(j<=(sqrt(n)+1))
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
y=0;l=1;
for(x=0;x<i-1;x++)
{
if(a[x]==a[x+1])
l++;
else
{
c[y]=l;
b[y]=a[x];
y++;
l=1;
}
}
b[y]=a[i-1];
c[y]=l;
for(j=0;j<=y;j++)
			p=(p-(p/b[j]));
			sum=1;
		for(i=0;i<=y;i++)
		  sum=(1+c[i])*sum;

        printf("%lld\n",goutom-(sum+p)+1);

		}
      }
      }




