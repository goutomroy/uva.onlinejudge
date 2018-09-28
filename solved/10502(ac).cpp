#include<stdio.h>
#define sz 105
char tt[sz][sz];
void main()
{
	long  x1,count,x2,y1,y2,r1,r2,tag,i,roy,c,d;
 	
	while(scanf("%d",&roy)==1 && roy)
	{
		scanf("%ld",&c);
		for(i=0;i<roy;i++)			
			scanf("%s", tt[i]);
		
		count=0;
		for(x1 =0;x1<roy;x1++)
		{
			for(y1=0;y1<c;y1++)
			{
				for(x2=x1; x2<roy;x2++)
				{
					for(y2=y1;y2<c;y2++)
					{
						tag=1;
						for(r1=x1;r1<=x2;r1++)
						{
							for(r2=y1;r2<=y2;r2++)
							{
								if(tt[r1][r2]==48)
								{
									tag=0;
									break;
								}
							}
							if(tag==0)
								break;
						}
						if(tag)
							count++;
					}
				}
			}
		}		
		printf("%ld\n",count);
	}
}