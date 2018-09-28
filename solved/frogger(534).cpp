#include<stdio.h>
#include<math.h>
#include<string.h>
#define sz 220

double matrix[sz][sz];

double distance(double p,double q,double r,double s)
{

double res;
res=sqrt(pow(fabs(p-r),2)+pow(fabs(q-s),2));
return res;

}
double max(double a,double b)
{
	if(a>b)
		return a;
	return b;
}

void main()
{
	
	double x[sz],y[sz],z[sz],ptr;
	long n,i,j,k,cas=1;
	while(scanf("%ld",&n)==1 && n)
	{

 memset(matrix,0,sizeof(double)*n*n);

for(i=1;i<=n;i++)
scanf("%lf%lf",&x[i],&y[i]);

for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
matrix[i][j]=matrix[j][i] = distance(x[i],y[i],x[j],y[j]);

for(k = 1; k <= n; k++)
for(i = 1; i<=n; i++)
for(j = 1; j <= n; j++)
matrix[i][j] = (matrix[i][j] < max(matrix[i][k],matrix[k][j])) ? matrix[i][j]:max(matrix[i][k],matrix[k][j]);

printf("Scenario #%ld\n",cas++);
printf("Frog Distance = %.3lf\n\n",matrix[1][2]);
	
	}
}
	