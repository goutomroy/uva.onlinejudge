#include<stdio.h>
 long perfect( long n)
  {
  long  i,sum=0;

  for(i=1;i<n;i++)
	 if(n%i==0)
		{
		sum+=i;
		}
  return sum;


  }
void main()
  {
 long n,sum,i=0,x[100],j;
  do
  {
  scanf("%ld",&x[i]);
  i++;
  }
while(x[i-1]!=0);
printf("PERFECTION OUTPUT");
for(j=0;j<i-1;j++)
{
sum=perfect(x[j]);
	if(sum==x[j])
	printf("\n%5ld  PERFECT",x[j]);
	if(sum>x[j])
	printf("\n%5ld  ABUNDANT",x[j]);
	if(sum<x[j])
	printf("\n%5ld  DEFICIENT",x[j]);

 }
printf("\nEND OF OUTPUT");

  }