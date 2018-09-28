#include<stdio.h>
#include<math.h>

void main()
{
	double a,b,s,m,n,angle,velocity,x,y,pi,constant;

	pi=2*acos(0);
	constant=180/pi;

	while(1){
		scanf("%lf %lf %lf %lf %lf",&a,&b,&s,&m,&n);

		if(a==0 && b==0 && s==0 && m==0 && n==0)
			break;

		x = sqrt((m*m*a*a)+(n*n*b*b));
		y = (n*b)/(m*a);
		velocity = x / s;
		angle=atan(y)*constant;

		printf("%.2lf %.2lf\n",angle,velocity);
	}
}


