#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long cas, i, n, num[20005], sum;
	scanf("%ld",&cas);
	while(cas--)
	{

scanf("%ld",&n);

for(i=1;i<=n;i++)
scanf("%ld",&num[i]);

sort(num+1,num+n+1);

sum=0;

for(i=1;i<n;i++)
sum+=num[i+1]-num[i];

printf("%ld\n",sum*2);
	}
	return 0;
}