#include<stdio.h>
#include<math.h>
#include<string.h>
int checkprime(long x);
void main( )
{
char a[25];
long i,k,j,len,sum,d;
while(scanf("%s",a)==1)
{
len=strlen(a);sum=0;
for(i=0;i<len;i++)
{
if(a[i]>='a' && a[i]<='z')
{
d=a[i];d=d-96;
sum=sum+d;
}
else
{
d=a[i];d=(d-48)+10;
sum=sum+d;
}
}
k=checkprime(sum);
if(k==1)
printf("It is a prime word.\n");
else
printf("It is not a prime word.\n");
}
}
int checkprime(long x)
{
	long i, root;
if(x==1)
return 1;
 if(x==2)
return 1;
 if(x%2==0)
return 0;
else
{
 root=sqrt(x);
for(i=3;i<=root;i+=2)
{
if(x%i==0)
return 0;
}
return 1;
}
}


