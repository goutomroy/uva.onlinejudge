#include<stdio.h>
#include<string.h>
#define sz 500
char x[sz][sz],y[sz][sz],str[sz];
long pt=2,tt;
int add(char a[sz],char b[sz])
	{
	char result[sz];
	long i,j,t1,t2,carry,k,len,ten;
	carry=k=0;
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
	for(j=0,i=k-1;i>=0;i--)
	str[j++]=result[i];
	str[j]='\0';
	strcpy(y[tt++],str);
	
if(strlen(str)>=61)
	return 1;
return 0;
	}
void main( )
{
long i,j,p=0,you=0,k;
printf("1\n");
printf("1 1\n");
strcpy(x[1],"1");
strcpy(x[2],"1");
while(you!=1)
{
	tt=2;
for(i=1;i<pt;i++)
{	
	p=add(x[i],x[i+1]);
	if(p==1)
		you=1;
}
strcpy(x[1],"1");
strcpy(x[tt],"1");
for(k=2;k<tt;k++)
strcpy(x[k],y[k]);

for(k=1;k<=tt;k++)
{
printf("%s",x[k]);
if(k==tt)
printf("\n");
else
printf(" ");
}
pt=tt;
}

}