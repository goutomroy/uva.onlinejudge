#include<stdio.h>
void main( )
{
 long double a1,b1,c1,a2,b2,c2,x,y;
 while(scanf("%Lf%Lf%Lf%Lf%Lf%Lf",&a1,&b1,&c1,&a2,&b2,&c2)==6)
 {
 if(a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0)
 break;
 if(a1*b2==a2*b1)
 printf("No fixed point exists.\n");
 else
 {
 x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
 y=(c1*a2-c2*a1)/(a1*b2-a2*b1);
 if(x<0.0)
 x=x*-1;
 else
 x=x*-1;
 if(y<0.0)
 y=y*-1;
 else
 y=y*-1;
 printf("The fixed point is at %.2Lf %.2Lf.\n",x,y);
 }
 }
 }

