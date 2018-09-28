#include<stdio.h>
#define sz 100

void main()
	{
	
	char str[sz],ch;
	double x1[sz],x2[sz],y1[sz],y2[sz],r[sz],point_x,point_y;
	double a,b,c,d,res;
	int total=0,i,k,t,rec[sz];


	while(1)
		{
		
		gets(str);

		if(str[0]=='*')
			break;
		else
		if(str[0]=='r')
			{
		sscanf(str,"%c %lf %lf %lf %lf",&ch,&a,&b,&c,&d);

		x1[total]=a;
		y1[total]=b;
		x2[total]=c;
		y2[total]=d;
		rec[total]=1;
			}
		else
			{
			sscanf(str,"%c %lf %lf %lf",&ch,&a,&b,&c);
			x1[total]=a;
			y1[total]=b;
			r[total]=c;	
			rec[total]=0;
			}

		total++;
		
		

		}

		k=1;
		
		while(1)
			{

			res=0;
			scanf("%lf%lf",&point_x,&point_y);

			if(point_x==9999.9&&point_y==9999.9)
				break;
	
			t=0;

			for(i=0;i<total;i++)
				{
				
				if(rec[i]==1)
					{
					if(point_x>x1[i]&&point_x<x2[i]&&point_y<y1[i]&&point_y>y2[i])
						{
						printf("Point %d is contained in figure %d\n",k,i+1);
						t=1;
						}
					}
				else
					{
					
					res=((point_x-x1[i])*(point_x-x1[i]))+((point_y-y1[i])*(point_y-y1[i]));
					

						if(res<=r[i]*r[i])
							{
							printf("Point %d is contained in figure %d\n",k,i+1);
							t=1;
							}
					
					}


				}
			if(t==0)
				printf("Point %d is not contained in any figure\n",k);
			k++;

			}



	}