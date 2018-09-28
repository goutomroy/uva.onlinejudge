#include<stdio.h>
#include<math.h>
long gcd(long p,long q,long *x,long *y)
{
	long x1,y1,g;
	if(q>p)
		return (gcd(q,p,y,x));
	if(q==0)
	{
		*x=1;
		*y=0;
		return (p);
	}
	g=gcd(q,p%q,&x1,&y1);
	*x=y1;
	*y=(x1-floor(p/q)*y1);
	return g;
}
void main()
{
	long n,m,g,t1,t2;

	while(scanf("%ld%ld",&n,&m)==2)
	{
		g=gcd(n,m,&t1,&t2);
		printf("%ld %ld %ld\n",t1,t2,g);
	}
}