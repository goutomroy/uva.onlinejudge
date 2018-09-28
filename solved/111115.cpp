#include<stdio.h>
#include<string.h>
#define swap(a,b) a^=b^=a^=b
void reverse(char x[]);
void multi(long x);
char result[100];
void main ()
{
long i,j,k,n,m;
for(;scanf("%ld%ld",&n,&m)==2;)
{
if(n==0 && m==0)
break;
result[0]='1';result[1]='\0';
for(i=0;i<m;i++)
multi(n);
printf("%s\n",result);
}
}
void multi(long x)
{
char a[100];
	long carry,m,len,i,j;
	strcpy(a,result);
	len=strlen(a);
	carry=0;
	for(i=len-1,j=0;i>=0;i--,j++)
	{
			m=(a[i]-'0')*x+carry;
			result[j]=(m%10)+'0';
		carry=m/10;
	}
	while(carry>0)
	{
		result[j++]=(carry%10)+'0';
		carry/=10;
	}
	result[j]='\0';
	reverse(result);
}
void reverse(char x[])
{
	long len,i,j;
	len=strlen(x);
	j=len-1;
	for(i=0;i<len/2;i++,j--)
		swap(x[i],x[j]);
}


