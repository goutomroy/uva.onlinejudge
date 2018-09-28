#include<stdio.h>
#include<math.h>
void main( )
{
double k,n,com,i;
double c,seg,r;
long count=0;

	while(scanf("%lf",&n)==1)
	{
if(count!=0)
printf("\n");
		r=(2*n)-1;
		c=r/2.00;
		seg=ceil(8*c);
		com=0;
		for(i=1;i<=n-1;i++)
		{
			k=floor(sqrt((c*c)-(i*i)));
			com=com+(4*k);
		}
		printf("In the case n = %.0lf, %.0lf cells contain segments of the circle.\n",n,seg);
		printf("There are %.0lf cells completely contained in the circle.\n",com);
count=1;


	}
}


