#include<stdio.h>
#include<string.h>
#include<math.h>
#define sz 205
long matrix [sz][sz],c,t;
char x[42000][30];

struct goutom
{
	char a[30],b[30];
	long cost;
}roy[11000];
long search( char ch[])
{
	long i;
	for(i=1;i<=t;i++)
	if(strcmp(x[i],ch)==0)		
		return i;
	
	return 0;
}
long  min ( long a, long b )
{
	if(a > b)
		return  b;
	return  a;
}


void main()
{
	long noc,edge,i,j,k,start,last,res,cas=1,tag;
	char beg[50],end[50];
	while( scanf( "%ld %ld",&noc,&edge )== 2 && ( noc || edge ) ) //noc-> number of city
	{

 memset( matrix, 0 , sizeof(long)* sz * sz);

for(i=c=1;i<=edge;i++)
{
scanf( "%s %s %ld ",roy[i].a, roy[i].b, &roy[i].cost );
strcpy(x[c++],roy[i].a);
strcpy(x[c++],roy[i].b);
}
scanf("%s%s",beg,end);
c--;
for(i=t=1;i<=edge*2;i++)
{
	tag=0;
	for(j=1;j<t;j++)
	{
		if(!strcmp(x[i],x[j]))
		{
			tag=1;
			break;
		}
	}
	if(tag==0)
		strcpy(x[t++],x[i]);
}
t--;

for(i=1;i<=t;i++)
for(j=1;j<=edge;j++)
{
	if(!strcmp(x[i],roy[j].a))
		matrix[i][search(roy[j].b)]=roy[j].cost;

	else if(!strcmp(x[i],roy[j].b))
		matrix[i][search(roy[j].a)]=roy[j].cost;
}

start=search(beg);
last=search(end);

for(k = 1; k <= noc; k++)
for(i = 1; i<=noc; i++)
for(j = 1; j <= noc; j++)
matrix[i][j] = (matrix[i][j] > min(matrix[i][k],matrix[k][j])) ? matrix[i][j]:min(matrix[i][k],matrix[k][j]);

res=matrix[start][last];

printf("Scenario #%ld\n",cas++);
printf("%ld tons\n\n",res);
	}
}

