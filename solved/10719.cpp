#include<stdio.h>

long double Co[10005],k;
long i,j;
char sp;

int main()
{
	while(scanf("%Lf",&k)==1)
	{
		for(i=0;;i++)
		{
			if(scanf("%Lf%c",&Co[i],&sp)!=2)
				break;
			if(sp==10)
				break;
		}

		printf("q(x): ");
		for(j=0;j<i;j++)
		{
			Co[j+1]=Co[j+1]+Co[j]*k;
			printf("%.0Lf",Co[j]);
			if(i-j>1)
			printf(" ");
		}
		printf("\nr = %.0Lf\n\n",Co[j]);
	}
	return 0;
}
		
