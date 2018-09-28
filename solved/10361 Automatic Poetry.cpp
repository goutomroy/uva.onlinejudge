#include<stdio.h>
#include<string.h>

char line[101], sec[101], c;

void main()
{
	int i, j, k, store[5], tcase, count=0, len1, len2;

	scanf("%d%c",&tcase,&c);

	
	for(i=0;i<tcase;i++)
	{
		 count = 0;

		 scanf("%[^\n]%c",line,&c);

		 len1 = strlen(line);

          count=0;
		  
		 for(j=0;j<len1;j++)
		 {
			 if(line[j]!='<'&&line[j]!='>')
				 printf("%c",line[j]);

			 else if(line[j]=='<')
			 {
				 store[count] = j+1;
				 count++;
			 }
			 else if(line[j]=='>')
			 {
				 store[count]=j+1;
				 count++;
			 }
		 }
		 printf("\n");

		 scanf("%[^\n]%c",sec,&c);

		 len2 = strlen(sec);

		 for(j=0;j<len2-3;j++)
			 printf("%c",sec[j]);

		 for(j= store[2];line[j]!='>';j++)
			 printf("%c",line[j]);

		 for(j= store[1];line[j]!='<';j++)
			 printf("%c",line[j]);

		 for(j= store[0];line[j]!='>';j++)
			 printf("%c",line[j]);

		 for(j= store[3];j<len1;j++)
			 printf("%c",line[j]);

		 printf("\n");

		 for(j=0;j<100;j++)
			 line[j] = sec[j] = '\0';

		
	}
}

