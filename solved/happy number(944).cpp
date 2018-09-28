#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define swap(x,y) x^=y^=x^=y
struct goutom
{
	long fre, num;
}happy[15000];

bool mp[100000]; long check[100000], t=1;

int comp(void const *A, void const *B)
{

	goutom *a = (goutom*)A;
	goutom *b = (goutom*)B;

	if(a->num > b->num)
	   return 1;
	else if(a->num < b->num)
	   return -1;
	return 0;
}

int generate()
{
	mp[1]=1; happy[1].num=1; happy[1].fre=1;
	check[4]=-1; check[16]=-1; check[20]=-1; check[37]=-1;
	check[42]=-1; check[58]=-1; check[89]=-1; check[145]=-1; check[1]=1;

	long i, j, sum, temp[15000], num, c;

	for(i=2;i<=99999;i++)
	{
		sum=i;c=0;
		if(check[sum]==0)
		{
			while(sum!=1)
			{
				num=sum; sum=0;
			    temp[++c]=num;
				while(num!=0)
				{
					sum+=(num%10)*(num%10);
			        num=num/10;
				}
				if(check[sum] == -1)
				{
					for(j=1;j<=c;j++)
						check[temp[j]]=-1;
					break;
				}
				if(sum==1)
				{
					c++;
					for(j=1;j<c;j++)
					{
						check[temp[j]]=1;
						if(mp[temp[j]]==0)
						{
							mp[temp[j]]=1;
							happy[++t].num=temp[j];
							happy[t].fre=c-j+1;
						}
					}
					break;
				}
			}
		}
	}
	return 0;
}

int main()
{
	long lb, ub, i, tt=0;
	generate(); qsort(happy, t+1, sizeof(goutom), comp);
	//printf("%ld\n",maxm);
	while(scanf("%ld %ld",&lb,&ub)==2)
	{
		if(tt!=0)
			printf("\n"); tt++;
		if(lb==0 && ub==0)
			break;
		if(lb > ub)
			swap(lb,ub);
		for(i=1;i<=t;i++)
		{
			if(happy[i].num>ub)
				break;
			if(happy[i].num<=ub && happy[i].num>=lb)
				printf("%ld %ld\n",happy[i].num,happy[i].fre);
		}
			
	}
	return 0;
}
