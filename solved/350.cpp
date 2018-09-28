#include<stdio.h>
#define sz 1000000

void main()
	{
	long long Z,I,M,L,cases=0,i,j,test=0;
	char str[sz];

	while(scanf("%lld%lld%lld%lld",&Z,&I,&M,&L)==4)
		{


		if(Z==0&&I==0&&L==0&&M==0)
			break;

		for(i=0;i<sz;i++)
			str[i]='0';

		cases=0;

		while(1)
			{
			L=(Z*L+I)%M;

			if(str[L]=='1')
				break;
			else
				str[L]='1';

			cases++;
			}

		test++;

		printf("Case %lld: %lld\n",test,cases);
		}


	}