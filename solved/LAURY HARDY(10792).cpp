#include<stdio.h>
#include<math.h>
void main( )
{
    double kos1,hoj,k,r,d,h,kos2,kos,p,h2,m;
	int cas,i;
	scanf("%d",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%lf%lf%lf",&r,&d,&h);
		k=r-d;
		m=r-h;
		hoj=sqrtl(r*r-k*k);
		kos1=asin(m/r);
		kos2=atan(k/hoj);
		kos=kos1-kos2;
		p=hoj*2;
		h2=(sin(kos)*p)+h;
		printf("Case %d: %.4lf\n",i,h2);
	}
}









