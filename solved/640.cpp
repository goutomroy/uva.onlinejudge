#include<stdio.h>
#define sz 1000000
bool flag[sz];
void generate()
{
	long i,sum,n;
	for(i=1;i<=sz;i++)
	{
		sum=0;n=i;
		while(n!=0)
		{
			sum+=n%10;
			n=n/10;
		}
if(sum+i<=sz)

		flag[sum+i]=1;
else 
 break;
	}
	for(i=1;i<=sz;i++)
		if(flag[i]==0)
			printf("%ld\n",i);

}
void main()
{
	generate();
}
