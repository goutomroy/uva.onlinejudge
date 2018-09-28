#include<stdio.h>
#include<math.h>
#define sz 500005
#define swap(a,b) a^=b^=a^=b
long sop[sz],lsop[sz];
long factor(long n)
{
	long sum=0,i=3,t;
	t=n;
	while(n%2==0)
	{
		sum=sum+2;
		n=n/2;
	}
	while(i<=sqrt(n)+1)
	{
		if(n%i==0)
		{
			sum=sum+i;
			n=n/i;
		}
		else
			i=i+2;
	}

	if(n>1)
	sum=sum+n;
	return sum;

}
int sopgenerate()
{
	long j;
	for(j=2;j<=sz;j++)
			sop[j]=factor(j);
	
		
	return 0;
}
long process(long n)
{
	long count=1;
	while(n!=sop[n])
	{
		count++;
        n=sop[n];
	}
	return count;
}
int lsopgenerate()
{
	long j;
	for(j=2;j<=sz;j++)
	{
		if(j==sop[j])
			lsop[j]=1;
		else
		lsop[j]=process(j);
	}
	return 0;
}
void main()
{
	long cas,k,lb,ub,max,i;
	sopgenerate();
	lsopgenerate();
	scanf("%ld",&cas);
	for(k=1;k<=cas;k++)
	{
		scanf("%ld%ld",&lb,&ub);
		if(lb>ub)
			swap(lb,ub);
		//printf("%ld %ld",lb,ub);
		printf("Case #%ld:\n",k);
		max=0;
		for(i=lb;i<=ub;i++)
		{
			if(lsop[i]>max)
				max=lsop[i];
		}
		printf("%ld\n",max);
	}
}