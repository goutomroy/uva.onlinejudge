#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void main()
{
	char a[105][105],str[12000],ch[12000];
	long i,j,k,cas,len,tt,tag,c;
	scanf("%ld\n",&cas);
	for(k=1;k<=cas;k++)
	{
		gets(str);
		tag=0;
		printf("Case #%ld:\n",k);
		len=strlen(str);
		for(j=i=0;i<len;i++)
		if(isalpha(str[i]))
			ch[j++]=str[i];
		    ch[j]='\0';
			tt=sqrt(j);
		if(tt*tt!=j)
		{
			printf("No magic :(\n");
			continue;
		}
        for(i=c=0;i<tt;i++)
			for(j=0;j<tt;j++)
				a[i][j]=ch[c++];
		for(j=c=0;j<tt;j++)
		{
			for(i=0;i<tt;i++)
				if(a[i][j]!=ch[c++])
				{
					printf("No magic :(\n");
			        tag=1;
					break;
				}
				if(tag==1)
					break;
		}
		if(tag==1)
			continue;

		for(j=tt-1,c=0;j>=0;j--)
		{
			for(i=tt-1;i>=0;i--)
				if(a[i][j]!=ch[c++])
				{
					printf("No magic :(\n");
			        tag=1;
					break;
				}
				if(tag==1)
					break;
		}
		if(tag==1)
			continue;
for(i=tt-1,c=0;i>=0;i--)
		{
			for(j=tt-1;j>=0;j--)
				if(a[i][j]!=ch[c++])
				{
					printf("No magic :(\n");
			        tag=1;
					break;
				}
				if(tag==1)
					break;
		}
		if(tag==1)
			continue;
		else
			printf("%ld\n",tt);
	}
}
