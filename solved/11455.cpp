#include<stdio.h>

int result(long long a,long long b,long long c,long long d)
{
	long long x, y, p, q, r, s;

	x=a+b-1;
	y=c+d-1;
	p=a+c-1;
	q=b+d-1;
	r=a+d-1;
	s=b+c-1;
	
	if( (a==b) && (b==c) && (c==d) )
		printf("square\n");
	
	else if( (a==b && c==d) ||  (a==c && b==d)  || (a==d && b==c) ) 
		printf("rectangle\n");
	
    else if( (x > y) &&  (a+b > y) && (a+y > b) && (b+y > a) )
		printf("quadrangle\n");

	else if( (y > x) &&  (c+d > x) && (c+x > d) && (d+x > c) )
		printf("quadrangle\n");

	else if( (p > q) &&  (a+c > q) && (a+q > c) && (c+q > a) )
		printf("quadrangle\n");

	else if( (q > p) &&  (b+d > p) && (b+p > d) && (d+p > b) )
		printf("quadrangle\n");

	else if( (r > s) &&  (a+d > s) && (a+s > d) && (d+s > a) )
		printf("quadrangle\n");

	else if( (s > r) &&  (b+c > r) && (b+r > c) && (c+r > b) )
		printf("quadrangle\n");

	else
		printf("banana\n");

	return 0;
}



int main()
{
	long long cas, a, b, c, d;

    scanf("%lld",&cas);

	while(cas--)
	{
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		result(a, b, c, d);
	}
	return 0;
}