#include<stdio.h>
#include<string.h>

void main()
{
	//freopen("740.in","r",stdin);
	//freopen("740.out","w",stdout);
	char down[32][6] = {"00000","00001","00010","00011","00100","00101","00110","00111","01000","01001","01010","01011","01100","01101","01110","01111","10000","10001","10010","10011","10100","10101","10110","10111","11000","11001","11010","11011","11100","11101","11110","11111"};
	char up[32][6] = {"00000","00001","00010","00011","00100","00101","00110","00111","01000","01001","01010","01011","01100","01101","01110","01111","10000","10001","10010","10011","10100","10101","10110","10111","11000","11001","11010","11011","11100","11101","11110","11111"};
	char upshift[] = "11111";
	char downshift[] = "11011";

	char line1[33], line2[33], str[200], dumy[6] ;
	int i, j, k, l, len, u, d;

	gets(line1);
	gets(line2);

	while(gets(str))
	{
		len = strlen(str);
		u = 0; d = 1;

		for(i=0;i<len;i++)
		{
			for(j=0;j<5;j++, i++)
			{
				dumy[j] = str[i];
			}
			i--;
			dumy[j] = '\0';

			if(strcmp(dumy, upshift)==0)
			{
				u = 1; d = 0; continue;
			}
			else if(strcmp(dumy, downshift)==0)
			{
				u = 0; d = 1;
				continue;

			}
			if(d)
			{
				for(k=0;k<len;k++)
				{
					for(l=0;l<32;l++)
					{
						if(strcmp(dumy,down[l])==0)
						{
							printf("%c",line1[l]);
							break;
						}
					}
					if(l<32) break;
				}
			}
			else if(u)
			{
				for(k=0;k<len;k++)
				{
					for(l=0;l<32;l++)
					{
						if(strcmp(dumy,up[l])==0)
						{
							printf("%c",line2[l]);
							break;
						}
					}
					if(l<32) break;
				}
			}
		}
		printf("\n");
	}
}



