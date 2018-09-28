#include<stdio.h>
#include<string.h>


void main()
{
	char name[20][20],str[20], temp[20];
	long i,j,k,n,income[20],stock,gn;
	bool newline=false;

	while(scanf("%d",&n)==1)
	{
		if(newline)
			printf("\n");
		newline=true;
		for(i=0;i<n;i++)
		{
			memset(name[i],0,sizeof(name[i]));
			scanf("%s",name[i]);
			income[i]=0;
		}

		
		for(i=0;i<n;i++)
		{
			scanf("%s %ld %ld",&str,&stock,&gn);

			for(j=0;j<n;j++)
				if(strcmp(str,name[j])==0)
					break;

			if(gn)
				income[j] = income[j] - stock + stock%gn;

			for(k=0;k<gn;k++)
			{
				scanf("%s",&temp);

				for(j=0;j<n;j++)
					if(strcmp(temp,name[j])==0)
						break;	
				
				income[j] = income[j] + (stock / gn);
			}
		}

		for(i=0; i<n; i++)
			printf("%s %d\n", name[i], income[i]);
	}
}

