#include<stdio.h>
#include<math.h>
void main( )
{
long t=0,n;
double area,r1,areaoc1,c,r2,areaoc2,c1;
while(scanf("%ld%lf",&n,&area)==2 && n>=3)
{
	t++;
	if(area==0.0)
printf("Case %ld: %.5lf %.5lf\n",t,area,area);
	else
	{
c=(4*acos(0.0))/n;
r1=(area*2)/(sin(c)*n);
areaoc1=3.1415926535897932384626633832795028841971693993751058209749445923078164062*r1;
c1=(2*acos(0.0))/n;
r2=(area*cos(c1))/(n*sin(c1));
areaoc2=3.1415926535897932384626633832795028841971693993751058209749445923078164062*r2;

printf("Case %ld: %.5lf %.5lf\n",t,areaoc1-area,area-areaoc2);
	}
}
}






