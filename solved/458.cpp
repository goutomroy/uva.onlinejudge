#include<stdio.h>
#include<string.h>

void main( )
{
char a[3000],str;
long len,i;
while(gets(a)!='\0')
{
len=strlen(a);
for(i=0;i<len;i++)
{
str=a[i]-7;
printf("%c",str);
}
printf("\n");
}
}


