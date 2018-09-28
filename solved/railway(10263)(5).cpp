#include<stdio.h>
#include<math.h>

#define err 0.00000000001
#define sz 10000
#define big (pow(2.0,32.0)-1.0)
#define distance(p, q, r, s)  sqrt(pow(p-r,2.0)+pow(q-s,2.0)) 

struct goutom
{
    double x, y;
}roy[sz];

int main()
{
	  double a, b, distance1, distance2, distance3, mid1, mid2, p1, p2, p3, p4, resultx, resulty, min;
	 long n, i, t;

	while(scanf("%lf%lf",&a,&b)==2)
	{

scanf("%ld",&n);

t=((2*n)+2)/2;

for(i=1;i<=t;i++)
scanf("%lf%lf",&roy[i].x,&roy[i].y);

resultx = resulty = min = big;

t=t-1;

for(i=1;i<=t;i++)
{
	p1=roy[i].x;
	p2=roy[i].y;
	p3=roy[i+1].x;
	p4=roy[i+1].y;

	while(1)
	{
		mid1=((p1+p3)/2);

		mid2=((p2+p4)/2);

        distance1=distance(a, b, p1, p2);

        distance2=distance(a, b, mid1, mid2);

		distance3=distance(a, b, p3, p4);

		if(fabsl(distance1-distance3)<=err)
		{
			if(distance2<min)
			{
				resultx=mid1;
				resulty=mid2;
			}
			break;
		}

		else if(distance1<distance3)
		{
		  p3=mid1;
		  p4=mid2;

		  if(distance1 < min)
		  {
		  min=distance1;
		  resultx=p1;
		  resulty=p2;
		  }
		}
		else
		{
		  p1=mid1;   
          p2=mid2;

		  if(distance3 < min)
		  {
		  min=distance3;
		  resultx=p3;
		  resulty=p4;
		  }
		}
	}
}
printf("%.4lf\n%.4lf\n",resultx+err,resulty+err);
	}

	return 0;
}