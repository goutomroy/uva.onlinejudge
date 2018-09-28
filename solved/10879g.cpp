#include<stdio.h>
#include<math.h>
void main( )
{
 long n,num,cas=1,tt,x,y,i,k,p;
 scanf("%ld",&n);
 for(i=0;i<n;i++)
 {
 x=y=1;
 scanf("%ld",&num);k=num;
 printf("Case #%ld: %ld",cas++,num);
 for(tt=2,p=0;tt<=sqrt(num)+1;tt++)
 {

 if(num%tt==0 && tt!=x && tt!=num)
 {
 p++;
 x=num/tt;
 printf(" = %ld * %ld ",x,tt);
 if(p==2)
 break;
 }

 }

 if(x==1 && y==1)
 printf(" = %ld",k);
 printf("\n");
 }
 }


