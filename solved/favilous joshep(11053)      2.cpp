#include<stdio.h>

#define sz 3000000
#define prime1 2999999
#define prime2 2999957

long long a, b, n, x, counter, tt, ttt;

struct goutom
{
	long long num, coun_check; 
}   roy[sz];

int hash_search()
{
    long long p, q, i, k;

tt=0;
p=x%prime1;
q=1+(x%prime2);

for(i=0;i<=prime1;i++)
{
   k=(p+(i*q))%prime1;

   if(roy[k].num==0)
   return 0;

   if(roy[k].num==x)
   {
	   tt=roy[k].coun_check;
	   return 1;
   }
}

	return 0;
}



int hash( )
{
long long p, q, i, k;

p=x%prime1;
q=1+(x%prime2);

for(i=0;i<=prime1;i++)
{
   k=(p+(i*q))%prime1;

   if(roy[k].num==0)
   {
       roy[k].num=x;
	   roy[k].coun_check=++counter;
	   

	   //if(x==445093286)
		   //ttt=counter;
	   return 0;
   }

}
	return 0;
}


int process()
{
    long long i, tag=0;

	x=counter=ttt=0;

	for(i=0;i<sz;i++)
		roy[i].num=roy[i].coun_check=0;

	hash( );

	while(1)
	{

	x=(  ( ((a%n)*(x%n) )%n *(x%n) )%n+ (b%n)  )%n;

    //if(x==445093286)
	//printf("%lld\n",x);

	if( hash_search() )
	{
		printf("%lld\n",n-( (counter-tt)+1) );
		return 0;
	}

	hash( );
	}

	return 0;
}

int main()
{

	while(scanf("%lld",&n) && n)
	{
		scanf("%lld%lld",&a,&b);
		process(); 
		//printf("%lld %lld\n",ttt,counter);
		//for(int i=0;i<=ttt;i++)
			//printf("%lld  %lld\n",i,roy[i].num);
	}

	return 0;
}