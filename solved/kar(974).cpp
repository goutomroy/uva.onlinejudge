#include<stdio.h>
void main( )
{
long kar[19]={9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879,4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962};
long cas,k,lb,ub,i,p;
scanf("%ld",&cas);
for(k=1;k<=cas;k++)
{
	scanf("%ld %ld",&lb,&ub);
	printf("case #%ld\n",k);
	for(i=p=0;i<19;i++)
		if(kar[i]>=lb && kar[i]<=ub)
		{
			p=1;
			printf("%ld\n",kar[i]);
		}
		if(p==0)
			printf("no kaprekar numbers\n");
		if(k!=cas)
			printf("\n");
}
}

	


