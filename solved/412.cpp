#include<stdio.h>
#include<math.h>
long gcd(long a,long b);
void main()
{
long i,k,j,n,a[60];
double counter,p,result;
while(scanf("%ld" ,&n)==1 &&  n!=0)
{
p=n*(n-1)/2;
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=counter=0;i<n;i++)
for(j=i+1;j<n;j++)
{
k=gcd(a[i],a[j]);
if(k==1)
counter++;
}
if(counter==0)
printf("No estimate for this data set.\n");
else
{
result=sqrt((p/counter)*6);
printf("%0.6lf\n",result);
}
}
}
long gcd(long a,long b)
{
if(!b)
return a;
else
return gcd(b,a%b);
}



