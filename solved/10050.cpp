#include<stdio.h>
#include<string.h>
void main( )
{
char flag[3660];
	long i,k,np,d,cas,day,num,p,counter,j;
	scanf("%ld",&cas);
	for(k=0;k<cas;k++)
	{
memset(flag,'0',sizeof(flag));
		scanf("%ld%ld",&day,&np);
		for(i=1,j=0; ;i++,j++)
		{
			d=(6*i)+j;
			if(d>day)
				break;
			else
				flag[d]='2';
			p=d+1;
			if(p>day)
				break;
			else
				flag[p]='2';
		}

	
		for(i=0;i<np;i++)
		{
		scanf("%ld",&num);
		d=0;
		while(1)
		{
			p=num+d;
			if(p>day)
				break;
			d=p;
			if(flag[p]!='2')
			flag[p]='1';
			
		}
		}
		for(i=1,counter=0;i<=day;i++)
		{
			if(flag[i]=='1')
				counter++;
		}
		printf("%ld\n",counter);
	}
}

