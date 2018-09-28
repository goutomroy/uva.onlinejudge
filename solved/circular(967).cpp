#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define sz 1000005
long circular[50];
bool flag[sz];

int sieve( )
{
long i,j,r,n;
n=(long)sqrt(sz);
flag[1]=1;
for(i=4;i<=sz;i+=2)
flag[i]=1;
for(i=3;i<=n;i+=2)
{
	 if(flag[i]==0)
		if(i<=sz/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<=sz;j+=r)
          flag[j]=1;
		  }
 }

  return 0; 
} 
int check( )
{
	long n,m,i,len,p,c=0;
	char ch[20],ph[20];
	for(n=101;n<=sz;n+=2)
		{		
		if(flag[n]==0)
		{
		p=1;	
		sprintf(ch,"%ld",n);
		len=strlen(ch);
		for(i=1;i<len;i++)
		{
			strcpy(ph,ch+1);
			ph[len-1]=ch[0];
			ph[len]='\0';
			strcpy(ch,ph);
			m=atol(ph);
			if(flag[m]==1)
			{
				p=0;
				break;
			}
		}
		if(p==1)
			circular[c++]=n;
		}
		
	}
	//printf("%ld\n",c);//there are 42 circular prime between lb && ub
return 0;
}
void main( )
{
    sieve( );
	check( );
	long count,x,y,i;
	while(scanf("%ld",&x)==1 && x!=-1)
	{
		scanf("%ld",&y);
		count=0;
		for(i=0;i<42 && circular[i]<=y;i++)		
			if(circular[i]>=x && circular[i]<=y)
				count++;
			if(count==0)
			printf("No Circular Primes.\n");
			else if(count==1)
				printf("1 Circular Prime.\n");
			else
				printf("%ld Circular Primes.\n",count);
	}
}





		


