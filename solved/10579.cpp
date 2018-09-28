#include<stdio.h>
#include<string.h>
int add(char a[7000],char b[7000],long len,long ten);
long result[7000];
void main( )
{
char a[7000],b[7000],t;
long n,k,len,ten,pen,i,j;
while(scanf("%ld",&n)==1)
{
a[0]='0';b[0]='1';k=0;len=1;ten=1;
while(1)
{
pen=add(a,b,len,ten);
for(i=0;i<len;i++)
b[i]=a[i];
for(i=pen-1,j=0;i>=0;i--,j++)
{
t=result[i]+'0';
a[j]=t;
 }
 ten=len;
 len=pen;
 k++;
if(k==n)
{

for(i=pen-1;i>=0;i--)
printf("%ld",result[i]);
break;
}
}
printf("\n");
}
}
int add(char a[7000],char b[7000],long len,long ten)
	{
	long i,j,t1,t2,carry,k;
	carry=k=0;
	for(i=len-1,j=ten-1;i>=0||j>=0;i--,j--)
	{
	t1=t2=0;
	if(i>=0)
	t1=a[i]-'0';
	if(j>=0)
	t2=b[j]-'0';
	result[k++]=(t1+t2+carry)%10;
	carry=(t1+t2+carry)/10;
	}
	while(carry!=0)
	{
	result[k++]=carry%10;
	carry/=10;
	}
   return k;
	}
