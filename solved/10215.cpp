#include<stdio.h>
#include<math.h>

int main()
{
	double l,w,part1,part2,min,max;

	while(scanf("%lf %lf",&l,&w)==2)
	{
		if(l>=w)
			min=w/2.0;
		else
			min=l/2.0;

		part1=(w+l);

		part2=sqrt(pow(w+l,2)-3*w*l);


		max=(part1-part2)/6.0;
		
		printf("%.3lf 0.000 %.3lf\n",max,min);
	}
	return 0;
}
