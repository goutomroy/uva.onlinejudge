#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 1009

void main()
	{
	char str[sz];
	long array[200],i,j,len,temp,max,max_ch;

	
	while(gets(str)!=NULL)
		{

		for(i=30;i<=130;i++)
			array[i]=0;

		len=strlen(str);

		for(i=0;i<len;i++)
			{
			if(str[i]!='\n'&&str[i]!='\r'&&str[i]!='\0')
				{
				temp=str[i];
				array[temp]++;
				}
			}

	

			max=99999;
	for(i=130;i>=30;i--)
		{
		for(j=130;j>=30;j--)
			if(max>array[j])
				{
				max=array[j];
				max_ch=j;				
				}
			if(max==99999)
				break;
			array[max_ch]=99999;
		
		if(max!=0&&max!=99999)
		printf("%ld %ld\n",max_ch,max);
		max=99999;
		}


		printf("\n");	
			

		}


	}