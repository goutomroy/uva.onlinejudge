#include<stdio.h>
#include<math.h>
void main( )
{
long double r1,r2,r3,A,B,C,area,triarea,s,c1,c2,c3,result;
long n,i;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%Lf%Lf%Lf",&r1,&r2,&r3);
A=r1+r2;
B=r2+r3;
C=r1+r3;
s=(A+B+C)/2;
triarea=sqrt(s*(s-A)*(s-B)*(s-C));
c1=acos(((A*A+C*C)-(B*B))/(2*A*C));
c2=acos(((A*A+B*B)-(C*C))/(2*A*B));
c3=acos(((C*C+B*B)-(A*A))/(2*C*B));

area=((r1*r1*c1)+(r2*r2*c2)+(r3*r3*c3))/2;
result=triarea-area;
printf("%Lf\n",result);
}
}
