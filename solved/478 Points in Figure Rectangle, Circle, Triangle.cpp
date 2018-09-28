#include<stdio.h>
#include<math.h>

double area_triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double area;
	
	area = 0.5*( (x1*(y2-y3)) + (x2*(y3-y1)) + x3*(y1-y2) );

	if(area<0)	area = area*-1;
	
	return area;
}

void main()
{

	double points[11][6], x, y, dis, area, area1, area2, area3;

	char   c[12];

	int i, j, k, ans;


	for(i=0;scanf("%c",&c[i])==1;i++)
	{
		if(c[i]=='*')	break;

		else if(c[i]=='r')
			scanf(" %lf %lf %lf %lf ", &points[i][0], &points[i][1], &points[i][2], &points[i][3]);

		else if(c[i]=='t')
			scanf(" %lf %lf %lf %lf %lf %lf ", &points[i][0], &points[i][1], &points[i][2], &points[i][3], &points[i][4], &points[i][5]);

		else	scanf(" %lf %lf %lf ", &points[i][0], &points[i][1], &points[i][2]);
	}

	for(j=1;scanf("%lf%lf",&x, &y)==2;j++)
	{
		if(x==9999.9 && y==9999.9)	break;

		ans = 0;

		for(k=0;k<i;k++)
		{
			if(c[k]=='c')
			{
				dis = sqrt( (points[k][0]-x)*(points[k][0]-x) + (points[k][1]-y)*(points[k][1]-y));

				if(dis<points[k][2])
				{
					printf("Point %d is contained in figure %d\n",j,k+1);

					ans = 1;
				}
			}

			else if(c[k]=='r')
			{
				if(x<points[k][2] && x>points[k][0] && y<points[k][1] && y>points[k][3])
				{
					ans = 1;
					
					printf("Point %d is contained in figure %d\n",j,k+1);
				}
			}

			else if(c[k]=='t')
			{
				area = area_triangle(points[k][0], points[k][1], points[k][2], points[k][3], points[k][4], points[k][5]);

				area1 = area_triangle(points[k][0], points[k][1], x, y, points[k][2], points[k][3]);

				area2 = area_triangle(points[k][0], points[k][1], x, y, points[k][4], points[k][5]);

				area3 = area_triangle(points[k][2],points[k][3], x, y, points[k][4], points[k][5]); 

				if( fabs(area - ( area1 + area2 + area3))<=0.000001)
				{
					printf("Point %d is contained in figure %d\n",j,k+1);

					ans = 1;
				}
			}

		}

		if(ans==0)	printf("Point %d is not contained in any figure\n",j);
	}
}


		
