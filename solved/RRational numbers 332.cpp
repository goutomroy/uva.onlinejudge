#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

long GCD( long a, long b )
{
	if( !b ) return a;

	else return GCD( b, a%b );
}

int main(void)
{
	long i=1, j, k, Numer, Denom, gcd, len ;
	long X , temp ;
	char str[100] ;	

	while( scanf(" %ld",&j)==1 )
	{
		if(j==-1) break;

		scanf(" %s", str );

		len = strlen( str ) ;

		k = len - 2 - j ;

		X = atol( str+2 ) ;			

		if( j>0 )
		{
			Denom = pow(10, k+j ) ;
			
			Denom = Denom - pow( 10, k );
			
			temp = ( X/(pow(10,j) ) ) ;

			Numer = X -  temp  ;					
		}

		else 
		{
			Denom = pow( 10, k ) ;			
			Numer = X ;
		}
		
		gcd = GCD( Numer, Denom );

		if( gcd )
		{
			Numer/=gcd ;
			Denom/=gcd ;
		}

		printf("Case %ld: %ld/%ld\n",i++,Numer, Denom );
	}
	return 0;
}
/*************************************
Wrong ans?
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

long gcd(long a,long b)
{
if(!b)
return a;
else
return gcd(b,a%b);
}
void main( )
{
	char s[600],*ch;
	long   pum,deno,j,p,num,value,cas=1,mom;
	while(scanf(" %ld",&j)==1)
	{
		if(j==-1)
			break;
		scanf(" %s",s);
		if(j>0)
		{
		p=strlen(s)-2-j;
		num=strtol(s+2,&ch,10);
		mom=(num/pow(10,j));
		pum=num-mom;
		deno=pow(10,p+j)-pow(10,p);		
		}
		else
		{
		pum=strtol(s+2,&ch,10);           			
			deno=pow(10,p) ;
		}
        value=gcd(pum,deno);
		if(value)
		{
			pum=pum/value;
			deno=deno/value;
		}
		printf("Case %ld: %ld/%ld\n",cas++,pum,deno);
	}

}


		