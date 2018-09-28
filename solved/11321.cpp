#include<stdio.h>
#include<stdlib.h>

struct goutom
{
	long num, mod;
}roy[10005];

int comp(void const *A, void const *B)
{

	goutom *a = (goutom*)A;
	goutom *b = (goutom*)B;

	if(a->mod > b->mod)
		return 1;

	else if(a->mod < b->mod)
		return -1;

	else if(a->mod == b->mod)
	{

		if( (a->num%2)==0  &&  (b->num%2)==0 )
		{
			if(a->num < b->num)
				return -1;
			else if(a->num > b->num)
				return 1;
			else
				return 0;
		}

		else if( ((a->num%2)==1 || (a->num%2)==-1) &&  ((b->num%2)==1 ||(b->num%2)==-1) )
		{
			if(a->num > b->num)
				return -1;
			else if(a->num < b->num)
				return 1;
			else
				return 0;
		}

		else
		{	
			if( ((a->num%2)==1 || (a->num%2)==-1) &&  (b->num%2)==0 ) 
				return -1;		
			else 
				return 1;		
		}
	}

	return 0;
}

int main()
{
	long n, m, i;
	while(scanf("%ld%ld",&n,&m))
	{
		if(n==0 && m==0)
		{
			printf("0 0\n");
			break;
		}

		for(i=0;i<n;i++)
		{
			scanf("%ld",&roy[i].num);
			roy[i].mod=(roy[i].num)%m;
		}

		qsort(roy,n,sizeof(goutom),comp);

		printf("%ld %ld\n",n,m);

		for(i=0;i<n;i++)
			printf("%ld\n",roy[i].num);


	}
	return 0;
}