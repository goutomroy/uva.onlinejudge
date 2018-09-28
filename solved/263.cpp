#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sz 100

long res[2000], total=0;

int check(long no)
	{
	
	long i;
	for(i=0;i<total;i++)
		{
		if(res[i]==no)
			return 1;
		}
	return 0;
	
	}


void assen_sort(char str[sz])
	{
	long i,j,len;
	char temp;
	len=strlen(str);

	for(i=0;i<len;i++)
		for(j=i;j<len;j++)
			if(str[i]>str[j])
				{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;				
				}	
	}



void dssen_sort(char str[sz])
	{
	long i,j,len;
	char temp;
	len=strlen(str);

	for(i=0;i<len;i++)
		for(j=i;j<len;j++)
			if(str[i]<str[j])
				{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;				
				}
			
	}


void longtoalpha(long no,char str[sz])
	{
	long i,j,k=0;

	while(no)
		{

		str[k++]=(no%10)+'0';
		no/=10;

		}
	str[k]='\0';
	}




void number_chain(char str[sz])
	{
	long chain=0,i,j,len,big,small,temp,result,ck=1;
	char temp_str[sz];

	strcpy(temp_str,str);

	do
	{
	chain++;
	
	dssen_sort(temp_str);
	big=atol(temp_str);

	printf("%ld - ",big);
	
	assen_sort(temp_str);
	small=atol(temp_str);
	
	printf("%ld = ",small);

	result=big-small;
	printf("%ld\n",result);

	if(total!=0&&check(result))
		ck++;

	res[total++]=result;

	longtoalpha(result,temp_str);

	


	strcpy(str,temp_str);

	if(chain==1000)
		break;
	
	}
	while(ck!=2);
	

	printf("Chain length %ld\n",chain);

	}




void main()
	{
	 long no;

	char str[sz];

	while(1)
		{
		scanf("%s",str);

		total=0;
		if(!strcmp(str,"0"))
			break;
		

		printf("Original number was %s\n",str);
		number_chain(str);
		printf("\n");

		}
	
	}