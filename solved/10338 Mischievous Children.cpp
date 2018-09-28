// WRONG ANSWERE

#include<stdio.h>
#include<string.h>

char word[22],nline;
int time[22],len;

void main()          
{
	int tcase,i,j, k;
	double N, fact;

	scanf("%d%c",&tcase,&nline);

	for(i=0;i<tcase;i++)
	{
		scanf("%s",word);
		scanf("%c",&nline);

		len = strlen(word);

		if(len==1)
		{
			printf("Data set %d: 1\n",i+1);
			continue;
		}

		for(j=0;j<20;j++)
			time[j] = 1;

		for(j=0;j<len;j++)
		{
			for( k=j+1; k<len; k++ )
			{
				if( word[j]==NULL)
					break;
				else if( word[j] == word[k] )
				{
					time[j]++;
					word[k] = NULL;
				}
			}
		}

			N=1;
		
		for(k=len;k>1;k--)
			N = N*k;

		for(j=0;j<len;j++)
		{
			for(fact = 1;time[j]>1;time[j]--)
				fact = fact*time[j];

			N = N/fact;
		}
		printf("Data set %d: %.0lf\n",i+1,N);
	}
}




		 

