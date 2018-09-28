#include<stdio.h>
#include<math.h>
long x,y;
int checkprime(long x);
int goldback(long num);
void main( )
{
	long num,n;
	while(scanf("%ld",&num)==1)
	{
		if(num<8)
			printf("Impossible.");
			
		
		else if(num%2==0)
		{
			if((num/2)%2==0)
			{
            goldback(num/2);
			printf(" %ld %ld",x,y);
			}
			else
			{
				printf("2 2 ");
				goldback(num-4);
			}
		}
		else
		{
				printf("2 3 ");
				goldback(num-5);
		}
		
		printf("\n");
	}
}
int goldback(long num)
{
	long i,k,k1,k2;
	k=checkprime(num-2);
	if(k==1)
	{
		printf("%ld %ld",2,num-2);
		x=2;y=num-2;
		return 0;
	}

	for(i=3;i<=num/2;i+=2)
	{
k1=checkprime(i);
k2=checkprime(num-i);
  if(k1==1  &&  k2==1)
  {
		printf("%ld %ld",i,num-i);
		x=i;y=num-i;
		break;
	}
	}
	return 0;
}
int checkprime(long n)
{
	long i, root;

if(n==2)
return 1;
if(n%2==0)
return 0;
 root=sqrt(n);
for(i=3;i<=root;i+=2)
{
if(n%i==0)
return 0;
}
return 1;
}

		

	
	
		


