#include<stdio.h>
#include<math.h>
 long power(long x,long num);
 long primefactor(long num);
 long same(long i);
 long a[3000],b[3000],c[3000],mini,q;
void main( )
{
long n,num,m,k,cas=1,i,c,x,p,y;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
  mini=q=0;
  scanf("%ld %ld",&m,&num);
  printf("Case %ld:\n",cas++);
  c=primefactor(m);
  k=same(c);
for(x =p= 0; x < k ;x++)
{
  y=power(x,num);
  if(0==y)
  {
  printf("Impossible to divide\n");
  p=1;
  break;
  }
}
if(p==0)
printf("%ld\n",mini);
}
}


 long power(long x,long num)
 {
 long sum=0;
	while(num)
	{
	num=num/c[x];
	sum=sum+num;
	}
	if(sum<b[x])
	return 0;
	if(q==0)
	mini =  sum/b[x];
	else if  (mini>(sum/b[x]))
	mini = (sum/b[x]);
	q=1; 
	return 1;
	}
long primefactor(long num)
{
long i=3,j=0;
  while(num%2==0)
  {
  a[j++]=2;
  num=num/2;
  }

  while(i<=sqrt(num)+1)
  {
  if(num%i==0)
  {
  a[j++]=i;
  num=num/i;
  }
  else
  i=i+2;
  }
  if(num>1)
  a[j++]=num;
  return j;
  }
  long same(long i)
  {
  long j,k,l;
  for(j=k=a[i]=0,l=1;j<i;j++)
  {
  if(a[j]==a[j+1])
  l++;
  else
  {
  b[k]=l;
  c[k++]=a[j];
  l=1;
  }
  }
  return k;
  }












