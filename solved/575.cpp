#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	long i,len,n,sum;
	char skew[1000];

	while(scanf("%s", skew)==1   &&  skew[0]!='0' )
	{
		sum=0;
		len=strlen(skew);
		for(i=len-1,n=1;i>=0;--i,n++)
        	sum=((skew[i]-'0')*(pow(2,n)-1))+sum;
			printf("%ld\n", sum);
	}
}
