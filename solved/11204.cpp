#include<stdio.h>
void main()
{
	long i,cas,j,a[100],n,m,num,gun;
	scanf("%ld",&cas);
	while(cas--)
	{
		for(i=0;i<100;i++)
			a[i]=0;

		scanf("%ld%ld",&n,&m);

		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			{
				scanf("%ld",&num);
				if(num==1)
					a[j]=a[j]+1;;
			}

			for(i=1,gun=1;i<=n;i++)
				if(a[i]!=0)
					gun=gun*a[i];
				printf("%ld\n",gun);
	}
}


