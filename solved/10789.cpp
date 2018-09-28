#include<stdio.h>
#include<string.h>
#include<math.h>
int checkprime(long x);
void main( )
{
char a[2009],b[2009];
long i,j,k,len,n,l,t;
scanf("%ld",&n);
for(t=0;t<n;t++)
{
scanf("%s",a);
len=strlen(a);

for(i=0;i<len-1;i++)
{

for(j=0;j<len-1;j++)
{
if(a[j]>a[j+1])
{
a[j]^=a[j+1]^=a[j]^=a[j+1];
k++;
}
}
}

l=1;j=0;a[len]='0';
for(i=0;i<len;i++)
{
if(a[i]==a[i+1])
l++;
else
{
k=checkprime(l);
if(k==1)
b[j++]=a[i];
l=1;
}
}
if(j==0)
printf("Case %ld: empty\n",t+1);
else
{
	printf("Case %ld: ",t+1);
for(i=0;i<j;i++)
printf("%c",b[i]);
printf("\n");
}
}
}
int checkprime(long x)
{
long i,root;
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

