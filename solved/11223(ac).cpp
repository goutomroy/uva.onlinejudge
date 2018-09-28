
#include<stdio.h>
#include<string.h>
#define sz 2050

char code[55][10] = 
{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
,"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."
,".-.-.-","--..--","..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-...","---...","-.-.-.","-...-",".-.-.","-....-","..--.-",".-..-.",".--.-."};

char symbol[55][10] = 
{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"
,"0","1","2","3","4","5","6","7","8","9",".",",","?","'","!","/","(",")","&",":",";","=","+","-","_","\"","@"};

long search(char str[])
{
	long i;

	for(i=0;i<53;i++)
		if(strcmp(str,code[i])==0)
			return i;
}

int main()
{
	//freopen("d:\\input.txt","r",stdin);
	//freopen("d:\\output.txt","w",stdout);

	long i,test,cases,in,len,count,k;
	char str[sz],temp[20];

	scanf("%ld",&test);

	for(cases=1;cases<=test;cases++)
	{
		printf("Message #%ld\n",cases);

		scanf(" %[^\n]s",str);
		k = 0;
		count = 0;
		len = strlen(str);
		
		for(i=0;i<=len;i++)
		{
			if(str[i]==' ' || i==len)
			{
				count++;

				if( !k && i!=len)
				{
					printf(" ");
				}
				else
				{
					temp[k] = '\0';
					in = search(temp);
					printf("%s",symbol[in]);
					k = 0;
				}			
				
			}
			else
			{
				temp[k++] = str[i];
			}
		}

		printf("\n");

		if(cases!=test)
			printf("\n");

	}


	return 0;
}
***********************************************************
why wa!
#include<stdio.h>
#include<string.h>
char str[500][10];
int show( char a[])
{
	long i;
	for(i=0;i<300;i++)
		if(strcmp(a,str[i])==0)
		{
		printf("%c",i);
		return 0;
		}
		return 0;
}

void main()
{
	long i,cas,k,j,len,tag;
	char ph,a[2100],ch[2100];
strcpy(str['A'],".-");   strcpy(str['.'],".-.-.-");
strcpy(str['B'],"-..."); strcpy(str[','],"--..--");
strcpy(str['C'],"-.-."); strcpy(str['?'],"..--..");
strcpy(str['D'],"-..");  strcpy(str[96],".----.");
strcpy(str['E'],".");    strcpy(str['!'],"-.-.--");
strcpy(str['F'],"..-."); strcpy(str['/'],"-..-.");
strcpy(str['G'],"--."); strcpy(str['('],"-.--.");
strcpy(str['H'],"...."); strcpy(str[')'],"-.--.-");
strcpy(str['I'],"..");   strcpy(str['&'],".-...");
strcpy(str['J'],".---"); 
strcpy(str['K'],"-.-");  strcpy(str[':'],"---...");
strcpy(str['L'],".-.."); strcpy(str[';'],"-.-.-.");
strcpy(str['M'],"--");  strcpy(str['='],"-...-");
strcpy(str['N'],"-.");   strcpy(str['+'],".-.-.");
strcpy(str['O'],"---");strcpy(str['-'],"-....-");
strcpy(str['P'],".--.");strcpy(str['_'],"..--.-");
strcpy(str['Q'],"--.-");strcpy(str['"'],".-..-.");
strcpy(str['R'],".-.");  strcpy(str['@'],".--.-.");
strcpy(str['S'],"...");
strcpy(str['T'],"-");
strcpy(str['U'],"..-");
strcpy(str['V'],"...-");
strcpy(str['W'],".--");
strcpy(str['X'],"-..-");
strcpy(str['Y'],"-.--");
strcpy(str['Z'],"--..");

strcpy(str['0'],"-----");
strcpy(str['1'],".----");
strcpy(str['2'],"..---");
strcpy(str['3'],"...--");
strcpy(str['4'],"....-");
strcpy(str['5'],".....");
strcpy(str['6'],"-....");
strcpy(str['7'],"--...");
strcpy(str['8'],"---..");
strcpy(str['9'],"----.");
scanf("%ld",&cas);
scanf("%c",&ph);
for(k=1;k<=cas;k++)
{
	if(k!=1)
		printf("\n");
	printf("Message #%ld\n",k);
  gets(a);	
  
	len=strlen(a);
	strcpy(ch,"");
	for(i=j=0,tag=0;i<len;i++)
	{
		if(a[i]!=32)
		{
			ch[j++]=a[i];
			if(a[i+1]==32 || a[i+1]=='\0')
			{
				ch[j]='\0';
				show(ch);
				i++;
				tag=1;
				j=0;
			}
		}
		else
		{
			if(tag!=0)
				printf("e");
		}
		
	}	
	
	printf("\n");	
}
}

