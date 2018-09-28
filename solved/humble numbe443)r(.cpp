#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
#define max 2000000000L
long long humble[5850],num=0,c=0;
int hum()
{
	int i,j,k,l;

	for(i = 0 ;    ; i++)
	{
		for(j = 0 ;    ; j++)
		{	
			for(k = 0;  ; k++)
			{
				for(l = 0 ;   ; l++)
				{
					num = pow( 2 , i ) * pow( 3 , j ) * pow( 5 , k ) * pow( 7 , l );

					if( num <= max )

					humble [ c++ ] = num;
					else
					break;
					
				}
				if(l==0)
					break;
			}
			if(k==0)
				break;
		}
		if(j==0)
			break;
	}

return 0;
}
void main()
{
	long long  n;
	hum(  );
	sort(&humble[0],&humble[c]);
	while(scanf("%lld",&n)==1 && n)
	{
		if((n%100)/10==1)
		printf("The %lldth humble number is %lld.\n",n,humble[n-1]);
		else if(n%10==1) 
		printf("The %lldst humble number is %lld.\n",n,humble[n-1]);	
		else if(n%10==2)
		printf("The %lldnd humble number is %lld.\n",n,humble[n-1]);	
		else if(n%10==3) 
		printf("The %lldrd humble number is %lld.\n",n,humble[n-1]);
		else 
		printf("The %lldth humble number is %lld.\n",n,humble[n-1]);
	}
}
