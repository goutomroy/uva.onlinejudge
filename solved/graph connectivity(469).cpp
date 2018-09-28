#include<stdio.h>
#include<string.h>
char x[100],y[100],z[200];
bool colour[100],matrix[100][100];
long t,c,stack[100],len;

int search(char ph)
{
	for(int i=1;i<=len;i++)
		if(ph==z[i])
			return i;
		return 0;
}
void dfs(long p)
{
 long top=0,i;
stack[top++]=p;
while(top!=-1)
{
	top--;
	p=stack[top];
	colour[p]=1;
	for(i=1;i<=len;i++)
		if(matrix[p][i]==1 && colour[i]==0)
		{
			colour[i]=1;
			stack[top++]=i;
		}				
}
}

void main()
{
	long cas,i,j,k,count,tag;
	char ch,str[4],ph;
	z[1]='A';z[2]='B';z[3]='C';z[4]='D';z[5]='E';z[6]='F';z[7]='G';z[8]='H';z[9]='I';
	z[10]='J';z[11]='K';z[12]='L';z[13]='M';z[14]='N';z[15]='O';z[16]='P';z[17]='Q';z[18]='R';
	z[19]='S';z[20]='T';z[21]='U';z[22]='V';z[23]='W';z[24]='X';z[25]='Y';z[26]='Z';
	scanf("%ld",&cas);
scanf("%c",&ph);
scanf("%c",&ph);
	while(cas--)
	{
		memset(matrix,0,100*100);
		t=1;k=count=tag=0;
		scanf(" %c",&ch);
		scanf("%c",&ph);
		while(gets(str) && strlen(str)!=0)
		{
			tag=1;
			x[t]=str[0];
			y[t++]=str[1];
		}
		if(tag==0)
			printf("%d\n",ch-'A'+1);
			
		else
		{
		len=ch-'A'+1;
		for(i=1;i<=len;i++)
			colour[i]=0;

		for(i=1;i<=len;i++)
		{		
			for(j=1;j<t;j++)
			{
				if(z[i]==x[j])
	            matrix[i][search(y[j])]=1;
				
				else if(y[j]==z[i])
                    matrix[i][search(x[j])]=1;			
			}
		
		}
		
   for(i=1;i<=len;i++)
      if(colour[i]==0)
	  {

	count++;
    dfs(i);
	  }
	  printf("%ld\n",count);
		}
	  if(cas!=0)
	  printf("\n");

	}
}
		




