#include<stdio.h>
#include<math.h>
long pre[50006];
void main( )
{
long  n,i,j,a[200],b[100],p,x,y,k,num,c;
pre[1]=1;k=2;
for(c=2;c<=50002;c++)
	{
	i=0;n=p=c;
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
for(x=y=a[i]=0;x<i;x++)
{
if(a[x]==a[x+1])
;
else
b[y++]=a[x];
}
for(j=0;j<y;j++)
			p=(p-(p/b[j]));
		pre[k++]=pre[k-1]+(2*p);

		}

while(scanf("%ld",&num)==1 && num!=0)
printf("%ld\n",pre[num]);
      }




