#include<stdio.h>
#include<math.h>
void main( )
{
long n,i,k,num,x,p,last,c,cas=1;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&num);p=last=0;
if(num==1)
printf("Case %ld:0 1\n",cas++);
else if(num==2)
printf("Case %ld:1 1\n",cas++);
else
{
while(1)
{
for(k=c=0;k<num;c++)
{
last=k;
k=(long)pow(2,c);
}
x=(num-last)*2;
x=x+1;
if(x==1)
{
printf("Case %ld:%ld %ld\n",cas++,p,x);
break;
}
else if(x==num)
{
printf("Case %ld:%ld %ld\n",cas++,p,x);
break;
}
num=x;p++;
}
}
}
}



