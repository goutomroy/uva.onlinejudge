#include<stdio.h>
#include<math.h>
 unsigned long num;
int addrev( );
int saming( unsigned long a[200], unsigned long len);
int main( )
{
 unsigned long n,i,k,l;
scanf("%lu",&n);
for(i=0;i<n;i++)
{
k=0;l=0;
scanf("%lu",&num);
while(k!=1)
{
k=addrev( );
l++;
}
printf("%lu %lu\n",l,num);
}
return 0;
}

int addrev( )
{
	double t=10,d;
 unsigned long a[200],b[200],ulta=0,len=0,k=0,i,loc=num,result;
while(loc!=0)
{
a[len++]=loc%10;
loc=loc/10;
}
d=len-1;i=0;
 while(d>=0)
	  {

	  ulta=ulta+(a[i]*pow(t,d));
	  d=d-1;
	  i++;
	  }
	  num=num+ulta;
	  result=num;
     len=0;
	  while(result!=0)
{
b[len++]=result%10;
result=result/10;
}
k=saming(b,len);
if(k==1)
return 1;
return 0;
}
int saming( unsigned long a[200], unsigned long len)
	{
	unsigned long i,j;
	for(i=0,j=len-1;i<j;j--,i++)
	{
	if(a[i]==a[j])
	;
	else
	return 0;
	}
   return 1;
	}






