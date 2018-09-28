#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct Dictionary
{
	char word[202] ;

}ara[5002];

int Present_word( char *x, int i );


int compare( const void *a, const void *b )
{
	Dictionary *c, *d;

	c = (Dictionary*)a;
	d = ( Dictionary*)b;

	if(strcmp(c->word, d->word)>0) return 1;
	if(strcmp( c->word, d->word)<0) return -1;

	return 0;
}

int Present_word( char *x, int i )
{
	int j;

	for(j = 0; j<i; j++)
	{
		if( strcmp(x,ara[j].word)==0 ) return 1;
	}

	return 0;
}


void main()
{
	//freopen("10815.in","r",stdin);

	int i, j=0,  len, check, value ;

	char temp[202], ch;

	while( scanf("%c",&ch)==1 )
	{
		ch = tolower(ch);
		

		value = ch - 'a' ;

		if(value>=0 && value<26 )
		{
			for(i=0; ;i++)
			{
				temp[i] = ch ;
				//printf("%c\n",ch);

				scanf("%c",&ch);

				ch = tolower(ch);
				
				value = ch - 'a' ;

				//printf("%d\n",value);

				if( value<0 || value>25 ) break;
			}

			temp[++i] = '\0' ;

			//printf("%s\n",temp);

			len = strlen(temp);

			if(len>0)
				check = Present_word( temp, j);

			if(check==0)
			{
				strcpy(ara[j].word, temp);
				j++;
			}
		}
	}

	qsort(ara, j, sizeof(Dictionary), compare ) ;

	for(i=0;i<j;i++) printf("%s\n",ara[i].word );
}
/*(not accepted for arry size)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct goutom
{
	char b[15];
}roy[500000];
int comp(void const *A, void const *B)
{

	goutom *p = (goutom*)A;
	goutom *q = (goutom*)B;

	return(strcmp(p->b,q->b));
		
}
void main( )
{
long i=0,j,k,c,len;
char a[500000][15];
while(scanf("%s",a[i++])==1);

for(j=0;j<i;j++)
{
	len=strlen(a[j]);
	for(k=c=0;k<len;k++)
	if(isalpha(a[j][k]))
		roy[j].b[c++]=tolower(a[j][k]);
	roy[j].b[c]='\0';
}
qsort(roy,i,sizeof(goutom),comp);
printf("%s\n",roy[0].b);
for(j=1;j<i;j++)
if(strcmp(roy[j].b,roy[j-1].b))
printf("%s\n",roy[j].b);

}





*/
			


