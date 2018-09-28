#include<stdio.h>

void  main()
{	
	char c[110][110], dumy, ch;

	int i, j, m, n, add;	
	long x;

		 for(x=1;scanf("%d%c%d",&n,&ch,&m)==3;x++)
		 {
			 scanf("%c",&ch);

				 if(m==0&&n==0) break;
				 
				 for(i=0;i<n;i++)
				 {
					 for(j=0;j<m;j++)
					 {
						 scanf("%c",&dumy);
						 
						 c[i][j]=dumy;
						 
					 }
					 
					 scanf("%c",&ch);
				 }						

				 printf("Field #%ld:\n",x);
					 
				 for(i=0;i<n;i++)
				 {
					 for(j=0;j<m;j++)
					 {
						 if(c[i][j]=='*')		printf("*");

						 add = 0;
						 
						 if(c[i][j]=='.')
						 {   
							 if(j==0 && i!=0)
							 {
								 if(c[i][j+1] =='*' && j+1 != m )  add++;

								 if(c[i+1][j+1] =='*' && j+1 != m && i+1!=n )  add++;

								 if(c[i+1][j] =='*' && i+1!=n )  add++;

								 if(c[i-1][j] =='*')  add++;

								 if(c[i-1][j+1] =='*'&& j+1 != m )  add++;
							 }


							 else if(i==0 && j!=0)
							 {
								 if(c[i][j-1]=='*')		add++;

								 if(c[i][j+1]=='*'&& j+1 != m )		add++;

								 if(c[i+1][j]=='*' && i+1!=n )		add++;

								 if(c[i+1][j+1] =='*'&& j+1 != m && i+1!=n  )  add++;

								 if(c[i+1][j-1] =='*' && i+1!=n )  add++;
							 }

							 else if(i==0 && j==0)
							 {
								 if(c[i][j+1] =='*'&& j+1 != m )  add++;

								 if(c[i+1][j] =='*' && i+1!=n )  add++;

								 if(c[i+1][j+1] =='*' && j+1 != m && i+1!=n )  add++;
								  
							 }

							 else if(i!=0 && j!=0)
							 {
								 if(c[i][j+1] =='*'&& j+1 != m )  add++;

								 if(c[i][j-1] =='*')  add++;

								 if(c[i-1][j] =='*')  add++;

								 if(c[i+1][j] =='*' && i+1!=n )  add++;

								 if(c[i+1][j+1] =='*'&& j+1 != m && i+1!=n )  add++;

								 if(c[i+1][j-1] =='*' && i+1!=n )  add++;

								 if(c[i-1][j+1] =='*'&& j+1 != m )  add++;

								 if(c[i-1][j-1] =='*')  add++;
							 }

							 printf("%d",add);
						 }
					 }	
					printf("\n");

				 }	
				 printf("\n");
		 }	
}
