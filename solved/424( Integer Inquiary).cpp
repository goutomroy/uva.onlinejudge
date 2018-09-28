#include<stdio.h>
#include<string.h>
int pum(char a[202],char b[202]);
int sum(char a[202]);
struct goutom
{
char ch[200];
};
char result[1300];
int main( )
{
struct goutom roy[600];
long i,len;
for(i=0;i<100;i++)
{
scanf("%s",roy[i].ch);
if(roy[i].ch[0]=='0')
{
len=i;
break;
}
}
for(i=0;i<len;)
{
if(i==0)
{
pum(roy[i].ch,roy[i+1].ch);
i=i+2;
}
else
{
sum(roy[i].ch);
i=i+1;
}
}
len=strlen(result);
for(i=len-1;i>=0;i--)
printf("%c",result[i]);
return 0;
}
int pum(char a[202],char b[202])
	{
	long i,j,t1,t2,carry,k,len,ten;
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
	return 0;
	}
	int sum(char a[202])
	{
	char b[200];
	long i,j,t1,t2,carry,k,len,ten,z;
   strcpy(b,result);
	carry=k=0;
	len=strlen(a);
	ten=strlen(b);
	for(i=0,z=ten-1;i<z;i++,z--)
	b[i]^=b[z]^=b[i]^=b[z];
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
	return 0;
	}

