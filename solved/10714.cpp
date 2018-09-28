#include<stdio.h>
long minimum(long x,long y);
long maximum(long x,long y);
int main( )
{
	long cas,len,n,max,min,num,i,j,k;
	scanf("%ld",&cas);
	for(i=0;i<cas;i++)
	{
		max=min=0;
		scanf("%ld%ld",&len,&num);
		for(j=0;j<num;j++)
		{
			scanf("%ld",&n);
			k=maximum(n,len-n);
			max=maximum(max,k);
			k=minimum(n,len-n);
			min=maximum(min,k);
		}
		printf("%ld %ld\n",min,max);
	}
	return 0;
}
long minimum(long x,long y)
{
	if(x<y)
		return x;
	return y;
}
long maximum(long x,long y)
{
	if(x>y)
		return x;
	return y;
}


