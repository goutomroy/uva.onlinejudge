#include<stdio.h>
#include<string.h>
#define sz 100

int compare(char str1[sz],char str2[sz])
	{
	long len1,len2,i,j,max_1=0,max_2=0;

	len1=strlen(str1);
	len2=strlen(str2);

	for(i=0,j=0;i<len1||j<len2;i++,j++)
		{
		
		j=(j<len2)?j:len2-1;
		i=(i<len1)?i:len1-1;

		if(str1[i]>str2[j])
			return 1;
		else
			if(str1[i]<str2[j])
			return 0;
		}
		
	return 0;
	}



void game(char str[sz][sz],long total)
	{
	char temp[sz];
	long i,j;

		for(i=0;i<total;i++)
			{
			for(j=i+1;j<total;j++)
				{
				
				if(compare(str[i],str[j]))
					{
					strcpy(temp,str[i]);
					strcpy(str[i],str[j]);
					strcpy(str[j],temp);
					}
	
				}

			}
		for(i=total-1;i>=0;i--)
			printf("%s",str[i]);


	}

void main()
	{
	long i,total;
	char str[sz][sz];


	while(1)
		{
		scanf("%ld",&total);

		if(total==0)
			break;

		for(i=0;i<total;i++)
			scanf("%s",str[i]);

		game(str,total);
		printf("\n");
		
		}
	}

