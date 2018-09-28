#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 2147483647.00
void main( )
{
char a[200],b[200],ch,ph,dh;
long double   sum1,sum2,plus;
long i,len,ten,l;
while(5==scanf("%s%c%c%c%s",a,&ph,&ch,&dh,b))
{
printf("%s %c %s\n",a,ch,b);
len=strlen(a);
ten=strlen(b);
for(i=sum1=0,l=len-1;i<len;i++,l--)
{
sum1=sum1+(a[i]-'0')*pow(10,l);
if(sum1>max)
break;
}
for(i=sum2=0,l=ten-1;i<ten;i++,l--)
{
sum2=sum2+(b[i]-'0')*pow(10,l);
if(sum2>max)
break;
}
if(ch=='+')
plus=sum1+sum2;
else
plus=sum1*sum2;
if(sum1>max)
printf("first number too big\n");
if(sum2>max)
printf("second number too big\n");
if(plus>max)
printf("result too big\n");
}
}







