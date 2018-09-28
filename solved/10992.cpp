#include<stdio.h>
#include<string.h>
#include<math.h>
#define swap(a,b) a^=b^=a^=b
long  divide(long  divisor);
void substract(char x[],char y[]);
char number[100],ch[100],tem[110];
long tt;
 long toint(char x);
char tochar(long x);
void reverse(char x[]);
void main( )
{
long k,r,len,sum,l,p,x,y,i;
while(scanf("%s",ch)==1  && strcmp(ch,"0"))
{
printf("%s\n",ch);
len=strlen(ch);sum=p=0;tt=0;
if(len<=4)
{
for(i=0,l=len-1;i<len;i++,l--)
sum=(ch[i]-'0')*pow(10,l)+sum;
if(sum==2148)
{
printf("Ghost of Tanveer Ahsan!!!\n");
printf("Ghost of Shahriar Manzoor!!!\n");
printf("Ghost of Adrian Kugel!!!\n");
printf("Ghost of Anton Maydell!!!\n");
printf("Ghost of Derek Kisman!!!\n");
printf("Ghost of Rezaul Alam Chowdhury!!!\n");
printf("Ghost of Jimmy Mardell!!!\n");
printf("Ghost of Monirul Hasan!!!\n");
printf("Ghost of K. M. Iftekhar!!!\n"); p=1;
}
else if(sum<2148)
{
printf("No ghost will come in this year\n");
p=1;
}
}
if(p==0)
{
substract(ch,"2148");
r=divide(2);
if(r==0)
{
printf("Ghost of Tanveer Ahsan!!!\n"); p=1;
}
r=divide(5);
if(r==0)
{
printf("Ghost of Shahriar Manzoor!!!\n"); p=1;
}
r=divide(7);
if(r==0)
{
printf("Ghost of Adrian Kugel!!!\n"); p=1;
}
r=divide(11);
if(r==0)
{
printf("Ghost of Anton Maydell!!!\n"); p=1;
}
r=divide(15);
if(r==0)
{
printf("Ghost of Derek Kisman!!!\n"); p=1;
}
r=divide(20);
if(r==0)
{
printf("Ghost of Rezaul Alam Chowdhury!!!\n"); p=1;
}
r=divide(28);
if(r==0)
{
printf("Ghost of Jimmy Mardell!!!\n"); p=1;
}
r=divide(36);
if(r==0)
{
printf("Ghost of Monirul Hasan!!!\n"); p=1;
}
tt=1;
r=divide(4);x=divide(100);y=divide(400);
if((r==0 && x!=0) || y==0)
{
printf("Ghost of K. M. Iftekhar!!!\n"); p=1;
}
if(p==0)
printf("No ghost will come in this year\n");
}
}
}
long  divide(long  divisor)
{
char bumber[100];
long i,digit,temp,num;
temp=divisor;
num=0;
if(tt==1)
strcpy(bumber,ch);
else
strcpy(bumber,number);
for(i=0;temp>0 && bumber[i]!='\0';i++)
{
num=num*10+toint(bumber[i]);
		temp/=10;
		}
		digit=num/divisor;
		if(digit!=0)
		num=num-digit*divisor;
		while(bumber[i]!='\0')
		{
		num=num*10+toint(bumber[i++]);
				  digit=num/divisor;
				  num=num-digit*divisor;
				  }
				  return(num);
				  }

void substract(char x[100],char y[9])
{
	char tem2[100];
	long len1,len2,len,rem;
	long i,j,k;
	strcpy(tem2,y);
	len2=strlen(tem2);
	reverse(tem2);
	len1=strlen(x);
	for(i=len2;i<len1;i++)
		tem2[i]='0';
	for(i=len1-1,j=0,k=0;i>=0;i--,j++)
	{
		rem=0;
		if(j>=0)
			rem=toint(tem2[j]);
		if(rem>toint(x[i]))
		{
			tem[k++]=tochar(10+toint(x[i])-rem);
			tem2[j+1]=tem2[j+1]+1;
		}
		else
			tem[k++]=tochar(toint(x[i])-rem);
	}
	tem[k]='\0';
	len=strlen(tem);
	for(i=len-1;tem[i]=='0';i--)
		tem[i]='\0';
	reverse(tem);
	strcpy(number,tem);
}

void reverse(char x[])
{
	long len,i,j;
	len=strlen(x);
	j=len-1;
	for(i=0;i<len/2;i++,j--)
		swap(x[i],x[j]);
      strcpy(tem,x);
}
char tochar(long x)
{
	return(x+'0');
}
long toint(char x)
{
 	return(x-'0');
}
