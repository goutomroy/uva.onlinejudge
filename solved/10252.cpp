#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 1001

int v_1[35],v_2[35];

void ini()
	{
		long i;

		for(i=0;i<30;i++)
			{
				v_1[i]=0;
				v_2[i]=0;
			}

	}

void main()
	{
		char line1[sz],line2[sz];
		long i,j,len1,len2,temp,min;

		while(gets(line1)!=NULL&&gets(line2)!=NULL)
			{
				len1=strlen(line1);
				len2=strlen(line2);

				ini();

			
				for(i=0;i<len1;i++)
					{
						temp=line1[i]-'a';
						v_1[temp]++;
					}

					for(i=0;i<len2;i++)
					{
						temp=line2[i]-'a';
						v_2[temp]++;
					}

					for(i=0;i<30;i++)
						{
							if(v_1[i]!=0&&v_2[i]!=0)
								{
									min=(v_1[i]>v_2[i])?v_2[i]:v_1[i];

									for(j=0;j<min;j++)
										printf("%c",i+'a');
								}
						}
			
			

					printf("\n");

				
			}
		

	}

