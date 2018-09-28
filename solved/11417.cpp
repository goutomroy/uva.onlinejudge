
#include<stdio.h>
#define sz 506

long GCD(long a,long b)
{
if(!b)
return a;
else
return GCD(b,a%b);
}

int main()
{
	long G, i, j, N, res[sz];

	for(i=1;i<=sz;i++)
		res[i]=0;
    
	for(i=1;i<sz;i++)
	{
		G=0;
      for(j=i+1;j<=sz;j++)
	  {
		  G+=GCD(i,j);
	   res[j]=res[j]+G;
	  }
	}

	while(scanf("%ld",&N) && N)
	{
    printf("%ld\n",res[N]);
	}

return 0;
}