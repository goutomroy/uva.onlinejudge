#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct goutom
{
char w[10000];
}roy[10000];
void main( )
{
char a[10000],b[10000];
long n,i,j,k,len,c[10000],l;
scanf("%ld",&n);
for(i=0;i<=n;i++)
gets(roy[i].w);
k=0;
for(i=0;i<=n;i++)
{
len=strlen(roy[i].w);
for (j=0;j<len;j++)
{
if((roy[i].w[j]>='a' && roy[i].w[j]<='z') || (roy[i].w[j]>='A' && roy[i].w[j]<='Z'))
{
if((roy[i].w[j]>='a' && roy[i].w[j]<='z'))
a[k++]=toupper(roy[i].w[j]);
else
 a[k++]=roy[i].w[j];
 }
 }
 }
 for(i=0;i<k-1;i++)
 {
 for(j=0;j<k-1;j++)
 {
 if(a[j]>a[j+1])
 a[j]^=a[j+1]^=a[j]^=a[j+1];
 }
 }
 len=k;l=1;j=0;a[len]='0';k=0;
for(i=0;i<len;i++)
{
if(a[i]==a[i+1])
l++;
else
{
c[k++]=l;
b[j++]=a[i];
l=1;
}
}
for(i=0;i<k-1;i++)
 {
 for(j=0;j<k-1;j++)
 {
 if(c[j]<c[j+1])
 {
 c[j]^=c[j+1]^=c[j]^=c[j+1];
  b[j]^=b[j+1]^=b[j]^=b[j+1];
  }
 }
 }
 for(i=0;i<k;i++)
 printf("%c %ld \n",b[i],c[i]);
 }


