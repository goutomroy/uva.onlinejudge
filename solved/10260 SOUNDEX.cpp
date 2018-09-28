#include<stdio.h>
#include<string.h>
void main( )
{
char snd[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char a[30];
int code[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
int i,j,y[30],result[30],k,len,c;
while(scanf("%s",a)==1)
{
len=strlen(a);
c=0;k=0;
for(j=0;j<len;j++)
{
for(i=0;i<26;i++)
{
if(a[j]==snd[i])
{
y[c++]=code[i];
break;
}
}
}
if(y[0]!=0)
result[k++]=y[0];
for(i=1;i<c;i++)
{
if(y[i]!=0 && (y[i]!=y[i-1]))
result[k++]=y[i];
}
for(j=0;j<k;j++)
printf("%d",result[j]);
printf("\n");
}
}

