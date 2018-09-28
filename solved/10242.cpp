#include<stdio.h>
void main( )
{
double x1,x2,x3,x4,y1,y2,y3,y4,x,y,A1,B1,A2,B2,A4,B4;
while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)==8)
{
if(x1==x2)
{
A2=x1;A1=x3;A4=x4;
B2=y1;B1=y3;B4=y4;
}
if(x1==x3)
{
A2=x1;A1=x2;A4=x4;
B2=y1;B1=y2;B4=y4;
}
if(x1==x4)
{
A2=x1;A1=x2;A4=x3;
B2=y1;B1=y2;B4=y3;
}
if(x2==x3)
{
A2=x2;A1=x4;A4=x1;
B2=y2;B1=y4;B4=y1;
}
if(x2==x4)
{
A2=x2;A1=x1;A4=x3;
B2=y2;B1=y1;B4=y3;
}
if(x3==x4)
{
A2=x3;A1=x1;A4=x2;
B2=y3;B1=y1;B4=y2;
}

x=(A1+A4)-A2;
y=(B1+B4)-B2;
printf("%.3lf %.3lf\n",x,y);
}
}
