#include<stdio.h>
int goutom( );
int roy();
long x,y,z,n;
void main( )
{
long i,j,k,p,c,cas=1;
while(scanf("%ld%ld%ld",&x,&y,&z)==3)
{

if(x==0 && y==0 && z==0)
break;
	printf("Case %ld:\n",cas++);
n=(x*z)+((z+1)*y);
for(i=0;i<z;i++)
{
roy( );
goutom( );
}
roy( );

}
 }

int roy()
{
long i,j;
for(i=0;i<y;i++)
{
for(j=0;j<n;j++)
printf("*");
printf("\n");
}
return 0;
}

int goutom( )
{
long i,j,k,c;
for(i=0;i<x;i++)
{
for(j=0;j<z;j++)
{
for(c=0;c<y;c++)
printf("*");
for(k=0;k<x;k++)
printf(".");
}
for(c=0;c<y;c++)
printf("*");
printf("\n" );
}
return 0;
}
