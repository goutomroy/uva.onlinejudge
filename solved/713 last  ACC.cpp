#include<stdio.h>
#include<string.h>
int reverse(char a[202],char b[202]);
int add(char a[202],char b[202],long long len,long long ten);
void main( )
{
long long i=0,n;
char a[202],b[202];
scanf("%lld",&n);
while(i<n)
{
scanf("%s %s",a,b);
reverse(a,b);
printf("\n");
i++;
}
}
int reverse(char a[202],char b[202])
	{
	long long i=0,z,len,ten;
	len=strlen(a);
	ten=strlen(b);
	z=len-1;
	if(z==0)
	a[i]=a[i];
	else
	{
	while(z>i)
	{
	a[i]^=a[z]^=a[i]^=a[z];
	i++;
	z--;
	}
	}
	i=0;z=ten-1;
	if(z==0)
	b[i]=b[i];
	else
	{
	 while(z>i)
	{
	b[i]^=b[z]^=b[i]^=b[z];
	i++;
	z--;
	}
	 
   }
	add(a,b,len,ten);
	return 0;
	}
	int add(char a[202],char b[202],long long len,long long ten)
	{
	long long i,j,t1,t2,carry,k,result[402];
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
	j=0;
	for(i=0;i<k;i++)
	{
if(result[i]!=0)
{
printf("%lld",result[i]);
j=1;
}
else if(j==1)
printf("%lld",result[i]);

	}
	return 0;
   }

