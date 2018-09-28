#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
# define sz 20000
bool flag1[sz],flag2[sz],flag3[sz];
void main()
{
	long a1[sz],a2[sz],a3[sz],b1[sz],b2[sz],b3[sz],t1,t2,t3,cas,p1,p2,p3,k,i,j,c,n;
	scanf("%ld",&cas);
	for(k=1;k<=cas;k++)
	{
	memset(flag1,0,sz);
	memset(flag2,0,sz);
	memset(flag3,0,sz);
	for(i=0;i<sz;i++)
	{
	a1[i]=0;a2[i]=0;a3[i]=0;
	}
		
			scanf("%ld",&p1);
			for(i=0;i<p1;i++)
			{
			scanf("%ld",&a1[i]);
			flag1[a1[i]]=1;
			}

			scanf("%ld",&p2);
			for(i=0;i<p2;i++)
			{
			scanf("%ld",&a2[i]);
			flag2[a2[i]]=1;
			}

			scanf("%ld",&p3);
			for(i=0;i<p3;i++)
			{
			scanf("%ld",&a3[i]);
			flag3[a3[i]]=1;
			}

		for(i=0,t1=0;i<p1;i++)
		{
			if(flag2[a1[i]]==0 && flag3[a1[i]]==0)
				b1[t1++]=a1[i];
		}
sort(&b1[0],&b1[t1]);
		for(i=0,t2=0;i<p2;i++)
		{
			if(flag1[a2[i]]==0 && flag3[a2[i]]==0)
				b2[t2++]=a2[i];
		}
sort(&b2[0],&b2[t2]);
		for(i=0,t3=0;i<p3;i++)
		{
			if(flag1[a3[i]]==0 && flag2[a3[i]]==0)
				b3[t3++]=a3[i];
		}
sort(&b3[0],&b3[t3]);

printf("Case #%ld:\n",k);
if(t1>t2 && t1>t3)
{
	printf("1 %ld",t1);
	for(c=0;c<t1;c++)
	{
		if(c!=t1)
			printf(" ");
			printf("%ld",b1[c]);
	}
	printf("\n");
	continue;
}
if(t2>t1 && t2>t3)
{
	printf("2 %ld",t2);
	for(c=0;c<t2;c++)
	{
		if(c!=t2)
			printf(" ");
			printf("%ld",b2[c]);
	}
	printf("\n");
	continue;
}
if(t3>t1 && t3>t2)
{
	printf("3 %ld",t3);
	for(c=0;c<t3;c++)
	{
		if(c!=t3)
			printf(" ");
			printf("%ld",b3[c]);
	}
	printf("\n");
	continue;
}
if(t1==t2 && t1!=t3)
{
printf("1 %ld",t1);
	for(c=0;c<t1;c++)
	{
		if(c!=t1)
			printf(" ");
			printf("%ld",b1[c]);
	}
	printf("\n");

	printf("2 %ld",t2);
	for(c=0;c<t2;c++)
	{
		if(c!=t2)
			printf(" ");
			printf("%ld",b2[c]);
	}
	printf("\n");
	continue;
}
if(t1==t3 && t1!=t2)
{
	printf("1 %ld",t1);
	for(c=0;c<t1;c++)
	{
		if(c!=t1)
			printf(" ");
			printf("%ld",b1[c]);
	}
	printf("\n");
	printf("3 %ld",t3);
	for(c=0;c<t3;c++)
	{
		if(c!=t3)
			printf(" ");
			printf("%ld",b3[c]);
	}
	printf("\n");
	continue;
}
if(t2==t3 && t2!=t1)
{
	printf("2 %ld",t2);
	for(c=0;c<t2;c++)
	{
		if(c!=t2)
			printf(" ");
			printf("%ld",b2[c]);
	}
	printf("\n");
	printf("3 %ld",t3);
	for(c=0;c<t3;c++)
	{
		if(c!=t3)
			printf(" ");
			printf("%ld",b3[c]);
	}
	printf("\n");
	continue;
}
printf("1 %ld",t1);
	for(c=0;c<t1;c++)
	{
		if(c!=t1)
			printf(" ");
			printf("%ld",b1[c]);
	}
	printf("\n");

	printf("2 %ld",t2);
	for(c=0;c<t2;c++)
	{
		if(c!=t2)
			printf(" ");
			printf("%ld",b2[c]);
	}
	printf("\n");
	printf("3 %ld",t3);
	for(c=0;c<t3;c++)
	{
		if(c!=t3)
			printf(" ");
			printf("%ld",b3[c]);
	}
	printf("\n");
	}
	}




