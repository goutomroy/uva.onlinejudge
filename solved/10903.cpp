#include<stdio.h>
#include<string.h>
int win[101], loss[101];

void initializer()
{
	int i;
	for(i=1;i<=100;i++)
		win[i] = loss[i] = 0;
}

void main()
{
	char c, str1[10], str2[10];
	int n, k, p1, p2, len1, len2;
	long total, i;
	double res;

	for(;scanf("%d",&n)==1;)
	{
		if(n==0)	break;

		scanf("%c%d%c",&c,&k,&c);

		total = k*n*(n-1)/2;

		initializer();

		for(i=0;i<total;i++)
		{
			scanf("%d%c%s%c%d%c%s%c",&p1,&c, str1,&c, &p2, &c, str2, &c);

			len1 = strlen(str1);
			len2 = strlen(str2);

			if(len1==4 && len2 == 8)
			{
				win[p1]++;
				loss[p2]++;
			}
			
			else if(len1==4 && len2 == 5)
			{
				win[p2]++;
				loss[p1]++;
			}

			else if(len1==5 && len2 == 4)
			{
				win[p1]++;
				loss[p2]++;
			}

			else if(len1==5 && len2 == 8)
			{
				win[p2]++;
				loss[p1]++;
			}

			else if(len1==8 && len2 == 4)
			{
				win[p2]++;
				loss[p1]++;
			}

			else if(len1==8 && len2 == 5)
			{
				win[p1]++;
				loss[p2]++;
			}
		}
		
		
		for(i=1;i<=n;i++)
		{
			if(loss[i]==0 && win[i]==0) printf("-\n");
		
			else
			{
				res = ( win[i]*1.00 )/(win[i]+loss[i]);
				printf("%.3lf\n",res);
			}
		}
		printf("\n");
	}
}


			

