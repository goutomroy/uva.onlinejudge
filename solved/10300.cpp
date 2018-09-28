#include<stdio.h>
struct goutom
{
	long long x,y,z;
}roy[30];
void main( )
{
	long long n,i,j,sum,m;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%ld",&m);
		for(j=0;j<m;j++)
			scanf("%lld%lld%lld",&roy[j].x,&roy[j].y,&roy[j].z);
		for(j=0;j<m;j++)
			sum=sum+(roy[j].x*roy[j].z);
		printf("%lld\n",sum);
	}
}
