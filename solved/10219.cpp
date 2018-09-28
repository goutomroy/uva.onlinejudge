#include<stdio.h>
#include<math.h>



void main()
	{

	long long i,j,k;

	long double lb,ub,lob,hor,digit=0;

while(scanf("%Lf%Lf",&ub,&lb)==2)
	{

	lob=1;
	hor=1;
	digit=0;

	k=(lb>(ub-lb))?lb:(ub-lb);
	
	for(i=k+1,j=1;i<=ub;i++,j++)
		{
	
		lob=i;
		hor=j;

		digit+=log10(lob/hor);
	

		}
	digit=floor(digit)+1;

	printf("%.0Lf\n",digit);
	
	}

}