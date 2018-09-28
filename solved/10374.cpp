#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sz 85

bool vote[10005];

typedef struct
{
	char name[sz],party[sz];
	long total;
}data;

data can[30];

int comp(void const *a,void const *b)
{
	data *x,*y;

	x=(data *)a;
	y=(data *)b;

	if(strcmp(x->name,y->name)>0)
		return 1;

	if(strcmp(x->name,y->name)<0)

		return -1;
	return 0;

}


long b_search(data a[],char str[],long left,long right)
{
	long mid;

	if(right<left)
		return -1;

	mid=(left+right)/2;

	if(strcmp(a[mid].name,str)==0)
		return mid;

	if(strcmp(a[mid].name,str)>0)
		return b_search(can,str,left,mid-1);

	if(strcmp(a[mid].name,str)<0)
		return b_search(can,str,mid+1,right);
}


void main()
{
	char str[sz];
	long test,i,j,line=0,total,cast,index,max,max_in,tie;

	scanf("%ld",&test);

	for(line=1;line<=test;line++)
	{
		scanf("%ld",&total);

		for(i=0;i<total;i++)
		{
			scanf(" %[^\n]s",can[i].name);
			scanf(" %[^\n]s",can[i].party);
			can[i].total=0;
		}

		qsort(can,total,sizeof(data),comp);
		
		scanf("%ld",&cast);
		max=0;
		max_in=0;
		tie=0;

		for(i=0;i<cast;i++)
		{
			scanf(" %[^\n]s",str);
			index=b_search(can,str,0,total);

			if(index>=0)
			{
				can[index].total++;

				if(can[index].total>=max)
				{
					
					max=can[index].total;
					max_in=index;
				}

			}
		}

		memset(vote,0,10002);

		for(i=0;i<total;i++)
		{
			if(!vote[can[i].total])
			{
				vote[can[i].total]=1;
			}
			else
				if(can[i].total==max)
				{
					tie=1;
					break;
				}
		}

		if(!tie)
			puts(can[max_in].party);
		else
			printf("%s\n","tie");

		if(line!=test)
			printf("\n");
	}
}