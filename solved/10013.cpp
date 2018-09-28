#include<stdio.h>
#include<string.h>
#define sz 1000005
int add(char a[sz],char b[sz]);
void main( )
{
long n,m,i,j;
char ch[sz],x[sz],y[sz];
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld\n",&m);
for(j=0;j<m;j++)
{
gets(ch);
sscanf(ch,"%c %c",&x[j],&y[j]);
}
x[j]='\0';
y[j]='\0';
add(x,y);
}
}

int add(char a[sz],char b[sz])
	{
	long i,j,t1,t2,carry,k,len,ten;
	char result[sz];
	carry=k=0;
	len=strlen(a);
	ten=strlen(b);
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
	for(i=k-1;i>=0;i--)
	printf("%c",result[i]);
	printf("\n");

	return 0;
	}
