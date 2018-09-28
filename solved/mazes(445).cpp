#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[1000];
	long i,j,count,len;
	while(gets(a))
	{
		/*if(strlen(a)==0)
		{
			printf("\n");
			continue;
		}*/
		count=0;
		len=strlen(a);
		for(i=0;i<=len;i++)
		{
			if(isdigit(a[i]))
				count+=a[i]-48;

			else if(a[i]=='!'|| a[i]=='\0')
				printf("\n");
			else
			{
			if(a[i]=='b')
			    for(j=0;j<count;j++)
				printf(" ");

			else
				for(j=0;j<count;j++)
				printf("%c",a[i]);

			count=0;
			}
		}
		//printf("\n");
	}
	}