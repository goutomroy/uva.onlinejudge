#include<stdio.h>
#include<string.h>
#define sz 2010

char input[sz], ch[sz/2];
long len, tt;

int main()
{
	long cas, i, j, l, t, tag,  m, count;
	char *k;

    scanf("%ld",&cas);
	while(cas--)
	{

scanf("%s",input);

len=strlen(input);

l=len/2;

tt=1;
    for(i=l-1;tt;i--)
	{
		
      for(j=0;j<=i;j++)
      ch[j]=input[j];

      ch[j]='\0';

      k = strstr(input+j, ch);

	  if(k)
	  {
         m=i*2+1;
		 tag=0;
		 count=0;
		 t=len-m-1;
         while(count!=8)
		 {
			 if(tag==0)
			 {
		 for(j=t;j<=i && count!=8;j++)
		 {
			 count++;
			 printf("%c",ch[j]);
		 }
		 tag=1;
			 }

		     else
			 {
				 
		for(j=0;j<=i &&  count!=8;j++)
		 {
			 count++;
			 printf("%c",ch[j]);
		 }

			 }

		 }
      tt=0;
	  break;
	}
	 if(tt==0)
		 break;
	}

printf("...\n");
	}
	return 0;
}