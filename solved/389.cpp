#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define sz 100


void toother(long long no,long long base)
	{

	long long i,j,array[sz],total=0;

	while(no)
		{
		array[total++]=no%base;
		no/=base;
		}
	if(total>7)
		printf("%7s","ERROR");
	else
		{
		i=7-total;

		while(i)
			{
			printf(" ");
			i--;
			}

		for(i=total-1;i>=0;i--)
			{
			if(array[i]>=10)
				printf("%c",(array[i]+'A'-10));
			else
			printf("%lld",array[i]);
			}

		}
	
	}

long long todecimal(char str[sz],long long base)
	{
	long long len,i,j,dec_num=0,power,temp;

	len=strlen(str);

	power=len-1;

	for(i=0;i<len;i++)
		{
		if(str[i]>='A'&&str[i]<='F')
			temp=str[i]-'A'+10;
		else
			if(str[i]>='a'&&str[i]<='f')
				temp=str[i]-'a'+10;
			else
				if(str[i]>='0'&&str[i]<='9')
					temp=str[i]-'0';

		dec_num+=temp*(pow(base,power));
		power--;

		}
	

		return dec_num;
	
	}





void main()
	{
	
	char str[sz];
	long long base_from,base_to,decimal;

	while(scanf("%s%lld%lld",str,&base_from,&base_to)==3)
		{

		decimal=todecimal(str,base_from);

		if(decimal==0)
			printf("%7s","0");
		else
			toother(decimal,base_to);
		
		printf("\n");
		}


	}




