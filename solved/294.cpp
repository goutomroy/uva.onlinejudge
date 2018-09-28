	*294*
#include<stdio.h>
#include<math.h>
unsigned long divisor(unsigned long num)
  {
  unsigned long i,j=0,root,div;
  root=sqrt(num);
  for(i=1;i<=root;i++)
	 if(num%i==0)
		j++;
  div=2*j;
  if(num==root*root)
	div=div-1;
	return div;
	}
void main()
  {


  unsigned long i,j,k,max_div=0,max_num,num1[100],num2[100],div,cases,temp,out;
  scanf("%lu",&cases);
  for(i=0;i<cases;i++)
	 {
  scanf("%lu%lu",&num1[i],&num2[i]);

	  }


 for(k=0;k<cases;k++)
	{
	 max_div=0;
	 max_num=0;
	if(num2[k]-num1[k]>10000)
	  num2[k]=num1[k]+10000;
	if(num1[k]%2==0||num2[k]-num1[k]==0)
	 {
	 temp=num1[k];
	 }
	 else
	 temp=num1[k]+1;
	 if(num1[k]==0)
		temp=1;

	for(i=temp;i<=num2[k];i=i+2)
	{
	div=divisor(i);
	if(max_div<div)
	  {
	  max_div=div;
	  max_num=i;
	  }

	}

  printf("Between %lu and %lu, %lu has a maximum of %lu divisors.",num1[k],num2[k],max_num,max_div);
  if(k!=cases-1)
	 printf("\n");
  }

  }
