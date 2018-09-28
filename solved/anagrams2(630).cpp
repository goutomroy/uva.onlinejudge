#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char a[1200][50],str[50],ch[50];
long n,len,tag;

int search()
{
long i,t=1;

for(i=0;i<n;i++)
{
	if(len=strlen(a[i]))
	{
		strcpy(ch,a[i]);
		sort(&ch[0],&ch[len]);
		if(strcmp(str,ch)==0)
		{
       printf("%3ld) %s\n",t++,a[i]);
        tag=1;
		}
	}

}
return 0;
}

void main()
{
	long i,cas,k;
	char dum[50];
	scanf("%ld",&cas);

	for(k=1;k<=cas;k++)
	{
		
		scanf("%ld",&n);

		for(i=0;i<n;i++)
			scanf(" %s",a[i]);

		while(scanf(" %s",str)==1 && strcmp(str,"END"))
		{
			len=strlen(str);
			strcpy(dum,str);
			printf("Anagrams for: %s\n",str);
			sort(&str[0],&str[len]);
			tag=0;
				search();	
	
			if(tag==0)
				printf("No anagrams for: %s\n",dum);
		}
		if(k!=cas)
			printf("\n");
	}
}
				
				

	