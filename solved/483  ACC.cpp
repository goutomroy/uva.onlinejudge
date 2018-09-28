#include<stdio.h>
#include<string.h>
void main( )
{
char a[20000];
 long m[20000],z,k,i,len,j;
while(gets(a)!='\0')
{
	z=0;k=1;j=0;len=0;

len=strlen(a);
m[0]=0;

	for(i=0;i<len;i++)
	{
	if(a[i]==' ')
	{
	m[k++]=i;
	
	}
	}
	while(j<k)
	{
	if(j==(k-1))
	{
		m[j+1]=len;
}

while(m[j]<m[j+1])
{
z=m[j+1];
if(a[z-1] ==' ')
break;
printf("%c",a[z-1]);
m[j+1]--;
}
printf(" ");
j++;
}

printf("\n");
}
}



