
#include<stdio.h>
#include<string.h>

long total,part1,part2,sum[50],con,number,i,j;
char a[80000],*p='\0';
char b[36][12]={"negative","zero","one","two","three","four","five","six","seven",
				"eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen",
				"sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty",
				"fifty","sixty","seventy","eighty","ninety"};
long num[33]={-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90};

	void calculation(char c[])
	{
		if(!strcmp("negative",c) && con)
		{
			printf("-");
			con=0;
		}
		for(i=2;i<29;i++)
			if(!strcmp(b[i],c))
				part1=num[i];

		if(!strcmp(c,"hundred"))
		{
			total=part1*100;
			part1=0;
		}
		else if(!strcmp(c,"thousand"))
		{
			sum[j++]=total*1000;
			part1=total=0;
		}
		else if(!strcmp(c,"million"))
		{
			sum[j++]=total*1000000;
			total=part1=0;
		}
		total=total+part1;
	}

int main()
{
	while(gets(a))
	{
		if(!(strcmp("zero",a)))
		{
			printf("0\n");
			continue;
		}
		number=total=part1=j=0;
		con=1;
		p=strtok(a," \b\r\t");
		while(p)
		{
			calculation(p);
			p=strtok(NULL," \b\r\t"); 							
		}

		sum[j++]=total;
		for(i=0;i<j;i++)
			number+=sum[i];
		printf("%ld\n",number);
	}
	return 0;
}
