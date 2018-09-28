#include<stdio.h>
#include<math.h>
void main( )
{
	double l,f,volume,v;
	while(scanf("%lf%lf",&l,&f)==2 && (l!=0 && f!=0))
	{
		v=sqrt(l*f*2.0);
		volume=(v*3600)/(2*l);
		printf("%.8lf %.8lf\n",v,volume);
	}
}