



//TALHA(ac)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sz 100005

int fun[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9};


typedef struct
	{
		long value,count;
		char str[100];
	}data;

data tele[sz],temp;

int comp(const void *a,const void *b)
{
	long *x,*y;

	x=(long *)a;
	y=(long *)b;

	return(*x-*y);
}



long convert(char line[],char str[])
	{
		long i,j=0,k=0,len,l=0;
		char sub[100];

		len=strlen(line);

		for(i=0;i<len;i++)
			if(line[i]!='-')
				{
					if(line[i]>='A'&&line[i]<='Y')
						{
							l=line[i]-'A';
							sub[j++]=fun[l]+'0';

							if(k==3)
								str[k++]='-';

							str[k++]=fun[l]+'0';

						}
						else
							{
								sub[j++]=line[i];
								if(k==3)
								str[k++]='-';
								str[k++]=line[i];
							}
				}

		str[k]='\0';
		sub[j]='\0';
		

		return atol(sub);
	}



void getresult(long total)
	{
		long i,j,k,count=0,dup=0;

		for(i=0;i<total;i++)
			{
				count=1;
				if(tele[i].value!=999999999)
					{
						for(j=i+1;j<total;j++)
							{
								if(tele[i].value==tele[j].value&&tele[j].value!=999999999)
									{
										count++;
										tele[j].value=999999999;
									}
								else
									break;
							}
					if(count>1)
						{
							printf("%s %ld\n",tele[i].str,count);
							dup=1;
						}
				}
			}

		if(dup==0)
			printf("No duplicates.\n");
	}

void main()
	{
		long set,total,i,j;
		char line[100];

		scanf("%ld",&set);

		for(i=0;i<set;i++)
			{
				scanf("%ld",&total);

				for(j=0;j<total;j++)
					{
						scanf(" %[^\n]s",line);
						tele[j].value=convert(line,tele[j].str);
						tele[j].count=1;
					}
				qsort(tele,total,sizeof(data),comp);

				getresult(total);

				if(i!=set-1)
					printf("\n");
				
			}
	}

***********************************************
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int comp(const void *a,const void *b);
long ptr[500],num[1000];
void main( )
{
char str[20];
long a[20],i,j,p,n,m,len,c,tt,d,l;
ptr['A'-'0']=ptr['B'-'0']=ptr['C'-'0']=2;
ptr['D'-'0']=ptr['E'-'0']=ptr['F'-'0']=3;
ptr['G'-'0']=ptr['H'-'0']=ptr['I'-'0']=4;
ptr['J'-'0']=ptr['K'-'0']=ptr['L'-'0']=5;
ptr['M'-'0']=ptr['N'-'0']=ptr['O'-'0']=6;
ptr['P'-'0']=ptr['R'-'0']=ptr['S'-'0']=7;
ptr['T'-'0']=ptr['U'-'0']=ptr['V'-'0']=8;
ptr['W'-'0']=ptr['X'-'0']=ptr['Y'-'0']=9;

scanf("%ld",&m);
for(i=0;i<m;i++)
{
scanf("%ld",&n);
for(j=0;j<n;j++)
{
gets(str);
len=strlen(str);
for(c=p=0;c<len;c++)
{

if(str[c]>='A' && str[c]<='Z')
a[p++]=ptr[str[c]-'0'];

else if(str[c]!='-')
a[p++]=str[c]-'0';

}

            for(c=tt=0,l=p-1;c<p;c++,l--)
             tt=tt+(a[c]*pow(10,l));
             num[j]=tt;

}
qsort(num,n,sizeof(long),comp);

for(d=p=num[n]=0,l=1;d<=n;d++)
{
  if(num[d]==num[d+1])
		l++;
  else if(l>1)
  {
    printf("%ld-%ld %ld\n",num[d]/10000,num[d]%10000,l);
	l=1;
	p=1;
  }
  
		
}
if(p==0)
printf("No duplicates.\n");

}


}
int comp(const void *a,const void *b)
{
	long *x,*y;

	x=(long*)a;
	y=(long*)b;

	return(*x-*y);
}









