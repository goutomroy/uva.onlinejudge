#include<stdio.h>
#include<string.h>
int add(char a[5000]);
long  divide(long divisor);
char prry[5000],result[5000];
long k=0;
void main( )
{
char arry[1009][40];
long i,j,m,n;
while(scanf("%ld%ld",&n,&m)==2)
{
prry[0]='0';prry[1]='\0';
if(n==0&&m==0)
break;
for(i=0;i<n;i++)
{
scanf("%s",arry[i]);
add(arry[i]);
}
divide(m);
}
}

int add(char a[5000])
	{
	char b[5000];
	long i,j,t1,t2,carry,k,len,ten;
	 strcpy(b,prry);
	carry=k=0;
	len=strlen(a);
	ten=strlen(b);
	for(i=len-1,j=ten-1;i>=0||j>=0;i--,j--)
	{
	t1=t2=0;
	if(i>=0)
	t1=a[i]-'0';
	if(j>=0)
	t2=b[j]-'0';
	result[k++]=((t1+t2+carry)%10)+'0';
	carry=(t1+t2+carry)/10;
	}
	while(carry!=0)
	{
	result[k++]=(carry%10)+'0';
	carry/=10;
	}
	result[k]='\0';
	for(i=k-1,j=0;i>=0;i--)
	 prry[j++]=result[i];
	 prry[j]='\0';
	return 0;
	}

	long  divide(long divisor)
{
long i,index,digit,temp,num;
temp=divisor;
index=0;
num=0;
for(i=0;temp>0 && prry[i]!='\0';i++)
{
num=num*10+(prry[i]-'0');
		temp/=10;
		}
		digit=num/divisor;
		if(digit!=0)
		result[index++]=digit+'0';
		num=num-digit*divisor;
		while(prry[i]!='\0')
		{
		num=num*10+(prry[i++]-'0');
				  digit=num/divisor;
				  result[index++]=digit+'0';
				  num=num-digit*divisor;
				  }
				  if(index==0)
				  result[index++]='0';
				  result[index]='\0';
				  k++;
				  printf("Bill #%ld costs ",k);
				  for(i=0;prry[i]!='\0';i++)
				printf("%c",prry[i]);	  
				printf(": each friend should pay ");
				  for(i=0;i<index;i++)
				  printf("%c",result[i]);
              printf("\n");
			  return 0;

				  }




