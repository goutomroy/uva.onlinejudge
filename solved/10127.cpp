#include<stdio.h>
void main( )
{
	long long n,one,k,input;
	while(scanf("%lld",&input)==1)
	{
		k=1;n=1;one=1;
		
		
		do
		{
			if(n<input)
				n=(n*10)+1;
			one=one+1;
			k=n%input;
			n=k;
		}while(k!=0);

		printf("%lld\n",one);
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
	
