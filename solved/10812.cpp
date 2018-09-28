#include<stdio.h>
void main( )
{
long long k,d,s,n,score1,score2,i;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld%lld",&s,&d);
 score1=(s+d)/2;
 score2=s-score1;
 if((s+d)%2==0 && score1>=0  && score2>=0)
 {
 if(score1>score2)
 printf("%lld %lld\n",score1,score2);
 else
  printf("%lld %lld\n",score2,score1);
  }
  else
  printf("impossible\n");
  }
  }
