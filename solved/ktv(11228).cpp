#include<stdio.h>
#include<string.h>
bool flag[10];
int main()
{
	long a[1005][10],i,j,k,n,c,max,sum,p,cas=0;
	while(scanf("%ld",&n)==1 && n)
	{
		cas++;
		max=0;
		for(i=0;i<n;i++)
			for(j=0;j<4;j++)
				scanf("%ld",&a[i][j]);
			memset(flag,0,10);
			for(i=0;i<n;i++)
			{
				flag[a[i][0]]=1;
				flag[a[i][1]]=1;
				flag[a[i][2]]=1;
			for(j=i+1;j<n;j++)
			{
				for(c=p=0;c<3;c++)
				{
					if(a[j][c]==a[i][0] || a[j][c]==a[i][1] || a[j][c]==a[i][2])
					{
						p=1;
						break;
					}
					else
						flag[a[j][c]]=1;
				}
				if(p==1)
				{
					for(c=0;c<3;c++)
						flag[a[j][c]]=0;
					continue;
				}
			
			for(k=j+1;k<n;k++)
			{
				for(c=p=0;c<3;c++)
				{
if(a[k][c]==a[j][0] || a[k][c]==a[j][1] || a[k][c]==a[j][2] || a[k][c]==a[i][0] || a[k][c]==a[i][1] || a[k][c]==a[i][2])
					{
						p=1;
						break;
					}
					else
						flag[a[k][c]]=1;
				}
				if(p==1)
				{
					for(c=0;c<3;c++)
						flag[a[k][c]]=0;
					continue;
				}
				else
				{
					sum=a[i][3]+a[j][3]+a[k][3];
					if(sum>max)
						max=sum;
				}
			}
			}
			}
			if(max!=0)
			printf("Case %ld: %ld\n",cas,max);
			else
				printf("Case %ld: -1\n",cas);
	}
	return 0;
}






