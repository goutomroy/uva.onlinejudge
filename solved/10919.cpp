#include<stdio.h>
void main( )
{
long num,a[200],n,m,l,k,i,j,b,q,c,p;
while(scanf("%ld %ld",&n,&m)==2 && n!=0)
{
q=1;
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=0;i<m;i++)
{
scanf("%ld",&k);
scanf("%ld",&num);
l=0;
for(j=0;j<k;j++)
{
scanf("%ld",&b);
for(c=0;c<n && l!=num;c++)
{
if(b==a[c])
{
l++;
break;
}
}
}
if(l==num && q!=0)
q=1;
else
 q=0;
 }
 if(q==1)
printf("yes\n");
else
printf("no\n");
}
}





