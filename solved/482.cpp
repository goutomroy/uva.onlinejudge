#include<stdio.h>
struct goutom
{
char tt[50];
}roy[6000];
void main( )
{
char ch;
long i,k,j,n,c,a[7000];
scanf("%ld",&n);
for(k=0;k<n;k++)
{
for(j=0;  ;   )
{
scanf("%ld%c",&a[j],&ch);
j++;
if(ch!=' ')
break;
}

for(c=0;c<j;c++)
scanf("%s",&roy[a[c]].tt);

for(c=0;c<j-1;c++)
for(i=0;i<j-1;i++)

if(a[i]>a[i+1])
a[i]^=a[i+1]^=a[i]^=a[i+1];

for(i=0;i<j;i++)
printf("%s\n",roy[a[i]].tt);
}
}



