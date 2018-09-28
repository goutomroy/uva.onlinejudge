#include<stdio.h>
#include<math.h>
#define err 0.0000000001

void main()
{
	double l,w,d,r1,r2=0.000,r3,a,b,c;

	while(scanf("%lf %lf",&l,&w)==2){
		if(l<w){
			d=l;
			l=w;
			w=d;
		}
		r3=w/2;
		a=4*(w+l);
		b=a*a-48*l*w;
		c=a-sqrt(b);
		r1=c/24;
		printf("%.3lf %.3lf %.3lf\n",r1+err,r2+err,r3+err);
	}
}

       