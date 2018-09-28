#include<stdio.h>
#include<math.h>

void gangster(double ttt)
{
	double love;
	while(ttt)
	{
			if(ttt>9999999)
			{
				love=(long)(ttt/10000000);
				if(love)
					gangster(love);
					printf("kuti");
				ttt=(long)fmod(ttt,10000000);
			}
		    else if(ttt>99999)
			{
				love=(long)(ttt/100000);			
				if(love)
					printf("%.lf lakh",love);
				ttt=(long)fmod(ttt,100000);
			}
			else if(ttt>999)
			{
				love=(long)(ttt/1000);
				if(love)
					printf("%.lf hajar",love);
				ttt=(long)fmod(ttt,1000);
			}
			else if(ttt>99)
			{
				love=(long)(ttt/100);
				if(love)
					printf("%.lf shata",love);
				ttt=(long)fmod(ttt,100);
			}
			else if(ttt>0)
			{
				printf("%.lf",ttt);
				ttt=0;
			}
			printf(" ");
	}

}

int main()
{
	double ttt;
	int cas=0;
	while(scanf("%lf",&ttt)==1)
	{
		if(ttt==0)
		{
			printf("%4d. 0\n",++cas);
			continue;
		}
		printf("%4d. ",++cas);

		gangster(ttt);

		printf("\n");

	}
	return 0;
}
			
				

			