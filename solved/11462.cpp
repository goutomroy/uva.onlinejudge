#include<stdio.h>
#include<algorithm>
using namespace std;

long a[2000005];

int main()
{
	long i, n;

	while(scanf("%ld",&n) && n)
	{
		for(i=1;i<=n;i++)
			scanf("%ld",&a[i]);

		sort(a+1,a+n+1);

		for(i=1;i<=n;i++)
		{
			if(i!=1)
				printf(" ");

			printf("%ld",a[i]);
		}

		printf("\n");
	}
	return 0;
}