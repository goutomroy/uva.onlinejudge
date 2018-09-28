#include<stdio.h>
#include<math.h>

long double x[1000009],y[1000009];
void main( )
{
long long  i,n;
long double l,a,c1,c2,c3,c4,d,area;
  while(scanf("%lld%Lf",&n,&a)==2)
  {
  if(n==0 && a==0)
  break;
  for(i=0;i<n;i++)
  scanf("%Lf%Lf",&x[i],&y[i]);
  l=0;d=a*a;
  for(i=0;i<n;i++)
  {
  c1=(x[i]*x[i])+(y[i]*y[i]);
  c2=((a-x[i])*(a-x[i]))+(y[i]*y[i]);
  c3=( (a-x[i]) * (a-x[i]) )+( (a-y[i]) * (a-y[i]));
  c4=(x[i]*x[i])+( (a-y[i]) * (a-y[i]));
  if(c1<=d && c2<=d&& c3<=d && c4<=d)
  l++;
  }
  area=(l*d)/n;
  printf("%.5Lf\n",area);
  }
  }



