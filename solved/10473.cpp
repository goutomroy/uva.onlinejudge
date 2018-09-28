#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
	long  num,val,len,i,j,l,tum;
char ch[100],ph[100],hex[100];

	while(scanf("%s",ch)==1)
{
		if(ch[0]=='-')
			break;
		else
		{
		num=0;
len=strlen(ch);
if(ch[0]=='0')
{
for(i=2,j=0;i<len;i++)
ph[j++]=ch[i];
ph[j]='\0';
sscanf(ph,"%X",&tum);
printf("%ld\n",tum);
}
else
{
for(i=0,l=len-1;i<len;i++,l--)
num=num+((ch[i]-'0')*pow(10,l));
sprintf(hex,"%X",num);
printf("0x%s\n",hex);
}
	}
	}
}


	
