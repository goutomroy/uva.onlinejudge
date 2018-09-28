#include<stdio.h>
#include<string.h>
#include<math.h>
void main( )
{
	long i,sum,pum,len;
	char a[2005];
	while(scanf("%s",a)==1 && strcmp(a,"0"))
	{
		len=strlen(a);sum=0;pum=0;
		for(i=0;i<len;i+=2)
		sum=sum+(a[i]-'0');
		for(i=1;i<len;i+=2)
		pum=pum+(a[i]-'0');
		if(sum==pum)
		{
			for(i=0;i<len;i++)
				printf("%c",a[i]);
			printf(" is a multiple of 11.\n");
		}
		else if(abs(sum-pum)%11==0)
		{
			for(i=0;i<len;i++)
				printf("%c",a[i]);
			printf(" is a multiple of 11.\n");
		}
		else
		{
			for(i=0;i<len;i++)
				printf("%c",a[i]);
			printf(" is not a multiple of 11.\n");
		}

	}
}

