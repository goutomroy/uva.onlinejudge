#include<stdio.h>
#include<math.h>
#include<string.h>
long long decimal(char a[100],long long len);
int binary1 (long long n);
int binary2 (long long n);
long long arry2[100],arry1[100];
void main( )
{
char num1[100],num2[100],ch[2];
long long pum1,pum2,sum,len,ten,i,j,n;
scanf("%lld",&n);
for(j=0;j<n;j++)
{
while(scanf("%s%s%s",num1,ch,num2)==3)
{
len=strlen(num1);
ten=strlen(num2);
pum1=decimal(num1,len);
pum2=decimal(num2,ten);
if(ch[0]=='+')
sum=pum1+pum2;
else
sum=abs(pum1-pum2);
binary1(pum1);
binary2(pum2);
for(i=12;i>=0;i--)
printf("%lld",arry1[i]);
printf(" %c ",ch[0]);
for(i=12;i>=0;i--)
printf("%lld",arry2[i]);
printf(" = ");
printf("%lld\n",sum);
}
}
}
long long decimal(char a[100],long long len)
{
long long sum,i,t,l;

l=len-1;sum=0;

for(i=0;i<len;i++)
{
if(a[i]>='A' && a[i]<='Z')
t=(a[i]-'A')+10;
else
 t=a[i]-'0';
 sum=sum+(t*pow(16,l));
 l--;
 }
 return sum;
 }


 int binary1 (long long n)
 {
 long long i;
 for(i=0;i<13;i++)
 arry1[i]=0;
 i=0;
 while(n!=0)
 {
 arry1[i++]=n%2;
 n=n/2;
 }
 return i;
 }


 int binary2 (long long n)
 {
 long long i;
 for(i=0;i<13;i++)
 arry2[i]=0;
 i=0;
 while(n!=0)
 {
 arry2[i++]=n%2;
 n=n/2;
 }
 return i;
 }





