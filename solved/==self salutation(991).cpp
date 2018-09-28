#include<stdio.h>
void main( )
{
	int c[ ]={1,1,2,5,14,42,132,429,1430,4862,16796},n;
	int tag=1;
	while(scanf("%d",&n)==1){
	if(tag!=1)
		printf("\n");
	tag=2;

	printf("%d\n",c[n]);
	}
}

