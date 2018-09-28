#include<stdio.h>
#include<math.h>
void main( )
{
	long double dis,angle,k,arc,r,x;
	char a[4];
	while(scanf("%Lf%Lf%s",&dis,&angle,a)==3)

	{
	r=6440+dis;
		if(a[0]=='m')
			angle=(angle/60);
		if(angle>180)
		angle=360-angle;
		if(angle==180)
		{
			angle=angle*(acos(0.0))/90;
			arc=r*angle;
			x=2*r;
}
		else
		{
		angle=angle*(acos(0.0))/90;	
		arc=r*angle;
	
		k=2*acos(0.0)-angle;
		k=k/2;
		
		x=(r*sin(angle))/sin(k);
		}

		printf("%0.6Lf %0.6Lf\n",arc,x);
	}
}


