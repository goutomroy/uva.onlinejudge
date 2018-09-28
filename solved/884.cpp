#include<stdio.h>
#include<math.h>
#include<string.h>

#define sz 1000005
long  prime[78600],k=0;
long a[sz];

void seive()
{
	long  i=0,j=0,r=0;
	char flag[sz];
	
   for(i=3;i<=sz;i+=2)
	   flag[i]='1';
	prime[k++]=2;

	for(i=3;i<=sz;i+=2)
		{
		if(flag[i]=='1'){
			prime[k++]=i;
			if(i<sz/i){
				r=i<<1;
				for(j=i*i;j<=sz;j+=r)
					flag[j]='0';
			}
		}
	}
}

void create()
{
     seive();
	 long i,tem,index,j;
	 for(i=0;i<k;i++)
	 {
		 for(j=1; ;j++)
		 {
		       index=prime[i]*j;
			   if(index>=sz)
			   {
			        break;
			   }
			   tem=index;
			   while(tem%prime[i]==0)
			   {
			          a[index]++;
					  tem=tem/prime[i];
			   }
		 }
	 }
	 tem=0;
	 for(i=0;i<sz;i++)
	 {
	       tem+=a[i];
		   a[i]=tem;
	 }
	 return;
}
void main()
{
 
long  i,num,counter,t,p;
create();
while(scanf("%ld",&num)==1)
{
    printf("%ld\n",a[num]);
}
}

