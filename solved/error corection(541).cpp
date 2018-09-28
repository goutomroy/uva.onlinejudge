#include<stdio.h>
int i,j,k1,k2,n,a[100][100],sum,r,c,count;
void main()
{
	
	while(scanf("%d",&n)==1 && n)
	{
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
k1=k2=0;
for(i=1,r=0,count=0;i<=n;i++)
{
for(j=1,sum=0;j<=n;j++)
	sum=sum+a[i][j];
if(sum%2!=0)
{
	k1=1;
	if(r!=0)
	{
		count=999;
		break;
	}
r=i;
}
}
if(count==999)
{
printf("Corrupt\n");
continue;
}
for(i=1,c=0,count=0;i<=n;i++)
{
for(j=1,sum=0;j<=n;j++)
	sum=sum+a[j][i];
if(sum%2!=0)
{
	k2=2;
	if(c!=0)
	{
		count=999;
		break;
	}
c=i;
}
}
if(count==999)
{
printf("Corrupt\n");
continue;
}
if(k1==k2)
{
printf("OK\n");
continue;
}
printf("Change bit (%d,%d)\n",r,c);
	}
}

	


