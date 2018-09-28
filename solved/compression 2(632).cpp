#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct goutom
{
	char ch[2000];
	long index;
}roy[2000];

char a[2000],str[55],ch[2000][2000],ph;
int comp(const void *A,const void *B)
{
	goutom *a=(goutom*)A;
	goutom *b=(goutom*)B;
	return (strcmp(a->ch,b->ch));
}
int search(long len)
{
	long i,k,tag;
	for(i=0;i<len;i++)
		if(roy[i].index==1)
		{
			printf("%ld\n",i);
			break;
		}
		return 0;
}

void main()
{

	long i,len,cas,sum,k,tag;	
	scanf("%ld",&cas);
	for(k=1;k<=cas;k++)
	{
		
		if(k!=1)
			printf("\n");
		scanf("%ld",&len);
		scanf("%c",&ph);
		
		strcpy(a,"");
        sum=0;
		while(gets(str))
		{
			sum=sum+strlen(str);
        strcat(a,str);
		if(sum==len)
			break;
		}
		strcpy (roy[0].ch,a);
		roy[0].index=0;
		for(i=0;i<len-1;i++)
		{
		strcpy(a,(roy[i].ch)+1);
		strcpy(roy[i+1].ch,a);
		roy[i+1].ch[len-1]=roy[i].ch[0];
		roy[i+1].ch[len]='\0';
		roy[i+1].index=i+1;
		}
		qsort(roy,len,sizeof(goutom),comp);
		search(len);
		for(i=0;i<len;i++)
		{
			tag=0;
			printf("%c",roy[i].ch[len-1]);
			if((i+1)%50==0)
			{
				tag=1;
				printf("\n");
			}
		}
		//if(tag==0)
		printf("\n");
		
	}
}

