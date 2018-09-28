#include<stdio.h>
#include<string.h>
void main( )
{
	char a[103],ch[11],ph;
	int i,len,n,c;
	while(scanf("%d",&n)==1 && n)
	{
		scanf(" %s",a);
		len=strlen(a);
		n=len/n;
		for(i=0;i<=len-n;i+=n)
		{
			strncpy(ch,a+i,n);
			ch[n]='\0';
			for(c=n-1;c>=0;c--)
				printf("%c",ch[c]);
		}
		printf("\n");
	}
}

