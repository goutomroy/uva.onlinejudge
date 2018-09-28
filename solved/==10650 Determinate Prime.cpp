#include<stdio.h>
#define sz 32100
int prime[3447] ;
bool flag[sz] ;

void sieve(void)
{
	int i, j, c = 0, r ;
	
	prime[c++] = 2;

	for(i=3;i<sz;i+=2)
	{
		if( flag[i]==false) 
		{
			prime[c++] = i;

			if(sz/i>=i)
			{
				r = i<<1; 
				for(j=i*i;j<sz;j+=r) flag[j] = true;
			}
		}
	}	
}

int Find_x( int n )
{
	int start = 0, end = 3444, mid = ( start + end )/2 ;

	while( start<end )
	{
		if( prime[mid]==n) return mid;

		else if( mid>0 && ( prime[mid]>= n && prime[mid-1]<n ) ) return mid ; 

		else if( prime[mid]>n )
		{
			end = mid ;
			mid = ( start + end )/ 2 ;
		}

		else if ( prime[mid]<n && prime[mid+1]>n ) return mid + 1 ;

		else if( prime[mid]<n) 
		{
			start = mid ;
			mid = ( start + end )/2 ;
		}
	}
		
	return 0;
}

int main(void)
{
	sieve();

	//freopen("10650.in","r",stdin);
	//freopen("10650.out","w",stdout);

	int x, y, list[100] , i, j,index, count, dis, k ;

	while( scanf("%d%d",&x,&y)==2 &&( x||y) )
	{
		if(x>y) x^=y^=x^=y;

		index = Find_x( x ) ;		

		j = 0;

		while(1)
		{
			dis = prime[index+1] - prime[index] ;

			if(index>0 && prime[index] - prime[index-1] !=dis )
			{
				list[j++] = prime[index] ;
				list[j] = prime[index+1] ;

				count = 2 ;
				break;
			}
			index++;
		}		

		for(i=index+2;prime[i]<=y;i++)
		{
			if( prime[i] - list[j] !=dis && count>=3 )
			{
				for(k=0;k<=j;k++)
				{
					if(list[k]==0) break;

					if(k==0) printf("%d",list[k]);
					else printf(" %d",list[k]);
				}
				printf("\n");

				list[0] = prime[i-1] ;

				list[1] = prime[i] ;

				j = 1;

				dis = prime[i] - prime[i-1] ;

				count = 2;					
			}

			else if( prime[i]-list[j]!=dis)
			{
				list[j-1] = list[j] ;
				list[j] = prime[i] ;
				dis = list[j] - list[j-1] ;
				count= 2;
			}

			else if( prime[i] - list[j]==dis )
			{
				list[++j] = prime[i] ;
				count++;
			}
		}

		if(count>=3 && prime[i] - prime[i-1]!=dis) 
		{
			for(k=0;k<=j;k++)
			{
				if( list[k]==0) break;
					if(k==0) printf("%d",list[k]);
					else printf(" %d",list[k]);
			}
				printf("\n");
		}		
	}
	return 0;
}
/*WHY not acc !
#include<stdio.h>
#include<string.h>
long sieve(long n);
char flag[32010];
long prime[3440],a[3440],deter[180];
void main( )
{
sieve(32010);
long  n,i,m,j,dif,c,p,pre,k;
while(scanf("%ld%ld",&n,&m)==2)
	{
if(n==0 && m==0)
break;
if(n>m)
m^=n^=m^=n;
	for(i=c=0;prime[i]<=m;i++)
		if(prime[i]>=n)
			a[c++]=prime[i];

	for(i=pre=k=0,p=2;i<c;i++)
	{
		dif=a[i+1]-a[i];
		if(dif==pre)
		{
			p++;k=p;pre=dif;
			continue;
		}
		else
		{
			p=2;  pre=dif; 
		}
		if(k>=3)
		{
			for(j=i-k+1;j<=i;j++)
				printf("%ld ",a[j]);
			k=0;
			printf("\n");
		}
		
	}
	

}

}

long sieve(long n)
{
long i=0,j=0,r=0,c=0;
prime[c++]=2;
for(i=3;i<=n;i+=2)
	 {
	 if(flag[i]==0)
		{
		prime[c++]=i;
		if(i<=n/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<=n;j+=r)
          flag[j]='1';
		  }
	 }


	 }
  return 0; 
} */



