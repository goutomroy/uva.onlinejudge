#include<stdio.h>
void main( )
{
unsigned long a,b;
while(scanf("%lu%lu",&a,&b)==2)
printf("%lu\n",a^b);
}