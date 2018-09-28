#include<stdio.h>
#include<string.h>
void main( )
{
char a[9000];
long i,j,len,l=0;
while(gets(a)!='\0')
{
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]=='"')
{
l++;
if(l%2==1)
printf("``");
else
printf("''");
}
else
printf("%c",a[i]);
}
printf("\n");
}
}




