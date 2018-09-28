#include<stdio.h>
#include<math.h>
void main( )
{
	long double p,q,k,s,a,b,c,rose,violet,sun,ary[5],R,x;
	while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3)
	{
		s=(a+b+c)*0.5;
		p=sqrtl(s*(s-a)*(s-b)*(s-c));
		k=p/s;
		rose=3.141592653589792*pow(k,2);
		violet=p-rose;
		x=sqrtl(s*(a+b-s)*(a+c-s)*(b+c-s))*4;
        R=(a*b*c)/x;
		sun=3.141592653589792*pow(R,2);
		sun=sun-p;
		printf("%.4Lf %.4Lf %.4Lf\n",sun,violet,rose);
	}
}
