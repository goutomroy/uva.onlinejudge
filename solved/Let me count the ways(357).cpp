#include<stdio.h>
#include<string.h>
int add(long x,long y);
struct goutom
{
char way[20];
}roy[30005];

void main( )
{
	long  i,j,n;
	long  coin[5]={50,25,10,5,1};
	roy[0].way[0]='1';
	roy[0].way[1]='\0';
		for(i=0;i<5;i++)
		for(j=coin[i];j<=30002;j++)
		add(j,j-coin[i]);
			
		while(scanf("%ld",&n)==1)
		{
			if(n<=4)
				printf("There is only 1 way to produce %ld cents change.\n",n);
			else
		printf("There are %s ways to produce %ld cents change.\n",roy[n].way,n);
		}
	
}
int add(long x,long y)
	{
	long i,j,t1,t2,carry,k,len,ten;
	char result[20],a[20],b[20];
	carry=k=0;
	strcpy(a,roy[x].way);
	strcpy(b,roy[y].way);
	len=strlen(a);
	ten=strlen(b);
	for(i=len-1,j=ten-1;i>=0||j>=0;i--,j--)
	{
	t1=t2=0;
	if(i>=0)
	t1=a[i]-'0';
	if(j>=0)
	t2=b[j]-'0';
	result[k++]=((t1+t2+carry)%10)+'0';
	carry=(t1+t2+carry)/10;
	}
	while(carry)
	{
	result[k++]=(carry%10)+'0';
	carry/=10;
	}
	result[k]='\0';
	for(i=k-1,j=0;i>=0;i--,j++)
		roy[x].way[j]=result[i];
	roy[x].way[j]='\0';
	
	return 0;
	}


