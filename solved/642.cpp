#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct goutom
{
	char a[7],b[7];
}roy[105];
long i=0,j,k,p,t;
char ph[100][7];
int com(const void *W,const void *Z)
{
  char *x=(char*)W;
  char *y=(char*)Z;
  return (strcmp(x,y));
}
void main()
{
	char str[7];
while(scanf(" %s",roy[i++].a)==1 && strcmp(roy[i-1].a,"XXXXXX"))
;
for(k=0;k<i-1;k++)
{
 strcpy(str,roy[k].a);
 sort(&str[0],&str[strlen(str)]);
 strcpy(roy[k].b,str);
}
/*for(k=0;k<i-1;k++)
printf("%s  %s\n",roy[k].b,roy[k].a);*/
while(scanf(" %s",str)==1 && strcmp(str,"XXXXXX"))
{
	sort(&str[0],&str[strlen(str)]);
	for(k=p=t=0;k<i-1;k++)
	{
		if(strcmp(roy[k].b,str)==0)
		{
			strcpy(ph[t++],roy[k].a);
			p=1;
		}
	}
	if(p==0)
		printf("NOT A VALID WORD\n");
	else
	{
		qsort(ph,t,sizeof(ph[0]),com);
		for(k=0;k<t;k++)
			printf("%s\n",ph[k]);
	}
	printf("******\n");
}

}
