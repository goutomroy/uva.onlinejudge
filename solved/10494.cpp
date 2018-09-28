#include<stdio.h>
#include<string.h>
long long divide(char number[5000],long long divisor);
char result[5000];
void main( )
{
char num1[5000],ch;
long long rem,num2,len,i;
while(scanf("%s %c %lld",num1,&ch,&num2)==3)
{
rem=divide(num1,num2);
if(ch=='%')
printf("%lld\n",rem);
else
{
len=strlen(result);
for(i=0;i<len;i++)
printf("%c",result[i]);
printf("\n");
 }
}
}
long long divide(char number[5000],long long divisor)
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
		result[index++]=digit+'0';
		num=num-digit*divisor;
		while(number[i]!='\0')
		{
		num=num*10+(number[i++]-'0');
				  digit=num/divisor;
				  result[index++]=digit+'0';
				  num=num-digit*divisor;
				  }
				  if(index==0)
				  result[index++]='0';
				  result[index]='\0';
				  return(num);
				  }

