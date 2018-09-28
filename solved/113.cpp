#include<stdio.h>
#include<math.h>
int main( )
{
	long double  dummy,n,p,k;
	while(scanf("%Lf%Lf",&n,&p)==2)
	{
dummy=log(p);
dummy=dummy/n;
	k=exp(dummy);	
		printf("%.0Lf\n",k);
	}
return 0;
}