#include<stdio.h>
#include<string.h>
long j=0;
void main()
{

char str[101][101];
long i,total=0,d,len,arry[101],max,c,k;


while(gets(str[total++])!='\0')
			;
			max;
			for(i=0;i<total-1;i++)
			{
			len=strlen(str[i]);
			 arry[i]=len;
			if(len>max)
			max=len;
			}
			for(c=0;c<total-1;c++)
			{
			if(arry[c]<max)
			{
			for(k=arry[c];k<max;k++)
			str[c][k]=' ';
			str[c][max]='\0';
         }
			}
			printf("\n");
			for( ;j<max;j++)
			{
			for(i=total-2;i>=0;i--)
			printf("%c",str[i][j]);
			printf("\n");

			}
         }

