#include<stdio.h>
#include<string.h>
char a[1005][20],str[500],*ptr,ph;
long n,m,i,j,d,b[1005],p,sum;

long search(char  ch[100])
{
	for(i=0;i<n;i++)
		if(strcmp(a[i],ch)==0)
			return b[i];
		return 0;
}

void main()
{	
	scanf("%ld%ld",&n,&m);

	for(i=0;i<n;i++)
		scanf(" %s %ld",&a[i],&b[i]);
	scanf("%c",&ph);
	while(m--)
	{
		sum=0;
		while(gets(str) && strcmp(str,"."))
		{			
ptr=strtok(str," ");
while(ptr)
{
	p=search(ptr);
	sum=sum+p;
	ptr=strtok(NULL," ");
}
		}
		printf("%ld\n",sum);
	}
}