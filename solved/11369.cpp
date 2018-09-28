#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long cas, i, j, n, num[20005], sum, tum[20005];
	scanf("%ld",&cas);
	while(cas--)
	{

scanf("%ld",&n);

for(i=1;i<=n;i++)
scanf("%ld",&num[i]);

sort(num+1,num+n+1);

sum=j=0;

for(i=n;i>=1;i--)
tum[++j]=num[i];

for(i=3;i<=n;i+=3)
sum+=tum[i];

printf("%ld\n",sum);
	}
	return 0;
}