#include<stdio.h>
#include<string.h>
long i,j,cas,c,p,k,t;
char a[200][3000],ch,*ptr,str[200][3000];
void main()
{
	scanf("%ld",&cas);
	scanf("%c",&ch);
	scanf("%c",&ch);
	for(t=1;t<=cas;t++)
	{
		k=1;
		while(gets(a[k++]) && strlen(a[k-1])!=0)
		;
		printf("Case #%ld:\n",t);
		for(j=1;j<k-1;j++)
		{
			i=0;
			ptr=strtok(a[j]," ");
			while(ptr)
			{
				strcpy(str[i++],ptr);
				ptr=strtok(NULL," ");
			}
			for(c=0,p=0;c<i;c++)
			{
				if((strlen(str[c])-1)<p)
					;
				else
					printf("%c",str[c][p++]);
			}
			printf("\n");
		}
		if(t!=cas)
			printf("\n");
		}
	}


