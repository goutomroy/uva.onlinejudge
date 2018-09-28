#include<stdio.h>
#include<string.h>

void main()
{
	//freopen("a.in","r",stdin);

	int length[31], i, count=0;

	char c, store;

	for(i=0;i<31;i++)
		length[i] = 0;

	for(;scanf("%c",&c)==1;)
	{
		if(c=='#')
		{
			for(i=1;i<31;i++)
			{
				if(length[i]!=0)
				{
					printf("%d %d\n",i, length[i]);

					length[i] = 0;
				}
			}
			printf("\n");
		}
		
		else
		{
			if(c=='-')
			{
				store = '-';
				continue;
			}

			else if(c==' ' || c=='?' || c=='!' || c==',' || c=='.')
			{
				length[count]++;
				
				count = 0;	store = '\0';
			}

			else if(c == '\n' && store!='-')
			{
				length[count]++;
				
				count = 0;
			}
			
			else if( ( c=='\n' && store == '-') || c=='\'')
				continue;
			
			else	count++;
		}
	}
}
