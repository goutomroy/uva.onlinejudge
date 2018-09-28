#include<stdio.h>
#include<string.h>
#include<math.h>

long long a[500],t;


long long findbase(long long n)
{
 long long max=0 ;
	while(n!=0)
	{
		a[t]=n%10;		
		if(a[t]>max)
           max=a[t];
		n=n/10;
		t++ ;
	}
	return max+1 ;
}
 long long process( long long n)
{
	long long i;
 long long sum = 0;
	for(i=0;i<t;i++)
		sum=sum+(a[i]*pow(n,i));
	return sum ;
}


void main()
{
	long long i,n,base,num,root;
	while(scanf("%lld",&n)==1 && n)
	{
		t=0;
base=findbase(n);
for(i=base;i<100;i++)
{
	num=process(i);
	root=sqrt(num);
	if(num==root*root)
	{
		printf("%lld\n",i);
		break;
	}
}
	}
}