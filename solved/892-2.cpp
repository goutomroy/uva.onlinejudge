#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main( )
{
char a[150],b[150],c[50];
long i,j,len,k,n,p=0,t,q;
while(1)
{
gets(a);
len=strlen(a);
if(len==1 && a[0]=='#')
break;
if(p==1)
{
for(i=0;i<q;i++)
{
if(isalpha(c[i]))
printf("%c",c[i]);
}
for(i=0;a[i]!=' ';i++)
{
if(isalpha(a[i]))
printf("%c",a[i]);
}
printf("\n");
for(t=0,j=i;j<len;j++)
b[t++]=a[j];
b[t]='\0';
for(i=j=0;j<t;j++)
a[i++]=b[j];
a[i]='\0';
p=0;
len=strlen(a);
}
if(a[len-1]=='-')
{
for(i=len-1;i>=0;i--)
if(a[i]==' ')
break;
for(j=0;j<=i;j++)
{
if(isalpha(a[j]) ||  a[j]==' ')
printf("%c",a[j]);
}
printf("\n");
for(j=i+1,q=0;a[j]!='-';j++)
c[q++]=a[j];
c[q]='\0';
p=1;
}
else
{
len=strlen(a);
for(j=0;j<len;j++)
{
if(isalpha(a[j]) ||  a[j]==' ')
printf("%c",a[j]);
}
printf("\n");
}
}
}




