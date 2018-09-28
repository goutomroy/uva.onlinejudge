#include<stdio.h>
#include<string.h>

char line[100],part[100],temp[100],stor[100][100];
long len,c;

void reverse(char rev[])
{
	long lenr,mid,i;
	char tem;
	lenr=strlen(rev);
	mid=lenr/2;
	for(i=0,lenr=lenr-1;i<mid;i++,lenr--)
	{
		tem=rev[i];
		rev[i]=rev[lenr];
		rev[lenr]=tem;
	}
}

long cheq()
{
	long i;
	for(i=0;i<c-1;i++)
		if(!strcmp(part,stor[i]))
			return 0;

	strcpy(temp,part);

	reverse(temp);
	if(!strcmp(temp,part))
		return 1;
	return 0;
}

long Builder(long size)
{
	long i,j,sum=0;
	for(i=0,c=0;i<=len-size;i++)
	{
		for(j=0;j<size;j++)
			part[j]=line[j+i];
		part[j]='\0';

		strcpy(stor[c++],part);
		sum+=cheq();
	}	
	return sum; 
}

int main()
{
	long sum,i;
	while(scanf("%s",line)==1)
	{
		len=strlen(line);
		sum=0;
		for(i=1;i<=len;i++)
			sum+=Builder(i);
		if(line[0])
			printf("The string '%s' contains %ld palindromes.\n",line,sum);
	}
	return 0;
}
