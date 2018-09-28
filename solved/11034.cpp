#include<stdio.h>
#include<string.h>
void main( )
{
long i,c,j,n,k,num,top,cop,count,cas,sum,a[10000],b[10000],m,x[10000],y[10000];
char ch[10];
scanf("%ld",&cas);
for(k=0;k<cas;k++)
{
scanf("%ld %ld",&num,&m);
num=num*100;
for(c=top=cop=0;c<m;c++)
{
	scanf("%ld %s",&n,ch);
	if(ch[0]=='l')
	a[top++]=n;
	else
	b[cop++]=n;
}
/*for(i=top-1,j=0;i>=0;i--)
x[j++]=a[i];
memcpy(a,x,sizeof(x));
for(i=top-1,j=0;i>=0;i--)
y[j++]=a[i];
memcpy(a,y,sizeof(y));   */

	top--;  cop--;  count=0;
	while(1)
	{
	if(top>=0 || cop>=0)
	{
	count++;sum=0;
	while(sum<=num)
	sum=sum+a[top--];
	top++;
	}
	if(top>=0 || cop>=0)
	{
	count++;sum=0;
	while(sum<=num)
	sum=sum+b[cop--];
	cop++;
	}
	if(top<0 && cop<0)
	break;
	}
	printf("%ld\n",count);
	}
	}

