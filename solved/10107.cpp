#include<stdio.h>
#include<math.h>
void sort(long long total);
long long a[10009];
void main( )
{
long long  i=0,j,n,c,len;
double k;
while(scanf("%lld",&n)==1)
{
a[i++]=n;
sort(i);
if((i-1)%2==0)
printf("%lld\n",a[(i-1)/2]);
else
{
k=floor((i-1)/2);
j=k;
n=a[j]+a[j+1];
printf("%lld\n",n/2);
}
}
}


void sort(long long total)
	{
	

	long long i,j,temp;

	for(i=0;i<total;i++)
		{
		temp=a[i];
		j=i-1;

		while(j>=0&&temp<a[j])
			{
			a[j+1]=a[j];
			j--;

			}
		a[j+1]=temp;
		}
	
	}
