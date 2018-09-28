#include<stdio.h>
#include<string.h>
void  main ( )
{
long n,i;
char a[11],guess[8],c;
memset(a,'1',11);

while(scanf("%ld",&n)==1)
{
if(n==0)
break;
scanf("%c",&c);
gets(guess);
if(guess[4]=='l')
for(i=1;i<=n;i++)
a[i]='0';
else if(guess[4]=='h')
for(i=n;i<=11;i++)
a[i]='0';
if(guess[0]=='r')
{
if(a[n]=='1')
printf("Stan may be honest\n");
else
printf("Stan is dishonest\n");
memset(a,'1',11);
}

}

}


