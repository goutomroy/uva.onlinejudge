#include<stdio.h>
#include<math.h>
#define error 0.00000000001
void main()
{
	long double x,y,number,p,dx,result;
	while(scanf("%Lf",&number)==1  &&  !(fabs(number-0.00)<error))
	{
		x=floor(exp(log(number)/3)+error);
		y=ceil(exp(log(number)/3));
		p=fabs(x-y);
		if(p<error)
		printf("%.4Lf\n",x);
		else
		{
			dx=(number-pow(x,3))/(3*pow(x,2));
			result=(x+dx)+error;
			printf("%.4Lf\n",result);
		}
	}
}