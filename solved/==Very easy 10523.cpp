#include<stdio.h>
#include<string.h>
#define sz 200

#define swap(a,b) a^=b^=a^=b

void reverse(char x[])
{
	long len,i,j;
	len=strlen(x);
	j=len-1;
	for(i=0;i<len/2;i++,j--)
		swap(x[i],x[j]);
}


long toint(char x)
{
	return(x-'0');
}

char tochar(long x)
{
	return(x+'0');
}

void add(char x[],char y[],char result[])
{
	long i,j,k,t1,t2,carry,len1,len2;
	char tem[sz];
	len1=strlen(x);
	len2=strlen(y);
	carry=k=0;
	for(i=len1-1,j=len2-1;i>=0||j>=0;i--,j--)
	{
		t1=t2=0;
		if(i>=0)
			t1=toint(x[i]);
		if(j>=0)
			t2=toint(y[j]);
		tem[k++]=tochar((t1+t2+carry)%10);
		carry=(t1+t2+carry)/10;
	}
	while(carry!=0)
	{
		tem[k++]=tochar(carry%10);
		carry/=10;
	}
	tem[k]='\0';
	reverse(tem);
	strcpy(result,tem);
}



void multiply_int(char a[],long x,char b[])
{
	long carry,m,len,i,j;
	len=strlen(a);
	carry=0;
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		m=toint(a[i])*x+carry;
		b[j]=tochar(m%10);
		carry=m/10;
	}
	while(carry>0)
	{
		b[j++]=tochar(carry%10);
		carry/=10;
	}
	b[j]='\0';
	reverse(b);
}

void multiply(char a[], char b[], char result[])
{
	long i,j,k,index,carry,mul,len1,len2;
	if (strcmp(a,"0")==0||strcmp(b,"0")==0)
	{
		strcpy(result,"0");
		return;
	}
	len1=strlen(a);
	len2=strlen(b);	
	j=len1+len2;
	for(i=0;i<j;i++)
		result[i]='0';
	index = -1;
	for(i=len2-1;i>-1;i--)
	{
		index++;
		carry=0;
		for(j=len1-1,k=index;j>-1;j--,k++)
		{
			mul=toint(a[j])*toint(b[i])+toint(result[k])+ carry;
			carry=mul/10;
			result[k]=tochar(mul%10);
		}
		result[k]=tochar(carry%10);
	}
	if(carry!=0)
		k++;  
	result[k]='\0';
	reverse(result);	
	return;
}




void main()
{
	long n,a,i;
	char A[sz],str[sz],b[sz],result[sz];
	
	while(scanf("%ld %ld",&n,&a)==2)
	{
		memset(A,0,sizeof(A));
		memset(str,0,sizeof(str));
		memset(b,0,sizeof(b));
		memset(result,0,sizeof(result));
		if(a==0||n==0)
		{
			printf("0\n");
			continue;
		}
		
		sprintf(A,"%ld",a);
		strcpy(str,A);
		strcpy(result,str);
		for(i=2; i<=n; i++)
		{
			multiply(str,A,b);
			strcpy(str,b);
			multiply_int(str,i,b);
			add(result,b,result);
		}
		printf("%s\n",result);
	}
}