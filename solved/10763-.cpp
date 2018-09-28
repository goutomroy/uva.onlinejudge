#include<stdio.h>
#include<algorithm>
using namespace std;
long long a[500005],b[500005];
void main( )
{
long long n,i,j,k;
while(scanf("%lld",&n)==1  &&  n!=0)
{
for(i=0;i<n;i++)
scanf("%lld%lld",&a[i],&b[i]);
sort(&a[0],&a[n]);
sort(&b[0],&b[n]);
for(i=0;i<n;i++)
{
if(a[i]==b[i])
;
else
break;
}
if(i==n)
printf("Yes\n");
else
printf("No\n");
}
}

