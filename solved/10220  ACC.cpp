#include<stdio.h>
int b[12000];
int fact(int y,int len);
int main( )
{
int n,len,y,l,sum;
while(scanf("%d",&n)==1)
	{
b[0]=2;
y=3;
len=1;sum=0;
while(y<=n)
	{
	len=fact(y,len);
	y++;
	}
for(l=0;l<len;l++)
sum=sum+b[l];
printf("%d",sum);
printf("\n");
}
return 0;
}


int fact(int y,int len)
{
int x[12000],carry=0,m,i,j=0,k;
                  
for(i=len-1;i>=0;i--)
{

m=(b[i]*y)+carry;
x[j++]=m%10;
carry=m/10;

}


while(carry!=0)
{
x[j++]=(carry%10);
carry=carry/10;
}

for(i=0,k=j-1;(k>=0 && i<=j-1);k--,i++)
b[i]=x[k];

return j;

}


