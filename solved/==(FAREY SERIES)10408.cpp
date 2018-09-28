#include<stdio.h>
#include<stdlib.h>
struct goutom
{
	int m,n;
}roy[400000];
long gcd(long a,long b);
int comp(const void *a,const void *b);
void main( )
{
 long i,j,k,n,m,a,b,c;
 while(scanf("%ld%ld",&n,&k)==2)
	{
    for(a=1,c=0;a<=n;a++)
	{
          for(b=1;b<=a;b++)
		  {
          m=gcd(a,b);
          if(m==1)
		  {
                     roy[c].m=b; 
                     roy[c++].n=a; 
     
                     
		  }
		  }
	}
	qsort(roy,c,sizeof(goutom),comp);

printf("%ld/%ld\n",roy[k-1].m,roy[k-1].n);
}
}

long gcd(long a,long b)
{
if(!b)
return a;
else
return gcd(b,a%b);
}
int comp(const void *a,const void *b)
{
	goutom *x=(goutom*)a;
	goutom *y=(goutom*)b;
	double p1=x->m;
	double p2=x->n;
	double q1=y->m;
	double q2=y->n;
	if((p1/p2)>(q1/q2))
		return 1;
	else if((p1/p2)<(q1/q2))
		return -1;
	return 0;
}
