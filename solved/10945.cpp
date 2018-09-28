#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 1000000
void main( )
{
char a[sz],b[sz];
long i,j,k,q,len;
while(gets(a)!='\0'  &&  strcmp(a,"DONE"))
{
len=strlen(a);
for(i=0,j=0;i<len;i++)
{
if(isalpha(a[i]))
{
if((a[i]>='A' && a[i]<='Z'))
b[j++]=tolower(a[i]);
else
b[j++]=a[i];
}
}
q=1;
for(i=0,k=j-1;i<k;i++,k--)
{
if(b[i]==b[k])
;
else
{
q=0;
break;
}
}
if(q==1)
printf("You won't be eaten!\n");
else
printf("Uh oh..\n");

}
}





