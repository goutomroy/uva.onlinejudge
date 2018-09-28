#include<stdio.h>
#include<math.h>
#define ERR 1e-10
void main( )
{
	float feet,wall,one,fatig,night,per;
	int day;
	while(scanf("%f%f%f%f",&wall,&one,&night,&fatig)==4 )
	{
		if(fabs(wall - 0.00000) <ERR)
			break;
		day=1;feet=0;
		per=(fatig*one)/100;
		while(1)
		{
			if(one>=0)
		feet=feet+one;
		if(feet>wall)
		{
			printf("success on day %d\n",day);
			break;
		}
		feet=feet-night;
		if(feet<0)
		{
			printf("failure on day %d\n",day);
			break;
		}
		one=one-per;
		day++;
		
		}
	}
}


