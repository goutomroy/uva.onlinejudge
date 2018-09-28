#include<stdio.h>

void main()
{
	long n, dumy, i, j;

	while(scanf("%ld",&n)==1 &&n)
                   {
		
		for(i=j=0;i<n;i++)
                   {
			scanf("%ld",&dumy);

			if(dumy>0 && !j)
                                {
				printf("%ld",dumy);
				j = 1;
			        }
			else if(dumy>0 && j==1) 
                        printf(" %ld",dumy);
		  }

		if(!j)
             	printf("0");

		printf("\n");
	}
}
