#include<stdio.h>
#include<stdlib.h>
#define sz 100009

long input[sz], Min[sz];

int main(void)
{
	int T;
	long i, diff, n, temp;

	scanf("%d",&T);

	while(T--)
	{
		scanf("%ld",&n);

		for(i=0;i<n;i++)	scanf("%ld",&input[i] );

		Min[n-1] = input[n-1] ;

		temp = Min[n-1] ;

		for(i=n-2;i>=0;i--)
		{
			if(input[i]<temp)
			{
				Min[i] = input[i] ;
				temp = input[i] ;
			}
			else Min[i] = temp ;
		}

		diff = input[0] - Min[1];

		for(i=1;i<n-1;i++)
			if( input[i]-Min[i+1]>diff)
				diff = input[i] - Min[i+1] ;

		printf("%ld\n",diff);
	}
	return 0;
}