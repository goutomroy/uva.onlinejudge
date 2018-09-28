#include<stdio.h>
#include<string.h>
#define sz 10000
long top=0;

void push(char stack[sz],char item)
  {
  if(top==sz)
	 {
	 
	 }
	else
	  {
	  top++;
	 stack[top]=item;

	  }
  }

char pop(char stack[sz])
  {
  char item;

  if(top<0)
	 {
	
	 return 0;
	 }
  else
	 {

	 item=stack[top];
    	 top--;
	 }
  return item;
  }

void input(char str[])
	{
		char c[100];
		long k=0;

		while(gets(c)!=NULL&&c[0])
		{
		
			str[k++]=c[0];
		
		}
		str[k]='\0';

		
	}

long prio(char ch)
	{
		if(ch=='*'||ch=='/')
			return 2000;

		if(ch=='+'||ch=='-')
		return 1000;

		return 0;

	}

void main()
	{

 char str[sz],item,stack[sz];
 long i,len,test,t1,t2;

scanf("%ld\n",&test);

while(test)
{

	input(str);
	top=0;
 len=strlen(str);

 str[len]=')';
 stack[0]='(';

 for(i=0;i<=len;i++)
	{
	if(str[i]==' ')
	  continue;

	else
	if(str[i]>='0'&&str[i]<='9')
	  printf("%c",str[i]);

	else
	if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^')
		 {
		
	
			
		t1=prio(str[i]);
		t2=prio(stack[top]);

	 while(t1<=t2)
		{
		item=pop(stack);

	
		printf("%c",item);
		
		t2=prio(stack[top]);
      }

		push(stack,str[i]);
		}

	 else
		if(str[i]=='(')
		  push(stack,str[i]);

	  else
	  if(str[i]==')')
		 {
		 while(stack[top]!='(')
			{
			item=pop(stack);
			
			

			printf("%c",item);
			}
			top--;
		 }


	} 
 printf("\n");

 if(test-1)
	printf("\n");
test--;

}


	}