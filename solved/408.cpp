#include<stdio.h>
void main( )
{
long long step,mod,seed,count;
while(scanf("%lld%lld",&step,&mod)==2)
{
count=0;seed=0;
do
{
seed=(seed+step)%mod;
count++;
}while(seed!=0);


if(count==mod)
printf("          %lld         %lld     Good Choice\n",step,mod);

else
printf("          %lld         %lld     Bad Choice\n",step,mod);
}
}


