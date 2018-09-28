#include<stdio.h>
int main()
{
	long cas, n, m, show;
	scanf("%ld",&cas);
	while(cas--)
	{
		scanf("%ld%ld",&n,&m);
		show=0;

		while(1)
		{
			n=n-m;
			n++;
			show++;
			if(n==1)
			{
				printf("%ld\n",show);
				break;
			}
			if(n<m)
			{
				printf("cannot do this\n");
				break;
			}
		}

	}
	return 0;
}