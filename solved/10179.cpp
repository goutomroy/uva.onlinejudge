#include<stdio.h>
#include<math.h>
void main( )
{
long long n,i,j,a[200],b[100],p,x,y,w;
while(scanf("%lld",&n)==1 && n!=0)
{
w=1;
	if(n==1)
		printf("%lld\n",w);
	else
	{
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
y=0;a[i]=0;
for(x=0;x<i;x++)
{
if(a[x]==a[x+1])
;
else
b[y++]=a[x];
}
for(j=0;j<y;j++)
			p=(p-(p/b[j]));
		printf("%lld\n",p);
	}
		}
      }




