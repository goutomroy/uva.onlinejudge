#include<stdio.h>
unsigned long long cut(unsigned long long a,unsigned long long b);
unsigned long long addnpr(unsigned long long c[11],unsigned long long d[11],unsigned long long len,unsigned long long ten);
void main( )
{
	unsigned long long a,b;
	while(scanf("%llu %llu",&a,&b)==2 )
{
if(a==0&&b==0)
break;
	cut(a,b);
}
}
unsigned long long cut(unsigned long long a,unsigned long long b)
{
	unsigned long long c[11],d[11],i=0,j=0;
	while(a>0)
	{
		c[i++]=a%10;
		a/=10;
	}
	while(b>0)
	{
		d[j++]=b%10;
		b/=10;
	}
	addnpr(c,d,i,j);
   return 0;
}
unsigned long long addnpr(unsigned long long c[11],unsigned long long d[11],unsigned long long len,unsigned long long ten)
{
	unsigned long long  carry=0,i,j,p=0,t1,t2;
	for(i=0,j=0;i<len||j<ten;i++,j++)
	{
	t1=t2=0;
	if(i<len)
	t1=c[i];
	if(j<ten)
	t2=d[j];
	carry=(t1+t2+carry)/10;
		if(carry!=0)
			p++;
			}
			if(p==0)
		printf("No carry operation.\n");
	else if(p==1)
		printf("%llu carry operation.\n",p);
	else
printf("%llu carry operations.\n",p);
return 0;
}
	

