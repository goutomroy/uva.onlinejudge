#include <stdio.h>
#include <math.h>

void main()
{
	double x1,x2,x3,y1,y2,y3,g,f,h,k,c,r,d1,d2,d3,d,st1,st2,st3,cir;

	while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3)==6)
	{
		d1=-(x1*x1+y1*y1);
		d2=-(x2*x2+y2*y2);
		d3=-(x3*x3+y3*y3);
		d=((2*x1*(2*y2-2*y3))+(2*y1*(2*x3-2*x2))+
(1*(2*x2*2*y3-4*y2*x3)));
		st1=((2*d1*(2*y2-2*y3))+(2*y1*(2*d3-2*d2))+
(1*(2*d2*2*y3-4*y2*d3)));
		st2=((2*x1*(2*d2-2*d3))+(2*d1*(2*x3-2*x2))+
(1*(2*x2*2*d3-4*d2*x3)));
		st3=((2*x1*(2*y2*d3-2*y3*d2))+(2*y1*(2*x3*d2-2*x2*d3))+
(d1*(2*x2*2*y3-4*y2*x3)));
		g=(st1/d);
		f=(st2/d);
		c=(st3/d);
		h=(g/2);
		k=(f/2);
		r=sqrt((h*h)+(k*k)-c);
		cir=2*3.141592653589793*r;
		printf("%.2lf\n",cir);

	}
}