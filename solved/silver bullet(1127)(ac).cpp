#include<stdio.h>
#include<math.h>
#define err 1e-6

double a[105],b[105],che,m,nn;

void main()
{
	long cas,i,j,k,n,t,p,tag,max,count;	
	scanf("%ld",&cas);
	for(t=1;t<=cas;t++)
	{
		scanf("%ld",&n); 
		for(p=1,i=1;p<=n;p++)
		{
			scanf("%lf%lf",&m,&nn);
			tag=0;
			for(j=1;j<i;j++)
			{
				if(a[j]==m && b[j]==nn)
				{
					tag=1;
					break;
				}
			}
			if(tag==0)
			{
			a[i]=m;
			b[i++]=nn;
			}

		}
		n=i-1;max=0;
		for(i=1;i<=n;i++)
			for(j=i+1;j<=n;j++)
			{
				count=2;
				for(k=j+1;k<=n;k++)
				{
					che=(a[i]*(b[j]-b[k]))-(b[i]*(a[j]-a[k]))+(a[j]*b[k])-(b[j]*a[k]);
				//che=(double)((a[j]-a[i])*(b[k]-b[i])-(a[k]-a[i])*(b[j]-b[i]));
					if(fabs(che-0.0000)<err) //(p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
					count++;
				}
				if(count>max)
					max=count;
			}
					
					
				
				printf("Data set #%ld ",t);
				if(n==1)
					printf("contains a single gnu.\n");
				else
                printf("contains %ld gnus, out of which a maximum of %ld are aligned.\n",n,max);
}
}