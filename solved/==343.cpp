#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>


int minbase(char *p)
{
	int i,len,base,min=2;
	len=strlen(p);

	for(i=0;i<len;i++)
	{
		if(isalpha(p[i]))
			base=(int)(p[i]-54);

		else if(isdigit(p[i]))
			base=(int)(p[i]-47);
		if(min<base)
			min=base;
	}

 return min;
}

long long anybase_to_decimal(char *p,int base)
{
	int i,len;
	long long num=0;

	len=strlen(p);

	for(i=0;i<len;i++)
	{
		if(isalpha(p[i]))
			num=(long long)(num+(p[i]-55)*pow(base,(len-i-1)));

		else if(isdigit(p[i]))
			num=(long long)(num+(p[i]-48)*pow(base,(len-i-1)));
	}
return num;
}

void main()
{
	char str[10000],*p,*q;
	int base1,base2,i,j;
	long long n1,n2;
	bool flag;


	while(scanf(" %[^\n]",str)==1)
	{
		flag=false;

		p=strtok(str," \t\b\r\n");
		q=strtok(0," \t\b\r\n");

		base1=minbase(p);
		base2=minbase(q);
		
		for(i=base1;i<=36;i++)
		{
			n1=anybase_to_decimal(p,i);
			for(j=base2;j<=36;j++)
			{
				n2=anybase_to_decimal(q,j);

				if(n1==n2)
				{
					flag=true;
					break;
				}
			}
			if(flag)
				break;
		}

		if(flag)
			printf("%s (base %d) = %s (base %d)\n",p,i,q,j);
		else
			printf("%s is not equal to %s in any base 2..36\n",p,q);
	}
}




		




