#include<stdio.h>
#include<string.h>
void main( )
{
	char a[20000];
	long  i,p,q,len;
	while(gets(a)!='\0')
	{
	len=strlen(a);
		p=0;
		for(i=0;i<len;i++)
		{
			while((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
			{
				i++;
				q=1;
			}
	
		if(q==1)
		{
		p++;
		q=0;
		}
		}
		printf("%ld",p);
	}
}