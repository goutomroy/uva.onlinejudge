#include<stdio.h>
#include<string.h>

void allinall(char sub[1000000],char str[1000000])
  {
  unsigned long len_sub=0,len_str=0,sub_counter=0,str_counter=0;

  len_sub=strlen(sub);
  len_str=strlen(str);

    sub_counter=0;
  for(str_counter=0;sub_counter<len_sub&&str_counter<len_str;str_counter++)
	 if(sub[sub_counter]==str[str_counter])
		sub_counter++;

	if(len_sub==sub_counter)
	printf("Yes");
	else
	printf("No");

	printf("\n");

  }


 void main()
	{
 char str[1000000],sub[1000000];
 
while(scanf("%s%s",sub,str)==2)	
      allinall(sub,str);


	}
