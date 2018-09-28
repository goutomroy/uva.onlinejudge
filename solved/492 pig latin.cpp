

#include<stdio.h>
#include<ctype.h>
void main()
{
		char c, ch, cp[10];
      int i = 1, num = 0, p = 1;
      cp[0] = '\0';
      while(scanf("%c", &c) == 1)
      {
      		cp[i] = c;
            if(c == '\n' && isalpha(cp[i-1]))
            {
            		if(ch == '\0')printf("ay\n");
                  else printf("%cay\n",ch);
                  num = 0;
                  i = p = 1;
                  continue;
            }
            else if(c == '\n')
            {
            		printf("\n");
                  num = 0;
                  i = p = 1;
                  continue;
            }
      		if(isalpha(c))
            {
            		p = 1;
            		if(c=='a'||c=='A'||c=='e'||c=='E'||c=='o'||c=='O'||c=='i'||c=='I'||c=='u'||c=='U')
                  {
                  		if(num == 0)
                        {
                        		printf("%c", c);
                              ch = '\0';
                              num++;
                        }
                        else
                        {
                        		printf("%c", c);
                              num++;
                        }
                  }
                  else
                  {
                  		if(num == 0)
                        {
                        		ch = c;
                              num++;
                        }
                        else
                        {
                        		printf("%c", c);
                              num++;
                        }
                  }
            }
            else
            {
            					if(p > 1)printf("%c", c);
                           else
                           {
                  					if(ch == '\0')
                  					{
                  							printf("ay%c", c);
                        					num = 0;
                  					}
                           		else
                           		{
                  							printf("%cay%c", ch, c);
                        					num = 0;
                 			   		}

                        	}
                     		p++;
            }

             i++;
            if(i > 2) i = 1;

      }
}