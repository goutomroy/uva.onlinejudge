#include <stdio.h>         
//#include <conio.h>
#include <string.h>
#define sz 1000000
void rev(char s[sz]);

int main()
{
 char ch, string[sz];
 int tag;
 long int i=0;
 //freopen("ain.txt", "r", stdin);
 //freopen("aout2.txt", "w", stdout);

 while(scanf("%c", &ch)==1)
 	{
    if(ch=='\n')
    	{
      if(tag==1)
      	{
          string[i++]=0;
           rev(string);
           tag=0;
           i=0;
          }
     	printf("%c", ch);
      }

    else
      if(ch==' ')
      	{
      	if(tag==1)
         	{
            string[i++]=0;
           	rev(string);
            tag=0;
            i=0;
            }
     	   printf("%c", ch);
      	}
      	else
         	string[i++]=ch;
            tag=1;
   }

   if(tag==1)
   {
    string[i++]=0;
    rev(string);

   }

//rev(string);
// getch();
 return 0;
}


void rev(char s[sz])
{
 long int n, count;
 n=strlen(s);
 for(count=n-1;count>=0;count--)
    printf("%c", s[count]);
}
