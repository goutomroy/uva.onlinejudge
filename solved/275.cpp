#include<stdio.h>
#include<string.h>


void main()
	{
		long i,number,division,digit,roy[2000];

		while(scanf("%ld%ld",&number,&division)==2&&(number||division))
			{				
printf(".");
digit=1;
for(i=0;i<1015;i++)
roy[i]=0;

while(1)
{
if(roy[number])
{
printf("\nThe last %ld digits repeat forever.\n",digit-roy[number]);
break;
}

roy[number]=digit++;
number*=10;
printf("%ld",number/division);
number%=division;

if(number==0)
{
printf("\nThis expansion terminates.\n");
break;
}					
if(digit%50==0)
printf("\n");

}
printf("\n\n");


}
}
















////// got WA but why?///
#include<stdio.h>
#include<string.h>
#define sz 3000009
char flag[sz];
void main( )
{
	long num,deno,digit,i,a[9000],c;
	while(scanf("%ld%ld",&num,&deno)==2 &&  (num||deno))
	{
		memset(flag,'0',300006);
		flag[num]='1';
		digit=0;
		printf(".");
		i=1;
a[i++]=num;
		while(1)
		{
		
			num=num*10;
			printf("%ld",num/deno);
			if(num%deno==0)
			{
				printf("\nThis expansion terminates.");
				break;
			}
			
                          if(flag[num%deno]=='1')
			{
                                 for(c=1;c<i;c++)
				 if(num%deno==a[c])
					 break;
			printf("\nThe last %ld digits repeat forever.",i-c);
			break;
			}
			else
                flag[num%deno]='1';			
			
			digit++;
			a[i++]=num%deno;
			num=num%deno;
			
			
		    if(!(digit%50))
				printf("\n");
		}
		printf("\n\n");
	}
}
			

