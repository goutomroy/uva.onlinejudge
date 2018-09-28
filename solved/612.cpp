#include<stdio.h>
#include<string.h>
struct goutom
{
long len;
char ch[109];
}roy[109];
void main( )
{
char dna[109];
long n,m,i,j,k,c,t,count,l,p,index,min;
scanf("%ld",&k);
for(i=0;i<k;i++)
{
scanf("%ld%ld",&n,&m);
for(j=0;j<m;j++)
{
scanf("%s",roy[j].ch);
count=0; strcpy(dna,roy[j].ch);
for(c=0;c<n-1;c++)
for(t=0;t<n-1;t++)
if(dna[t]>dna[t+1])
{
dna[t]^=dna[t+1]^=dna[t]^=dna[t+1];
count++;
}
roy[j].len=count;
}
printf("\n");
for(c=0;c<m;c++)
{
min=roy[0].len;index=0;
for(j=0;j<m;j++)
{
if(roy[j].len<min)
{
min=roy[j].len;index=j;
}
}
roy[index].len=50000;
printf("%s\n",roy[index].ch);
}
}
}



