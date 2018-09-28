#include<stdio.h>
#include <string.h>
#define sz 1000000
char a[sz],ch;

void main( )
{
	long  n,len,ten,p;
		len=ten=p=0;
		memset(a,'0',sizeof(a));
		while(scanf("%ld",&n)==1)
		{
			scanf("%c",&ch);		
			a[n]='1';len++;
			if(ch!='\n') 
			{
			while(	scanf("%ld",&n)==1)
			{
				scanf("%c",&ch);
			a[n]='1';len++;
			if(ch=='\n')
				break;
			}
			}

		while(scanf("%ld",&n)==1)
		{
			scanf("%c",&ch);
			if(a[n]=='1')
			p++;			
			ten++;
			if(ch=='\n') break;
		}
		if(p==ten && ten==len)
			printf("A equals B\n");
		else if(p==len && ten>len)
			printf("A is a proper subset of B\n");
		else if(p==ten && ten<len)
			printf("B is a proper subset of A\n");
		else if(p==0)
			printf("A and B are disjoint\n");
		else if(p>=1 && len>p && ten>p)
			printf("I'm confused!\n");
		len=ten=p=0;
		memset(a,'0',sizeof(a));

	}
}


