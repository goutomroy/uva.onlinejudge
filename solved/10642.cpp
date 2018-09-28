#include <stdio.h>

void main()
{
	long a,b,answer,ii,n,x1,x2,y1,y2;

	scanf("%ld", &n);

	for(ii=1;ii<=n;++ii)
	{
	scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
	a=(1+x1+y1)*(y1+x1)/2+x1;
	b=(1+x2+y2)*(y2+x2)/2+x2;
	answer=b-a;
	printf("Case %ld: %ld\n", ii,answer);
	}
}
