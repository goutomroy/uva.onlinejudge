#include<stdio.h>
#include<math.h>
void main( )
{
	long i,k,r,cas,c;
	scanf("%ld",&cas);
	for(c=0;c<cas;c++)
	{
		scanf("%ld",&k);
		if(k<0)
			k=k*-1;
		i=(long)floor(sqrt(2*k) + 0.5);
		
for(  ;  ;i++)
{
	r=(i*(i+1)*0.5)- k;
	if(!(r%2)  &&  i>0)
	{
		printf("%ld\n",i);
		break;
	}
	

}
	}
	}

