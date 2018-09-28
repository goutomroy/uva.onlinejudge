#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define sz 150
char str[sz];
using namespace std;
bool is_a_solution(int a[], int k, int n)
{
        return (k == n);
}
int comp ( const void *a, const void *b )
{
	char *x, *y, c, d ;

	x = ( char * ) a ;
	y = ( char * ) b ;

	c = tolower (*x) ;
	d = tolower (*y) ;

	if ( c == d ) return ( *x - *y ) ;

	return ( c - d ) ;
}

int process_solution(int a[], int k)
{
        int i;                          /* counter */

        for (i=1; i<=k; i++) 
			printf("%c",str[a[i]-1]);

        printf("\n");

		return 0;
}

int construct_candidates(int a[], int k, int n, int c[])
{
        int i,t;                          /* counter */
        bool in_perm[sz],tag=1;              /* who is in the permutation? */

        for (i=1; i<=n; i++) 
			in_perm[i] = true;

        for (i=1; i<k; i++) 
			in_perm[ a[i] ] = false;

        t = 1;
		   
        for (i=1; i<=n; i++)
               if (in_perm[i] == true )	
			   {
				   if(t==1)
                       c[t++] = i;
				  else if(str[i-1]!=str[c[t-1]-1])/* Here deleting the repeted candidates. */	
                      c[t++] = i;  	
			   }
				   return t;
}

void backtrack(int a[], int k, int input)
{
        int c[sz];                   /* candidates for next position */
        int t;             /* next position candidate count */
        int i;                       /* counter */
c[0]=1;
        if (is_a_solution(a,k,input)) // is k == input
                process_solution(a,k);
        else
		{
                k = k+1;
                t=construct_candidates(a,k,input,c);
                for (i=1; i<t; i++)
				{							
                        a[k] = c[i];
                        backtrack(a,k,input);	
                }
        }
}

void generate_permutations(int n)
{
        int a[sz];                    /* solution vector */
        memset(a,0,sizeof(int)*sz);
        backtrack(a,0,n);

}

void main ()
{
	long cas,n;
	scanf("%ld",&cas);
	while(cas--)
	{
scanf(" %s",str);
n=strlen(str);
qsort(str,n,sizeof(char),comp);
generate_permutations (n) ;
	}
}
