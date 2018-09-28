#include<stdio.h>
#include<algorithm>
#define sz 1000100000
using namespace std;

long a[1005],c=0,result[502505],k=0,result2[501501],t=0;
void  preparation()
{
	long i,n=0;
for(i=1;n<=sz;i++)
{
a[c++]=i*i*i;
n=a[c-1];
}
}
void  generate()
{
long i,j,l;
for(i=0;i<c;i++)
for(j=i;j<c;j++)
result[k++]=a[i]+a[j];
sort(&result[0],&result[k]);
for(i=0,l=1,result[k]=0;i<k;i++)
{
	if(result[i]==result[i+1])
		l++;
	else
	{
		if(l>=2)
			result2[t++]=result[i];
		l=1;
	}
}
/*for(i=0;i<t;i++)
if(result2[i]<=21000 && result2[i]>=1000)
printf("%ld\n",result2[i]);*/

}
void main()
{
preparation();
generate();
long lb,ub,i,p;
while(scanf("%ld%ld",&lb,&ub)==2)
{
	ub=lb+ub;
	for(i=p=0;i<t;i++)
		if(result2[i]<=ub && result2[i]>=lb)
		{
			p=1;
			printf("%ld\n",result2[i]);
		}
		if(p==0)
			printf("None\n");

}
}