#include<stdio.h>
void main( )
{
	long double a1,an,c[100000],result,mul;
	long cas,n,i,k;
	scanf("%ld",&cas);
	for(k=0;k<cas;k++)
	{
		if(k!=0)
			printf("\n");

		scanf("%ld",&n);
		scanf("%Lf%Lf",&a1,&an);
		
		for(i=0;i<n;i++)
		scanf("%Lf",&c[i]);
    
		for(i=mul=0;i<n;i++)
        mul=mul+(c[i]*(n-i));
		mul=mul*2;
		mul=((n*a1)+an)-mul;
		result=mul/(n+1);
		printf("%.2Lf\n",result);
	}
}
		
