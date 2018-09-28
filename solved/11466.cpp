 #include<stdio.h>
 #include<math.h>

long long a[1000000];
 int main( )
 {
long long  n, i, j, k, max, t, x, same;

while(scanf("%lld",&n)==1 && n!=0)
{
	x=0;
	if(n<0)
		n=n*-1;


	i=0 ;
	t=n;
    max=1;

	while(n%2==0)
	{
     a[++x]=2;
     n=n/2;
	}

    j=3;k=0;
while(j<=sqrt(n)+1)
{
	if(n%j==0)
      {
      a[++x]=j;
      n=n/j;
      }

      else
      j=j+2;
}
     if(n>1)
	 a[++x]=n;

    same=1;

    for(i=1;i<=x;i++)
	if(a[1]!=a[i])
		same=0;

	if(same==1)
		printf("-1\n");

	else if(n==t)
		printf("-1\n");

	else
	{
		for(i=1;i<=x;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		printf("%lld\n",max);
	}

      
      }

return 0;
}

