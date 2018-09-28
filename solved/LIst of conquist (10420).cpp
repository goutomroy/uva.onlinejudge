#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int comp(void const *A, void const *B);
struct goutom
{
	char country[35];
}roy[2005];
void main( )
{
	char a[60];
	long n,i,l;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s ",roy[i].country);
        gets(a);
	
	}
	
	qsort(roy,n,sizeof(goutom),comp);
	roy[n].country[0]='A';roy[n].country[1]='\0';
	for(i=0,l=1;i<n;i++)
	{
		if(!strcmp(roy[i].country,roy[i+1].country))
			l++;
		else
		{
			printf("%s %ld\n",roy[i].country,l);
			l=1;
		}
	}





}
int comp(void const *A, void const *B)
{

	goutom *a = (goutom*)A;
	goutom *b = (goutom*)B;

	return (strcmp(a->country,b->country));

}