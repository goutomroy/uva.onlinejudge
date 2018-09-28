#include<stdio.h>
#define sz 501

bool flag[sz][sz] ;

int main(void)
{
	long W, H, N, i, count, x1, y1, x2, y2 , j, k, res, min1, min2, max1, max2 ;

	while( scanf("%ld%ld%ld",&W,&H,&N)==3 &&(W||H||N))
	{
		for(i=1;i<=W;i++)
			for(j=1;j<=H;j++) flag[i][j] = false ;

			count = 0 ;

		for(i=0;i<N;i++)
		{
			scanf("%ld%ld%ld%ld",&x1, &y1, &x2, &y2 );	

			min1 = ( x1<x2?x1:x2); 
			max1 = ( x1>x2?x1:x2 ) ;

			min2 = ( y1<y2?y1:y2 );
			max2 = ( y1>y2?y1:y2 ) ;

			for(j=min1;j<=max1;j++)
			{
				for(k=min2;k<=max2;k++)
				{
					if( flag[j][k]==false )
					{
						count++;
						flag[j][k] = true;
					}
				}
			}	
		}

		res = W*H - count ;

		if( res ==0 ) printf("There is no empty spots.\n");

		else if( res==1 ) printf("There is one empty spot.\n");

		else if( res>=2 ) printf("There are %ld empty spots.\n",res );
	}

	return 0;
}