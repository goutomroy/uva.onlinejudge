#include<stdio.h>
#include<math.h>
void cant(unsigned long n)
  {
  float row;
  unsigned long x,y,z;

  row=ceil((-1+(sqrt(1+8*n)))/2);
  z=row;
  x=n-((row*(row-1))/2);
  y=row-x+1;
  if(z%2==0)
	 printf("TERM %lu IS %lu/%lu",n,x,y);
	else
	 printf("TERM %lu IS %lu/%lu",n,y,x);
  }
void main()
  {
  unsigned long n;
 while(scanf("%lu",&n)==1)
	{
	cant(n);
	printf("\n");
	}
  }