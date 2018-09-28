#include<stdio.h>
#include<string.h>
struct goutom
{
	char b[2000];
	long c[2000];
}roy;
void main( )
{
char a[2000],str[2000];
long i,j,k,len,l,max,g[2000],t;

while(gets(str)!='\0')
{
len=strlen(str);
for(i=0,j=0;i<len;i++)
{
if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
a[j++]=str[i];
}
len=j;

for(i=0;i<len-1;i++)
{
for(j=0;j<len-1;j++)
if(a[j]>a[j+1])
a[j]^=a[j+1]^=a[j]^=a[j+1];
}

l=1;j=0;a[len]='0';k=0;
for(i=0;i<len;i++)
{
if(a[i]==a[i+1])
l++;
else
{
roy.c[k++]=l;
roy.b[j++]=a[i];
l=1;
}
}
max=0;
for(i=0,k=0;i<j;i++)
g[k++]=roy.c[i];
for(i=0;i<j;i++)
if(max<g[i])
max=g[i];

for(i=0;i<j;i++)
if(g[i]==max)
{
t=i;
printf("%c",roy.b[i]);
}
printf(" %ld",roy.c[t]);
printf("\n");
}
}
