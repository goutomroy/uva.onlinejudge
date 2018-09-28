#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define big 200000
#define sz 150

void main()
{
	long n,i,j,matrix[sz][sz],k,max;
	char ch[800],*ptr;
	while(scanf("%ld",&n)==1)
	{
		for(i=j=1;j<=n;j++,i++)
			matrix[i][j]=big;

		for(i=2;i<=n;i++)
			for(j=1;j<i;)
			{
				gets(ch);
				ptr=strtok(ch," ");
				while(ptr)
				{
					matrix[i][j]=matrix[j][i]= !strcmp(ptr,"x") ? big : atol(ptr);
					ptr=strtok(NULL," ");
					j++;
				}
			}

			for(k = 1; k <= n; k++)
            for(i = 1; i<=n; i++)
            for(j = 1; j <= n; j++)			
			matrix[i][j] = (matrix[i][j]>(matrix[i][k]+matrix[k][j]) ) ? matrix[i][k]+matrix[k][j] : matrix[i][j];

			max=0;
				for(i=2;i<=n;i++)
					if(matrix[i][1]>max)
						max=matrix[i][1];
			
				printf("%ld\n",max);
			}
	}
