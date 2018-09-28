#include<stdio.h>
#include<string.h>
long gangster(long len);
char a[100],b[100];
void main( )
{
long i,k,len,n;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%s",a);
len=strlen(a);
k=gangster(len);
printf("%ld\n",k);
}
}
long gangster(long len)
{
long l,c,k,j,m,p,q,d=0;
for(l=1;l<len;l++)
{
  for(c=0;c<l;c++)
  b[c]=a[c];
  b[c]='\n';
  p=0;q=l;
  while(1)
  {
  for(j=q,c=0;c<l&&j<len;c++,j++)
  if(b[c]!=a[j])
  {
  p=1;break;
  }
  if(p==1 || j==len )
  break;
  q=j;
  }
  if(j==len && c==l)
  {
  d=1;return l;
  }
  }
  if(d==0)
  return len;
  }
  