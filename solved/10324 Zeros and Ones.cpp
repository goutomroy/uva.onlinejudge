#include<stdio.h>
#include<string.h>
#define sz 1000003

char str[sz], c;
long ara[sz];

void main()
{
	//freopen("a.in","r",stdin);

	long i, j, k, queri, tcase, len, temp ; 

	for(tcase =1; scanf("%[^\n] ",str)==1; tcase++)
	{
		scanf("%ld ",&queri);

		len = strlen(str);

		ara[0] = str[0]- '0' ; 

		for(i=1;i<len;i++)
			ara[i] = ara[i-1] + ( str[i] - '0' ) ;

		printf("Case %ld:\n",tcase);

		for(i=0;i<queri;i++)
		{
			scanf("%ld %ld ", &j, &k);

			if(j>k)
			{
				temp = j;
				j = k;
				k = temp;
			} 

			temp = str[j] - '0' ;

			temp = temp* (k+1 - j);

			if(temp == ara[k] - ara[j-1])	printf("Yes\n");

			else printf("No\n");
		}
	}
}

