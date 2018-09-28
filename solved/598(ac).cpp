#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char paper[15][40];
long solution;

typedef struct
{
	long value[15],length;
}data;

data set[4100];

int comp(const void *a,const void *b)
{
	data *x,*y;

	x=(data *)a;
	y=(data *)b;

	return (x->length-y->length);
}

void process(long n,long k,long a[])
{	
	long i,j;	
		
	for(i=1;i<=k;i++)
		set[solution].value[i]=a[i];

	set[solution].length=k;

	solution++;
}

void con_cat(long n,long k,long a[],long c[],long *ncandidate)
{
	*ncandidate=0;

	for(long i=a[k-1]+1;i<=n;i++)
		c[(*ncandidate)++]=i;
}

void subset(long n,long k,long a[])
	{

	if(k)
		process(n,k,a);			

		if(n==k)
		{
			return ;	
		}
			

		long i,c[20],ncandidate,l;
		k++;

		con_cat(n,k,a,c,&ncandidate);
		

		for(i=0;i<ncandidate;i++)
			{
				a[k]=c[i];	                                                
				subset(n,k,a);
			}

	}




void main()
{
//freopen("e:\\input.txt","r",stdin);
//freopen("e:\\output.txt","w",stdout);
	long test,lb,i,ub,k,in,total,j;
	char str[50],ch;
	long a[25];
	bool star;

	scanf("%ld",&test);

	while(test)
	{
		test--;
		star=0;

		scanf(" %[^\n]s",str);

		if(strcmp(str,"*")==0)
		{
			star=1;
		}
		else
		{
			in=sscanf(str,"%ld %ld",&lb,&ub);

			if(in==1)
			{
				i=lb;
				ub=lb;
			}
			else
			{
				i=lb;
			}
		}

		total=0;
		scanf("%c",&ch);

		while(gets(str)!=NULL&&str[0])
		{
			strcpy(paper[total++],str);

		}

		if(star)
		{
			i=1;
			ub=total;
		}

		
		

		a[0]=0;
		solution=0;
		subset(total,0,a);
		
		//qsort(set,solution,sizeof(data),comp);

		/*for(i=0;i<solution;i++)
		{
			for(j=1;j<=set[i].length;j++)
				printf("%ld ",set[i].value[j]);

			printf("\n");
		}*/
		
		for(;i<=ub;i++)
		{
			printf("Size %ld\n",i);

			for(j=0;j<solution;j++)
				if(i==set[j].length)
				{
					for(lb=1;lb<=i;lb++)
					{
						printf("%s",paper[set[j].value[lb]-1]);
						//printf("%ld",set[j].value[lb]);
						
						if(lb!=i)
							printf(", ");
					}

					printf("\n");
				}
				printf("\n");
		}
		
		if(test)
			printf("\n");
	
		
	}

}
*************************************************
why wa? all board input is correct.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define sz 1000
char news[20][1000];
long tag,m,nn,in[15],y[5000][200];
void con_can(int n,int k,int a[],int c[],int *ncandidate);
void process_solution(int n,int k,int a[]);

void subset(int n,int k,int a[])
{
  process_solution(n,k,a);
  if(n==k)
	  return;
  int i,c[sz],ncandidate;
  k++;
  con_can(n,k,a,c,&ncandidate);
  for(i=0;i<ncandidate;i++)
  {
    a[k]=c[i];
	subset(n,k,a);
  }
}
void con_can(int n,int k,int a[],int c[],int *ncandidate)
{
  *ncandidate=0;
  for(int i=a[k-1]+1;i<=n;i++)
    c[(*ncandidate)++]=i;
}
void process_solution(int n,int k,int a[])
{
  int i;
  if(tag && ( k>=m && k<=nn) )
	  for(i=1;i<=k;i++)
		  y[k][in[k]++]=a[i]-1;
	 
  else if(tag==0)
     for(i=1;i<=k;i++)
		 y[k][in[k]++]=a[i]-1;
}

void main()
{
int a[50];
	char ch,ph[100],*ptr,*chr;
    long i,j,cas,k,t,p,tax[10];
	scanf("%ld",&cas);
	scanf("%c",&ch);
    
	for(k=1;k<=cas;k++)
	{
		scanf("%c",&ch);
        for(i=0;i<=60;i++)
			in[i]=1;
		a[0]= 0; p = 0; tag=0;

		gets(ph);
		ptr=strtok(ph," ");
		while(ptr)
		{
            tax[p++]=strtol(ptr,&chr,10);
			ptr=strtok(NULL," ");
		}

		if(p==1)
			tag=0;
		else
		{
			m=tax[0];
			nn=tax[1];
			tag=1;
		}
		i=0;		
		while(gets(news[i++]) && strlen(news[i-1])!=0)
			;
		subset(i-1,0,a);
		if(tag==0)	
		for(j = 1; j <= i-1; j++)	
		{			
				printf("Size %ld\n",j);
				for(t = 1 ; t < in[j] ; t++)
				{
					printf("%s",news[y[j][t]]);
					if(t%j!=0 && j>1)
						printf(", ");
					if(t%j==0)
						printf("\n");
				}
				
		if(j!=i-1)
					printf("\n");
		}
		else
			for(j = m; j <= nn; j++)	
		{			
				printf("Size %ld\n",j);
				for(t = 1 ; t < in[j] ; t++)
				{
					printf("%s",news[y[j][t]]);
					if(t%j!=0 && j>1)
						printf(", ");
					if(t%j==0)
						printf("\n");
				}
				if(j!=nn)
					printf("\n");
				
		
		}

		

}
}