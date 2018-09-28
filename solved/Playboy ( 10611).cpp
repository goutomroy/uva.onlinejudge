#include<stdio.h>
long pbeg,a[50009]; 
long binary(long item,long  m);
void main( )
{
	long i,n,m,num,x,p,d,j;
	while(scanf("%ld",&m)==1)
	{
		a[-1]=0;
		for(i=j=0;i<m;i++)
		{
			scanf("%ld",&d);
			if(d!=a[j-1])
			a[j++]=d;
			}
		m=j;
		scanf("%ld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&num);
			if(num>a[m-1])
				printf("%ld X\n",a[m-1]);
			else if(num==a[m-1] && m!=1)
				printf("%ld X\n",a[m-2]);
			else if(num==a[0] && m>1)
				printf("X %ld\n",a[1]);
			else if(num==a[m-1] && m==1)
				printf("X X\n");

			else
			{

			p=binary(num,m);
			if(p==-1)
			{
				for(x=pbeg; ;x++)
				{
					if(a[x]>num)
					{
						if(x==0)
						printf("X %ld\n",a[x]);
						else
							printf("%ld %ld\n",a[x-1],a[x]);
                             break;
					}
				}
			}
				else				
					printf("%ld %ld\n",a[p-1],a[p+1]);
			}
			}
	}
}
	long binary(long item,long m)
	{
		long beg=0,end=m-1,mid=(beg+end)/2;
		pbeg=beg;

		while(beg<=end && item!=a[mid])
		{
			if(item<a[mid])
				end=mid-1;
			else
				beg=mid+1;
			mid=(beg+end)/2;
			pbeg=beg;
		}
		if(item==a[mid])
		return mid;
		return -1;
	}

