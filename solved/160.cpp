#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 1000



int sieve(int n,int prime[sz])
{

int i=0,j=0,r=0,c=0;
char flag[sz];

  for(i=2;i<=n;i++)
	 flag[i]='1';

	  prime[c++]=2;
  for(i=3;i<=n;i+=2)
	 {
	 if(flag[i]=='1')
		{
		prime[c++]=i;
		if(i<sz/i)
		  {
		  r=i<<1;
		  for(j=i*i;j<=n;j+=r)
          flag[j]='0';
		  }
		}


	 }
  
	
return c;  

}

void getresult(int no)
	{

	int prime[sz],total,i,j=0,res,temp,power[sz],sum=0;
	
	res=no; 
	total=sieve(no,prime);

	 for(i=0;i<total;i++)
		{

		res=no;
		 sum=0;
		 temp=prime[i];

		 while(res)
			{
		
			res/=temp;
			sum+=res;
			}

		power[j++]=sum;


		}
for(i=0;i<j;i++)
	{
	if(i==15)
		printf("\n      ");

printf("%3d",power[i]);
	}
printf("\n");	
}





void main()
{

int no[sz],total=0,i,prime[sz];

do
{
scanf("%d",&no[total++]);
}
while(no[total-1]!=0);

for(i=0;i<total-1;i++)
{	
printf("%3d! =",no[i]);
	getresult(no[i]);
}

}