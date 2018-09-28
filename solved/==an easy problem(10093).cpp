#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[1500];
	long c,p,len,check,max,sum,base;
	while(scanf(" %s",a)==1)
	{
		p=sum=base=max=0;
   		if(a[0]=='-')
      		a[0]='0';		
		for(c=0,len=strlen(a);c<len;c++)
		{
			if(isalpha(a[c]) && isupper(a[c]))
				check=a[c]-55;
			else if(isalpha(a[c])  &&  islower(a[c]))
				check=a[c]-61;
			else
				check=a[c]-48;
			sum+=check;
			if(check>max)
				max=check;
		}
		if(max)
		{
			for(c=max;c<62;c++)
			{
				if(sum%c==0)
				{
					printf("%ld\n",c+1);
					p=1;
					break;
				}
			}		
			if(!p)
			printf("such number is impossible!\n");
		}
		else
		printf("2\n");
	}
}

