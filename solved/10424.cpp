 #include<stdio.h>
#include<string.h>
#include<ctype.h>
void main( )
{
char a[30],b[30];
long i,len,ten,c,j,sum,tum;
long double k,d,p;
while(1)
{
	gets(a);
	if(feof(stdin))
	break;
gets(b);
len=strlen(a);
ten=strlen(b);
for(i=0,c=0;i<len;i++)
{
	if(isalpha(a[i]))
	{
if(a[i]>='A' && a[i]<='Z')
a[c++]=tolower(a[i]);
else
a[c++]=a[i];
	}
}

len=c;
for(i=0,j=0;i<ten;i++)
{
	if(isalpha(b[i]))
	{
if(b[i]>='A' && b[i]<='Z')
b[j++]=tolower(b[i]);
else
b[j++]=b[i];
	}
}
ten=j;
sum=tum=0;
for(i=0;i<len;i++)
{
d=a[i];
sum=sum+(d-96);
}

while(1)
{
d=0;
while(sum!=0)
{
d=d+(sum%10);
sum=sum/10;
}
sum=d;
if(d<10)
break;
}
for(i=0;i<ten;i++)
{
p=b[i];
tum=tum+(p-96);
}

while(1)
{
p=0;
while(tum!=0)
{
p=p+(tum%10);
tum=tum/10;
}
tum=p;
if(p<10)
break;
}
if(p>d)
{
k=(d/p)*100;
printf("%.2Lf %\n",k);
}
else
{
k=(p/d)*100;
printf("%.2Lf %\n",k);
}
}
}

