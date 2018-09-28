#include<stdio.h>
#include<string.h>
char find[20][100],rep[20][100],str[300];
void process(long i,long len)
{
	long j,k,ten,c,t;
char *ptr,a[300],b[300];
while(1)
{
ptr=strstr(str,find[i]);
if(ptr==0)
break;
j=ptr-str;
k=(ptr-str)+len;
ten=strlen(str);
for(c=0;c<j;c++)
a[c]=str[c];
a[c]='\0';
for(c=k,t=0;c<ten;c++)
b[t++]=str[c];
b[t]='\0';
strcat(a,rep[i]);
strcat(a,b);
strcpy(str,a);
}
}
void main( )
{
		long i,n;
		char ch;
	while(scanf("%ld",&n)==1 && n)
	{
		scanf("%c",&ch);
		for(i=0;i<n;i++)
		{
			gets(find[i]);
			gets(rep[i]);
		}
		gets(str);
		for(i=0;i<n;i++)
		process(i,strlen(find[i]));
		puts(str);
	}
}
