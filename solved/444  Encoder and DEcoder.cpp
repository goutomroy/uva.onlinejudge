#include<stdio.h>
#include<string.h>

int main( )
{
char a[30000];
int len,i,j,z,x[30000],y[30000],t;
while(gets(a)!='\0')
{
len=strlen(a);j=0;
if((a[0]<='9') && (a[0]>='0'))
{
for(i=len-1;i>=0;)
{
if(a[i]=='1')
{
a[i]^=a[i-2]^=a[i]^=a[i-2];
x[j++]=((a[i-2]-'0')*100)+((a[i-1]-'0')*10)+(a[i]-'0');
i=i-3;
}
else
{
a[i]^=a[i-1]^=a[i]^=a[i-1];
x[j++]=(a[i-1]-'0')*10+(a[i]-'0');
i=i-2;
}
}
for(i=0;i<j;i++)
printf("%c",x[i]);

}
else
{
	i=0;
for(j=len-1;j>=0;j--)
{
t=a[j];
	
 while(t!=0)
 {
 y[i++]=t%10;
 t=t/10;
 }
}
for(j=0;j<i;j++)
printf("%d",y[j]);
}
printf("\n");
}
return 0;
}



