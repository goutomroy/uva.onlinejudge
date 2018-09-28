#include<stdio.h>
#include<string.h>
#define sz 1000000

char toint(char ch)
	{
	ch=ch-'0';
	return ch;
	}

char tochar(char ch)
	{
	ch=ch+'0';
	return ch;
	}

void reverse(char str[sz])
	{
	
	long len,i,k=0;
	char rev[sz];

	len=strlen(str);

	for(i=len-1;i>=0;i--)
		rev[k++]=str[i];

	rev[k]='\0';

	strcpy(str,rev);

	}



void getresult(char no1[sz],char no2[sz])
	{
	
	char result[sz];

	long len1,len2,i,j,digit,carry,multi,len,index=0,k;

	len1=strlen(no1);
	len2=strlen(no2);

	len=len1+len2;

	for(i=0;i<len;i++)
		result[i]='0';

	index=-1;

	for(i=len1-1;i>=0;i--)
		{
		
			carry=0;
			index++;

		for(j=len2-1,k=index;j>=0;j--,k++)
			{
			
			multi=toint(no1[i])*toint(no2[j])+toint(result[k])+carry;
			carry=multi/10;
			result[k]=tochar(multi%10);
			
			}

		while(carry)
			{

			result[k++]=tochar(carry%10);
			carry=carry/10;
			
			}
	


		}

		

	result[k]='\0';
	
	digit=0;
	reverse(result);
for(i=0;i<k;i++)
{
	if(result[i]=='0'&&i==digit)
		{
		digit++;
		continue;
		}
	else
		printf("%c",result[i]);
}

if(i==digit)
	printf("0");
	}










void main()
{

char no1[sz],no2[sz];

while(scanf("%s%s",no1,no2)==2)
	{
	
	getresult(no1,no2);
	printf("\n");
	}




}