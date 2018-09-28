#include<stdio.h>
#include<string.h>
#define sz 50000
#define swap(a,b) a^=b^=a^=b
char result[sz];

int reverse(char x[])
{
	long len,i,j;
	len=strlen(x);
	j=len-1;
	for(i=0;i<len/2;i++,j--)
		swap(x[i],x[j]);
	return 0;
}
char tochar(long x)
{
	return(x+'0');
}
long toint(char x)
{
 	return(x-'0');
}


int substract(char x[],char y[])
{
	char tem[sz],tem2[sz];
	long len1,len2,len,rem;
	long i,j,k;
	strcpy(tem2,y);
	len2=strlen(tem2);
	reverse(tem2);
	len1=strlen(x);
	for(i=len2;i<len1;i++)
		tem2[i]='0';
	for(i=len1-1,j=0,k=0;i>=0;i--,j++)
	{
		rem=0;
		if(j>=0)
			rem=toint(tem2[j]);
		if(rem>toint(x[i]))
		{
			tem[k++]=tochar(10+toint(x[i])-rem);
			tem2[j+1]=tem2[j+1]+1;
		}
		else
			tem[k++]=tochar(toint(x[i])-rem);
	}
	tem[k]='\0';
	len=strlen(tem);
	for(i=len-1;tem[i]=='0';i--)
		tem[i]='\0';
	reverse(tem);
	strcpy(result,tem);
	return 0;
}

int check(char x[], char y[])
{
    int i, a, b;
    a = strlen(x);
    b = strlen(y);
    if( a > b)
        return 1;
    else if( b > a)
    return -1;
    if( a == b )
    {
        for( i = 0; i < a; i++ )
        {
             if(x[i]-48 > y[i]-48)
                 return 1;
             else if(x[i]-48 < y[i]-48)
                 return -1;
        }
    }
    return 0;
}

int main( )
{
	char a[sz],b[sz]; long cas, t;
	scanf("%ld",&cas);

	while(cas--)
	{
		scanf("%s%s",a,b);
		t= check(a, b);

		if(t == 0)
			printf("0\n");

		else if( t < 0 )
		{
			printf("-");
			substract(b, a);
			printf("%s\n",result);
		}

		else
		{
			substract(a, b);
			printf("%s\n",result);
		}
	}
	return 0;
}



