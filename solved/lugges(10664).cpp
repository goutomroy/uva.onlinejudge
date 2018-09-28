#include<stdio.h>
#include<algorithm>
using namespace std;
void main()
{
	long cas,a[30],i,j,b1,b2;
	char *ptr,str[100];

	scanf("%ld",&cas);

	while(cas--)
	{	
		scanf(" %[^\n]s",str);
		i=0;
		ptr=strtok(str," \n");

		while(ptr!=NULL)
		{
			a[i++]=atol(ptr);
			ptr=strtok(NULL," \n");
		}
		sort(&a[0],&a[i]);
		b1=b2=0;
for(j=i-1;j>=0;j--)
{
	if(b1>=b2)
		b2=b2+a[j];
	else
		b1=b1+a[j];
}
if(b1==b2)
printf("YES\n");
else
printf("NO\n");

	}
}
