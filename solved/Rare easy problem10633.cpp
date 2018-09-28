#include <stdio.h>

void main( )
{
	unsigned long long   dif,num,i,x,y,result,count;
	while(scanf("%llu",&dif)==1 && dif!=0)
	{
          count=0;	
		num=(dif*10)/9;
		x=num-10;y=num+10;
		for(i=x;i<=y;i++)
                  {
                         result=i/10;
                        result=i-result;
			if(result==dif)
                        {
                         if(count==0)
                         {
                         printf("%llu",i);
                        count=1;
                          }
                          else
		        printf(" %llu",i);
                          
                           }
                    }	
      
		printf("\n");
	}
}


