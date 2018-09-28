#include<stdio.h>

int main(void)
{
	unsigned long T, i, j, temp, Total_choc, Total_box, Friend, Box, k ;

	scanf("%lu",&T);

	while( T-- )
	{
		scanf("%lu%lu",&Friend, &Box );

		Total_choc = 0 ;

		for(i=0;i<Box;i++)
		{
			scanf("%lu",&k);

			Total_box = 1 ;

			for(j=1;j<k;j++) 
			{
				scanf("%lu",&temp);				
				
				Total_box = ((Total_box%Friend)*(temp%Friend))%Friend ;
			}

			scanf("%lu",&temp);

			Total_choc = Total_choc + ((Total_box%Friend)*(temp%Friend))%Friend ;
		}

		printf("%lu\n",Total_choc%Friend);
	}
	return 0;
}

