
#include<stdio.h>
#include<math.h>

int main()
{

long long  n,num,val;


while(scanf("%lld",&num)==1)
{
	 n=(long long)ceil((sqrt(1+8*num)-1)/2);

		  val=n*(n-1)/2;
		  num=num-val;

		  printf("%lld/%lld\n",(n+1)-num,num);
		  
      }
	  return 0;
}
