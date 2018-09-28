#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 100

long key,total;

void main()
	{
	char keyword[21][sz],str[21][sz],sub[sz],ch;

	long key,l,i,j,k,len,array[50],max=0,set=0,count=0;

	while(scanf("%ld%ld",&key,&total)==2)
		{
		max=0;

		for(i=0;i<key;i++)
			scanf("%s",keyword[i]);

		scanf("%c",&ch);

		for(i=0;i<total;i++)
			gets(str[i]);

		max=0;

		for(i=0;i<total;i++)
			{
			
			len=strlen(str[i]);
			k=0;
			count=0;
			for(j=0;j<=len;j++)
				{

				if(str[i][j]!=' '&&(ispunct(str[i][j]))==0&&(isdigit(str[i][j]))==0&&str[i][j]!='\0')
					{	
					sub[k++]=tolower(str[i][j]);
					}
					else
						{
						sub[k]='\0';
						k=0;
						for(l=0;l<key;l++)
							{
							if(!strcmp(sub,keyword[l]))
								count++;
							}
						}
			
					}

				array[i]=count;

				
				if(count>max)
					max=count;
			}

		set++;

		printf("Excuse Set #%ld\n",set);

		for(i=0;i<total;i++)
			if(max==array[i])
				puts(str[i]);
			printf("\n");

		}


	}