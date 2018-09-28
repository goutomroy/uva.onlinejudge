#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct goutom
{
	char sub[15];
}roy[1000000];

int comp(void const *A, void const *B)
{

	goutom *a = (goutom*)A;
	goutom *b = (goutom*)B;

	return strcmp(a->sub,b->sub);
}
void main( )
{
	long n,i,l,len,c,max;
	char a[1000000],ch[15];
	while(scanf("%ld %s",&n,a)==2)
	{
		c=0;max=0;
		len=strlen(a);
		for(i=0;i<=len-n;i++)
		{
			strncpy(roy[c++].sub,a+i,n);
			roy[c-1].sub[n]='\0';
		}
		qsort(roy,c,sizeof(goutom),comp);
	for(i=0,l=1;i<c;i++)
		{
		if(!strcmp(roy[i].sub,roy[i+1].sub))
			l++;
		else
		{
			if(l>max)
			{
				strcpy(ch,roy[i].sub);
				max=l;
			}
			l=1;
			
		}
		}
printf("%s\n",ch);

	}
}

