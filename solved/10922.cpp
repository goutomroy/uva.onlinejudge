#include<stdio.h>
#include<string.h>
void main( )
{
long long i,len,sum,p,pum,n;
char a[1200];
while(scanf("%s",a)==1 && a[0]!='0')
{
len=strlen(a);
sum=0;p=1;
for(i=0;i<len;i++)
sum=sum+(a[i]-'0');
if(sum%9==0)
{
while(sum!=9)
{
n=sum ;
pum=0;
while(n!=0)
{
pum=pum+(n%10);
n=n/10;
}
p++;
sum=pum;
}

	for(i=0;i<len;i++)
printf("%c",a[i]);
	printf("is a multiple of9 and has 9-degree %lld.\n",p);
}
else
{
for(i=0;i<len;i++)
printf("%c",a[i]);
	printf("is not a multiple of9.\n");
}
}
}





