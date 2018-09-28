#include<stdio.h>
#include<string.h>

void main()
{
	char name[22], c;
	int  i, j, len, count, store;

	printf("         name                     SOUNDEX CODE\n");

	for(;scanf("%s",name)==1;)
	{
		scanf("%c",&c);

		printf("         %s", name);

		len = strlen(name);

		for(j=len;j<25;j++)	printf(" ");

		count= 0 ;

		for(i=0;i<len;i++)
		{
			if(i==0)
			{
				printf("%c",name[i]);

			if(name[i]=='B' || name[i]=='P' ||name[i]== 'F' ||name[i]== 'V' )		store = 1;

			else if(name[i]=='C' || name[i]== 'S' || name[i]== 'K' || name[i]== 'G' || name[i]=='J'|| name[i]== 'Q'|| name[i]== 'X'|| name[i]== 'Z')
				store = 2;

			else if( (name[i]=='D' || name[i]=='T'))		store = 3;

			else if( name[i]=='L')   store = 4;

			else if( name[i]=='M'||name[i]=='N')	store = 5;
		
			else if( name[i]=='R') 	store = 6;
				
			else if( name[i]=='A' || name[i]=='E' || name[i]== 'I'|| name[i]== 'O'|| name[i]== 'U'|| name[i]== 'Y'|| name[i]== 'W'|| name[i]== 'H')
				store=0;
			}
				
			
				
			else if( (name[i]=='B' || name[i]=='P' ||name[i]== 'F' ||name[i]== 'V') && count<3 && store!=1)
			{
				printf("1");
				count++;
				store = 1;
			}

			else if( (name[i]=='C' || name[i]== 'S' || name[i]== 'K' || name[i]== 'G' || name[i]=='J'|| name[i]== 'Q'|| name[i]== 'X'|| name[i]== 'Z') && count<3 && store!=2)
			{
				printf("2");
				count++;
				store = 2;
			}

			else if( (name[i]=='D' || name[i]=='T') && count<3 && store!=3)
			{
				printf("3");
				count++;
				store = 3;
			}

			else if( ( name[i]=='L') && count<3 && store!=4)
			{
				printf("4");
				count++;
				store = 4;
			}

			else if( (name[i]=='M'||name[i]=='N') && count<3 && store!=5)
			{
				printf("5");
				count++;
				store = 5;
			}
			else if( name[i]=='R'&&count<3 && store!=6)
			{
				printf("6");
				count++;
				store = 6;
			}
			
			else if( (name[i]=='A' || name[i]=='E' || name[i]== 'I'|| name[i]== 'O'|| name[i]== 'U'|| name[i]== 'Y'|| name[i]== 'W'|| name[i]== 'H'))
				store=0;
		}

		if(count<3)
			for(;count<3;count++)
				printf("0");

		printf("\n");
	}

	printf("                   END OF OUTPUT");
}
