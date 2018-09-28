#include<stdio.h>
void main()
{
	long all[15],m1,d1,y1,y2,m2,d2,cas,d,m,y,k;
	all[1]=31; all[2]=28; all[3]=31; all[4]=30;
	all[5]=31; all[6]=30; all[7]=31; all[8]=31;
	all[9]=30; all[10]=31; all[11]=30; all[12]=31;
scanf("%ld",&cas);
for(k=1;k<=cas;k++)
{
	scanf("%ld/%ld/%ld",&d1,&m1,&y1);
	scanf("%ld/%ld/%ld",&d2,&m2,&y2);
	printf("Case #%ld: ",k);
	if(d1<d2)
	{
		d1=d1+( ( (!(y1%4) && y1%100)  || !(y1%400) ) && m1==2)? 29: all[m1];
		d=d1-d2;
        m1--;
	}
	else
		d=d1-d2;
	if(m1<m2)
	{
		m=m1+1-m2;
		y1--;
	}

	else
		m=m1-m2;
		y=y1-y2;
		if(y<0)
			printf("Invalid birth date\n");
		else if(y>130)
			printf("Check birth date\n");
		else 
			printf("%ld\n",y);
}
}


	

