#include<stdio.h>
#include<string.h>
void main( )
{
	long i,p,len,cas,top,c;
	char stack[150],a[150],ch;
	scanf("%ld\n",&cas);
    for(c=1;c<=cas;c++)
	{
	len=0;
	while(scanf("%c",&ch)==1)
		{			
			if(ch!=10)
				a[len]=ch;
			if(ch==10)
				break;
			len++;
		}
		a[len] = '\0';
		if(len==0)
		{
			printf("Yes\n");
			continue;
		}
		p=0;
		for(i=0,top=-1;i<len;i++)
		{
			if(a[i]=='(' || a[i]=='[')
			{
				top=top+1;
				stack[top]=a[i];
			}
			else 
			{
				if(a[i] == ')' && stack[top]=='(')
			         top=top-1;
				else if(a[i] == ']' && stack[top]=='[')
					top=top-1;
				else
				{
					p=1;
					printf("No\n");
					break;
				}
				
			}
		}
		if( top<0  && !p)
			printf("Yes\n");
		else if(top>=0 && !p )
			printf("No\n");
		else if(!p)
			printf("Yes\n");
}
}