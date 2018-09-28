#include<stdio.h>
long long  divide(char number[1000000],long long  divisor);
void main( )
{
char year[1000000];
long long p,q,r,s,t,k;
while(scanf("%s",year)==1)
{
p=divide(year,4);
q=divide(year,100);
r=divide(year,400);
s=divide(year,15);
t=divide(year,55);
 k=0;
if((p==0 && q>0) || r==0)
{
printf("This is leap year.\n");
k=1;
}
if(s==0)
{
printf("This is huluculu festival year.\n");
k=1;
}
if(t==0 && ((p==0 && q>0) || r==0))
{
printf("This is bulukulu festival year.\n");
k=1;
}
if(k==0)
printf("This is an ordinary year.\n");
}
}


 long long  divide(char number[1000000],long long  divisor)
{
long long i,index,digit,temp,num;
temp=divisor;
index=0;
num=0;
for(i=0;temp>0 && number[i]!='\0';i++)
{
num=num*10+(number[i]-'0');
		temp/=10;
		}
		digit=num/divisor;
		if(digit!=0)

		num=num-digit*divisor;
		while(number[i]!='\0')
		{
		num=num*10+(number[i++]-'0');
				  digit=num/divisor;

				  num=num-digit*divisor;
				  }
				  return(num);
				  }

