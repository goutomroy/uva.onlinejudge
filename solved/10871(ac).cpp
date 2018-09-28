#include<stdio.h>
#include<math.h>
int checkprime(long x);
void main( )
{
long n,m,i,k,j,a[15000],sum,l,x,y,c,f,d,min;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&m);
for(j=0;j<m;j++)
scanf("%ld",&a[j]);
f=0;x=-1;
for(j=0;j<m;j++)
{
sum=a[j];
for(c=j+1;c<m;c++)
{
sum=sum+a[c];
k=checkprime(sum);
if(k==1)
{
l=c-j;
if(f==0)
{
min=c-j;
x=j;
y=c;
f++;
}
if(l<min)
{
min=l;
x=j;
y=c;
}
}
}
}
if(x==-1)
printf("This sequence is anti-primed.");
else
{
printf("Shortest primed subsequence is length %ld: ",min+1);
for(d=x;d<=y;d++)
{
printf("%ld",a[d]);
if(d!=y)
printf(" ");
}
}
printf("\n");
}
}


int checkprime(long x)
{
	long i, root;
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