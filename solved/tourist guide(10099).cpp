#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
#define sz 105
long matrix [sz][sz];

/*long  min ( long a, long b )
{
	if(a > b)
		return  b;
	return  a;
}*/


void main()
{
	char ch[]="goutom roy";
reverse(&ch[0],&ch[strlen(ch)]);

long c[]={1,1,2,2,3,4,4},*ptr,p;//arry c must be sorted	
	ptr=unique(&c[0],&c[7]);
	p=ptr-c;

	long noc,edge,i,j,k,cost,x,y,start,end,people,res,count,cas=1;
	while( scanf( "%ld %ld",&noc,&edge )== 2 && ( noc || edge ) ) //noc-> number of city
	{
count=0;
 memset( matrix, 0 , sizeof(long)* sz * sz);

for(i=1;i<=edge;i++)
{
scanf( " %ld %ld %ld ",&x, &y, &cost );
matrix[x][y] = matrix[y][x] = cost;
}
scanf("%ld %ld %ld",&start, &end,&people);

for(k = 1; k <= noc; k++)
for(i = 1; i<=noc; i++)
for(j = 1; j <= noc; j++)
matrix[i][j] = (matrix[i][j] > min(matrix[i][k],matrix[k][j]) ) ? matrix[i][j]:min(matrix[i][k],matrix[k][j]);

res=matrix[start][end];
//printf("%ld\n",res);
people++;
printf("Scenario #%ld\n",cas++);
while(1)
{
people=people-res;
count++;
if(people<=0)
{
printf("Minimum Number of Trips = %ld\n\n",count);
break;
}
people++;
}


	}
}
/*4 3
1 2 100
2 3 80
3 4 120
4 1 99
*/