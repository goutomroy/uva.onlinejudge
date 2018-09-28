#include<stdio.h>
#include<string.h>
void main( )
{
char ch[500];
long i,n,len;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%s",ch);
len=strlen(ch);
if(!strcmp(ch,"1") || !strcmp(ch,"4") || !strcmp(ch,"78") )
printf("+\n");
else if(ch[len-2]=='3' && ch[len-1]=='5')
printf("-\n");
else if(ch[0]=='9' && ch[len-1]=='4')
printf("*\n");
else
printf("?\n");
}


}