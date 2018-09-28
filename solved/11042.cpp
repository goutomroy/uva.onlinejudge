#include<stdio.h>

#include<math.h>

void main( )

{

long n1,n2,n,i;

scanf("%ld",&n);

for(i=0;i<n;i++)
{
scanf("%ld %ld",&n1,&n2);

if(n2==0)
printf("1\n");  

else if(n1==0)
printf("2\n");

else if(abs(n1)==abs(n2))
printf("4\n");

else
printf("TOO COMPLICATED\n");

}
}
