#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793
void main( )
{
long double d,cut,clin,con,s,result;
while(scanf("%Lf%Lf",&d,&cut)==2)
{
if(d==0 && cut==0)
break;
clin=((pi*d*d*d)/4.000)-cut;
clin=clin/2.000;
con=(pi*d*d*d)/24.000;
clin=clin-con;
s=(clin*12.000)/pi;
result=exp(log(s)/3);
printf("%.3Lf\n",result);
}
}
