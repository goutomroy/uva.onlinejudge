#include<stdio.h>
#include<math.h>
int binary (long n);
int hexa (long n);
int hextobi(long len);
long a[100];
long b[100];
void main( )
{
long n,i,j,num,x,y,z;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&num);
x=binary(num);
y=hexa(num);
z=hextobi(y);
printf("%ld %ld\n",x,z);
}
}
int binary (long n)
 {
 long i,l=0;
 while(n!=0)
 {
i=n%2;
 n=n/2;
 if(i==1)
 l++;
 }
 return l;
 }

 int hexa (long n)
 {
 long i=0;
while(n!=0)
{
a[i++]=n%10;
n=n/10;
}
 return i;
 }
 int hextobi(long len)
 {
 long i,l=0,d,k;
 for(i=0;i<len;i++)
 {
 d=a[i];
 while(d!=0)
 {
 k=d%2;
 d=d/2;
 if(k==1)
 l++;
 }
 }
 return l;
 }


