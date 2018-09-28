#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Word{
   char word[1005];
   int d;
} Word;

Word word[1005];

int comp(const void* a, const void *b){
   Word* x=(Word*) a;
   Word* y=(Word*) b;

   return x->d - y->d;
}

void main(){
   int i,j,m,n;



   while(scanf("%d %d",&m,&n)==2){
      getchar();

      for(i=0;i<m;i++){
         word[i].d=0;
         gets(word[i].word);
         for(j=0;j<n;j++) 
         if(word[0].word[j]!=word[i].word[j]) 
         word[i].d++;
      }

      qsort(word,m,sizeof(Word),comp);

      for(i=0;i<m;i++) 
      puts(word[i].word);
   }
}

why wa?
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
long len,count,n;
char a[30000][100];
bool colour[30000];

long  show (long x)
{
long i,l,j;
char t1,t2;
for(i=0;i<n;i++)
{
	if(colour[i]==0)
	{
		for(j=l=0;j<len;j++)
		{
			t1=tolower(a[x][j]);		
			t2=tolower(a[i][j]);	
			if(t1!=t2)
			{
				l++;
				if(l>1)
					break;
			}
		}
			if(l==1)
				break;

	}
}

colour[i]=1;
printf("%s\n",a[i]);
count++;
if(count==n)
return 0;

 return (show(i));


}
void main( )
{
long i;
while(scanf("%ld %ld",&n,&len)==2)
{
for(i=0;i<n;i++)
{
scanf(" %s",a[i]);
colour[i]=0;
}


colour[0]=1;
printf("%s\n",a[0]);
count=1;
show(0);
}
}
