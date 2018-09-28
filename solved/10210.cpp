#include<stdio.h>
#include<math.h>
void main( )
{
long double x1,x2,y1,y2,angle1,angle2,result,ab,x,y;
while(6==scanf("%Lf%Lf%Lf%Lf%Lf%Lf",&x1,&y1,&x2,&y2,&angle1,&angle2))
{
ab=sqrtl((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
angle1=angle1*(acos(0.0)/90);
angle2=angle2*(acos(0.0)/90);
if(ab==0)
x=y=0;
else
{
x=ab/tan(angle1);
y=ab/tan(angle2);
}
result=x+y;
printf("%.3Lf\n",result);
}
}
