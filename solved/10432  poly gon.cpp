#include<stdio.h>
#include<math.h>
void main( )
{
long double r,n,b,c,area;
while(scanf("%Lf %Lf",&r,&n)==2)
{
b=(((2*n)-4)*90)/n;
b=b/2;
c=180-(2*b);
c=((2*acos(0))*c)/180;
area=((r*r)*sin(c))/2;
printf("%0.3Lf\n",area*n);
}
}
