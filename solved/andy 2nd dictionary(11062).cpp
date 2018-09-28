#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct goutom{
	char a[300];
}roy[520];

int comp(void const *A, void const *B)
{
	goutom *x = (goutom*)A;
	goutom *y = (goutom*)B;
	return (strcmp(x->a,y->a));
}
int main( )
{
	char ch[300],ph[300],lh[300];
	long i=0,j,len,ten,c;
	while(scanf(" %s",ch)!=EOF && strcmp(ch,"tom"))
	{
		ten=strlen(ch);
		for(j=c=0;j<ten;j++)
		{
			if(isalpha(ch[j]))
				lh[c++]=tolower(ch[j]);
			else if(ch[j]=='-')
				lh[c++]=ch[j];
			else
			{
				lh[c]='\0';
				strcpy(roy[i++].a,lh);
				c=0;
			}
		}
		lh[c]='\0';
   strcpy(ch,lh);
		if(i==0)
			strcpy(roy[i++].a,ch);
		else
		{
		strcpy(ph,roy[i-1].a);
		len=strlen(ph);
		if(ph[len-1]=='-')
		{
			ph[len-1]='\0';
			strcat(ph,ch);
			strcpy(roy[i-1].a,ph);
		}
		else
			strcpy(roy[i++].a,ch);
		}
	}
	qsort(roy,i,sizeof(goutom),comp);
	//printf("%s\n",roy[0].a);
	for(c=1;c<i;c++)
	{
		if(strcmp(roy[c].a,roy[c-1].a))
		printf("%s\n",roy[c].a);
	}
	return 0;
}

