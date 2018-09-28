#include<stdio.h>
#include<string.h>
void main()
{
		char ch1[] = {'E', '3', 'J', 'L', 'S', '2', 'Z', '5'};
		char ch2[] = {'3', 'E', 'L', 'J', '2', 'S', '5', 'Z'};
		char word[40], ch[40],num[40], c;
		int len, i, j, p, k, n = 0;
		while(scanf("%s%c", ch, &c) == 2)
		{
				n = 0;
				len = strlen(ch);

				j = 0;

				for(i = len - 1; i >= 0; i--)
				{
						p = 0;
						num[j] = ch[i];
						if(ch[i]=='T'||ch[i]=='W'||ch[i]=='X'||ch[i]=='A'||ch[i]=='V'||ch[i]=='U'||ch[i]=='I'||ch[i]=='H'||ch[i]=='8'||ch[i]=='1'||ch[i]=='Y'||ch[i]=='M'||ch[i]=='O' ||ch[i]=='0') n++;
        			   for(k = 0; k < 8; k++)
	      			{
								if(ch[i] == ch1[k])
								{
										word[j] = ch2[k];
										p = 1;
                              break;
								}
								else if(ch[i] == ch2[k])
								{
                        		word[j] = ch1[k];
										p = 1;
                              break;
								}
	      			}
              		if(p == 0) word[j] = ch[i];
						j++;
				}
				num[j] = NULL;  word[j] = NULL;
      		if(strcmp(ch, num) == 0 && strcmp(ch, word) == 0 && n == len)  printf("%s -- is a mirrored palindrome.\n\n", ch);
		  			else if(strcmp(ch, num) == 0) printf("%s -- is a regular palindrome.\n\n", ch);
        	      	else if(strcmp(ch, word) == 0) printf("%s -- is a mirrored string.\n\n", ch);
        					else printf("%s -- is not a palindrome.\n\n", ch);
		}
}