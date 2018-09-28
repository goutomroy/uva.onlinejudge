#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct goutom
{
	char a[11];
	int len;
}roy[15005];
bool flag[15005];
long c=0;

int comp1(const void *A,const void *B)
{
	goutom *x=(goutom*)A;
	goutom *y=(goutom*)B;
	return(x->len-y->len);
}
int comp2(const void *A,const void *B)
{
	char *x=(char*)A;
	char *y=(char*)B;
	return(strcmp(x,y));
}
void show( )
{
	int j,i,p,x,y;
	char t1[11],t2[11];

for(i=0;i<c;i++)
{
    strcpy(t1,roy[i].a);
		for(j=i+1;j<c;j++)
		{
			strcpy(t2,roy[j].a);
			for(x=p=0;x<roy[i].len;x++)
			{
				for(y=0;y<roy[j].len;y++)
					if(t1[x]==t2[y])
					{
						t2[y]=0;
						break;
					}
					if(y==roy[j].len)
					{
						p=1;
						break;
					}
            
			}
			if(p==0)
			{
				flag[i]=1;
				break;
			}
			if(p==0 && (roy[i].len==roy[j].len))
				flag[j]=1;
		}
}
	
}

void main()
{
	char str[11],result[15002][11];
	long i,u;
	while(scanf(" %s",str)==1)
	{
		strcpy(roy[c].a,str);
		roy[c++].len=strlen(str);
	}
	qsort(roy,c,sizeof(goutom),comp1);
	show( );
	for(i=u=0;i<c;i++)
		if(flag[i]==0)
		strcpy(result[u++],roy[i].a);
		qsort(result,u,sizeof(result[0]),comp2);
		for(i=0;i<u;i++)
			puts(result[i]);
}


	