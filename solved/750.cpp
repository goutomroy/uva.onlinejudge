
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define sz 9

int rowno,column,count,test,t;

bool is_a_solution(int a[],int k,int n){
	return((k==n) && (a[column]==rowno));
}
void process_solution(int a[],int k,int n){
	int i;
	printf("\n%2d      ",++count);
	for(i=1;i<=k;i++)
		if(i!=k)
		printf("%d ",a[i]);
	else 
		printf("%d",a[i]);
		
}

void construct_candidates(int a[],int k,int n,int c[],int *ncandidates){
	int row,col;
	bool legal_move;
	*ncandidates=0;

	for(col=1;col<=n;col++){
		legal_move = true;
		for(row=1;row<k;row++){
			if(abs((k-row)==abs((col)-(a[row]))))
				legal_move= false;
			if(col==a[row])
				legal_move=false;
		}
		if(legal_move == true)
			c[ (*ncandidates)++]=col;
	}
}


void backtrack(int a[],int k,int n){
	int c [sz], ncandidates,i;
	if(is_a_solution(a,k,n))
		process_solution(a,k,n);
	else{
		k++;
		construct_candidates(a,k,n,c,&ncandidates);

		for(i=0;i<ncandidates;i++){
			a[k]=c[i];
			backtrack(a,k,n);
		}
	}
}


void main(){
	int a[20];
	char cop[7]="COLUMN",hash='#';
	
	while(scanf("%d",&test)==1){
		
		
		for(t=0;t<test;t++)	{
			count=0;
			scanf("%d %d",&rowno,&column);
			if(t!=0)
				printf("\n");
			printf("SOLN       %s\n%2c      1 2 3 4 5 6 7 8\n",cop,hash);
			a[0]=0;
			backtrack(a,0,8);
			if(t!=test-1)
				printf("\n");
		}
	}
}

