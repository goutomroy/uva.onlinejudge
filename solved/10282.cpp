#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comp(const void *A,const void *B);
long binary(char a[15],long m);

struct goutom
{
char a[15],b[15];
}roy[100005];
void main( )
{
char str[25],ch[15];
long len,p,n=0;
while(gets(str)!=NULL)
{
len=strlen(str);
if(len==0)
break;
sscanf(str,"%s %s",&roy[n].a,&roy[n].b);
n++;
}
qsort(roy,n,sizeof(goutom),comp);
while(scanf("%s",ch)==1)
{
 p=binary(ch,n);
 if(p==-1)
 printf("eh\n");
 else
printf("%s\n",roy[p].a);
}
}

int comp(const void *A,const void *B)
{
  goutom   *x=(goutom *)A;
  goutom   *y=(goutom *)B;
  return(strcmp(x->b,y->b));
}

long binary(char ch[15],long m)
{
  long beg,mid,end;

  beg=0;
  end=m-1;
  mid=(long)( (beg+end)/2 );

 while(beg<=end && ( strcmp(ch,roy[mid].b)!=0) )
  {
	 if( strcmp(ch,roy[mid].b)<0 )
	  end=mid-1;
	 else
	  beg=mid+1;

	 mid=(long)( (beg+end)/2 );
  }

if( strcmp(ch,roy[mid].b)==0)
	return mid;
else
	return -1;

}

