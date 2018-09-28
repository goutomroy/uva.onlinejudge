#include<stdio.h>
#include<string.h>
void main( )
{
	long i,j,n,total,linespace,min,result;
	char a[15][30];
	while(scanf("%ld",&n)==1 && n!=0)
	{	
		total=0;min=26;
		for(i=0;i<n;i++)
		scanf(" %[^\n]",a[i]);
		for(i=0;i<n;i++)
		{
			linespace=0;
			for(j=0;j<25;j++)
			{
				if(a[i][j]==' ')
				{
					total++;
					linespace++;
				}
			}
			if(linespace<min)
				min=linespace;
		}
		result=total-(n*min);
		printf("%ld\n",result);
	}
}



