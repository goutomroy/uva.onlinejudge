#include<stdio.h>
#include<string.h>
int add(char a[4000],char b[4000],long len,long ten);
char result[8000];
int t;
struct goutom
{
char fibonaci[4000];
}roy[6000];
void main( )
{
char a[4000],b[4000];
int n,k,len,ten,pen,i,j;
a[0]='0';a[1]='\0';b[0]='1';b[1]='\0';k=0;len=1;ten=1;t=1;
roy[0].fibonaci[0]='1';roy[0].fibonaci[1]='\0';
while(k!=5000)
{
pen=add(a,b,len,ten);
for(i=0;i<len;i++)
b[i]=a[i];
b[len]='\0';
for(i=pen-1,j=0;i>=0;i--,j++)
a[j]=result[i];
a[pen]='\0';
ten=len;
 len=pen;
k++;
}
while(scanf("%d",&n)==1)
{
if(n==0)
printf("The Fibonacci number for 0 is 0");
else
{
printf("The Fibonacci number for %d is ",n);
for(i=0;roy[n].fibonaci[i]!='\0';i++)
printf("%c",roy[n].fibonaci[i]);
}
printf("\n");
}
}
int add(char a[6000],char b[6000],long len,long ten)
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
	result[k++]=((t1+t2+carry)%10)+'0';
	carry=(t1+t2+carry)/10;
	}
	while(carry!=0)
	{
	result[k++]=(carry%10)+'0';
	carry/=10;
	}
	result[k]='\0';
for(i=k-1,j=0;i>=0;i--,j++)
roy[t].fibonaci[j]=result[i];
roy[t].fibonaci[k]='\0';
t++;
return k;
	}
