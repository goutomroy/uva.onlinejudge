#include <stdio.h>
#include <string.h>


#define MAX 1003

char X[MAX],Y[MAX];
long  i,j,m,n,c[MAX][MAX],b[MAX][MAX];



int LCSlength() {
  m=strlen(X);
  n=strlen(Y);

  for (i=1;i<=m;i++) c[i][0]=0;
  for (j=0;j<=n;j++) c[0][j]=0;

  for (i=1;i<=m;i++)
    for (j=1;j<=n;j++) {
      if (X[i-1]==Y[j-1]) {
        c[i][j]=c[i-1][j-1]+1;
        b[i][j]=1; 
      }
      else if (c[i-1][j]>=c[i][j-1]) {
        c[i][j]=c[i-1][j];
        b[i][j]=2;
      }
      else {
        c[i][j]=c[i][j-1];
        b[i][j]=3;
      } 
    }

  return c[m][n];
}


void main() 
{
	long result;
  while (1) 
  {
	 gets(X);
if(feof(stdin))
break;
	 gets(Y);
result=LCSlength();
    printf("%ld\n",result); 
  }
}

