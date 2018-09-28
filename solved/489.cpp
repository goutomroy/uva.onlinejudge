#include<stdio.h>
#include<string.h>

typedef struct
{
	char a[80000];
} var;

	int game(char a[],char b[])
	{
		int i,j,lena,lenb,count;

		lena=strlen(a);
		lenb=strlen(b);

		for(i=0;i<lena;i++)
		{
			for(j=0;j<lenb;j++)
			{
				if(a[i]==b[j])
					a[i]='\0';
			}
		}

		count=0;

		for(i=0;i<lena;i++)
			if(a[i])
				count=count+1;

		return count;
	}



int main()
{
	var data[10];
	int penalty;
	long round;
	char dust[5];

	while(1)
	{
		scanf("%ld",&round);
		gets(dust);

		if(round==-1)
			break;

		for(int i=0;i<2;i++)
			gets(data[i].a);

		penalty=game(data[1].a,data[0].a);

		if(penalty==7)
			printf("Round %d\nYou lose.\n",round);
		else if(penalty==0)
			printf("Round %d\nYou win.\n",round);
		else 
			printf("Round %d\nYou chickened out.\n",round);

	}

	return 0;

}