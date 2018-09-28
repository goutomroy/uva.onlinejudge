#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char a[8000],b[8000];
char x[]="ABCDE";
int num[]={58,59,60,61,62};

char temp1[5000],sort[5000];

void convert(char c[])
{
	int len=strlen(c);
	for(int i=0;i<len;i++)
		c[i]=toupper(c[i]);
}

     int sorting(const void *m,const void *n)
     {
		char *x,*y;
		x=(char*)m;
		y=(char*)n;
		return *y-*x;
     }

	 void reverse(char c[])
	 {
		 int len,mid,i;
		 char temp;

		 len=strlen(c);
		 mid=len/2;
		 for(i=0,len--;i<mid;i++,len--)
		 {
			 temp=c[i];
			 c[i]=c[len];
			 c[len]=temp;
		 }
	 }

	void base_add(int base)
    {
		int i,j,len,result,carry;

		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(!isdigit(a[i]))
			{
				for(j=0;j<5;j++)
				{
					if(a[i]==x[j])
					{
						a[i]=num[j];
						b[len-i-1]=num[j];
					}
				}
			}
		}
					 
		result=carry=0;
		for(i=0;i<len;i++)
		{
			result=(a[i]-48)+(b[i]-48)+carry;
			carry=result/base;
			a[i]=(result%base)+48;

			if(a[i]>57)
				for(j=0;j<5;j++)
					if(a[i]==num[j])
						a[i]=x[j];
		}
		if(carry)
			a[i++]=carry+48;
		a[i]='\0';
	}

int main()
{     
    int base,steps,collector[20],count,lenm,i;
	
	while(gets(a))
    {
		count=0;
        base=15;
		convert(a);
		strcpy(temp1,a);
		strcpy(sort,a);
		lenm=strlen(sort);
		qsort(sort,lenm,sizeof(char),sorting);
		while(1)
		{
			steps=0;
			while(steps<=100)
			{
				strcpy(b,a);
				reverse(b);               
				if(!strcmp(a,b))
					break;
				steps=steps+1;
				base_add(base);
			}

			if(steps<=100)
			{
				collector[count++]=steps;    
				base--;
				memset(a,0,1000);
				strcpy(a,temp1);

				if((sort[0]-48)<10)
				{
					if(!(sort[0]-48) && base<2)
						break;
					if(base == sort[0]-48)
						break;
				}
				else if((sort[0]-48)>9)
				{
						 if(sort[0]=='A' && base==10)break;
					else if(sort[0]=='B' && base==11)break;
					else if(sort[0]=='C' && base==12)break;
					else if(sort[0]=='D' && base==13)break;
					else if(sort[0]=='E' && base==14)break;
				}
			}
		}

		for(i=0;i<count;i++)
		{
			printf("%d",collector[i]);

			if(i!=13)
				printf(" ");
		}
			
		for(i=0;i<(14-count);i++)
		{
			printf("?");
			if(i<(14-count-1))
				printf(" ");
		}
		printf("\n");
	}
    return 0;
}
