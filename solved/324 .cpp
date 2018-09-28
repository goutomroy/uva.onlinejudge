#include<stdio.h>
int b[10000];
int fact(int y,int len);
int main( )
{
int n,len,y,l,s[15],q,i;
while(scanf("%d",&n)==1 && n!=0 )

{
	len=1;
	if(n==1)
b[0]=1;
	

	else
	{
b[0]=2;
y=3;
len=1;
while(y<=n)
{
len=fact(y,len);
y++;
}
	}
i=0;
while(i<=9)
{
q=0;
for(l=0;l<len;l++)
{
if(b[l]==i)
q++;
}
s[i]=q;
i++;
}
	
printf("%d! --\n    ",n);
for(l=0;l<=9;l++)
{
printf("(%d)    %3d     ",l,s[l]);
if(l==4)
printf("\n    ");
}

printf("\n");
}

return 0;
}


int fact(int y,int len)
{
int x[10000],carry=0,m,i,j=0,k;
                  
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

for(i=0,k=j-1;k>=0;k--)
b[i++]=x[k];


return i;

}


