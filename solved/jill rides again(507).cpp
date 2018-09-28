#include<stdio.h>
#define sz 20005
long cas,total,beg,end,a[sz];

int MAX_I_SUM(long k)
{
	long sum,max,beg,end,index,i;
	sum=max=beg=end=index=0;
	for(i=1;i<total;i++)
	{
		sum+=a[i];

		if(index==0)
			index=i;

		if(sum<0)
			index=sum=0;
else if(sum==max)
{
if(i+1-index>end-beg)
{
	beg=index;
	end=i+1;
}
}

else if(sum>max)
{
	max=sum;
	beg=index;
	end=i+1;
}

	}
	if(beg==0)  /*beg==0 , mean maxsum<0 ,then if you know the maximum just traverse arry for the maximum.*/
printf("Route %ld has no nice parts\n",k);
else
printf("The nicest part of route %ld is between stops %ld and %ld\n",k,beg,end);
	
	return 0;
}
void main()
{
	long i,k;
	scanf("%ld",&cas);
	for(k=1;k<=cas;k++)
	{
		scanf("%ld",&total);
		for(i=1;i<total;i++)
			scanf("%ld",&a[i]);
		MAX_I_SUM(k);
	}
}