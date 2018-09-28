#include<stdio.h>
#include<string.h>
#include<math.h>

int main( )
{
char line[100];
          
double area,r1,r2,pi;
int i,k,n;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
gets(line);
k=sscanf(line,"%lf %lf",&r1,&r2);
if(k==1)
{
r2=r1;
area=(2*acos(0.0)*r1*r2)/8;
}
else
area=2*2*acos(0.0)*r1*r2;
printf("%0.4lf\n",area);
}
}
