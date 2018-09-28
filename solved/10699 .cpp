#include<stdio.h>
void main( )
{
long long n,y,e,barry[5000],i,q,x;
while((scanf("%lld",&n)==1) && (n!=0))
{
	y=2;e=0;q=1;x=n;
while(n!=0 && n>=y) 
{
	if(n%y==0)
	{
		n=n/y;
		barry[e++]=y;
	}
	else
	y++;
	}
for(i=0;i<e-1;i++)
{
	if(barry[i]==barry[i+1])
		continue;
else
q++;
}

printf("%lld : %lld\n",x,q);
}
}
