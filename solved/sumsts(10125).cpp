#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int comp(const void *a,const void *b)
{
	long *x=(long*)a;
	long *y=(long*)b;
	if(*x>*y)
		return -1;
	else if(*x<*y)
		return 1;
	return 0;
}
void main()
{
	long  a[1200],i,j,k,c,n,max,tax,tag,*ptr;
	while(scanf("%ld",&n)==1 && n)
	{
		tag=0;
		for(i=1;i<=n;i++)
		scanf("%ld",&a[i]);
		qsort(a+1,n,sizeof(long),comp);
		ptr=unique(a+1,a+n+1);
	        n=ptr-(a+1);

	    /*for(i=1;i<=n;i++)
		printf("%ld  ",a[i]);*/
	max=tax= -536870913;
	
		for(c=1;c<=n;c++)
		{
			for(i=1;i<=n;i++)
			{
				if(c==i) 
					continue;

				for(j=i+1;j<=n;j++)
				{
					if(c==j) 
					continue;

					for(k=j+1;k<=n;k++)
					{	
					 if(c==k) 
					 continue;

						if(a[i]+a[j]+a[k]==a[c])
						{
								max=a[c];
								tag=1;
								break;
						}
					}
						if(tag)
							break;
				}
				if(tag)
					break;
			}
			if(tag)
				break;
		}


							if(max!=tax)
							printf("%ld\n",max);
							else
								printf("no solution\n");
	}
}

