#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
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

void construct_candidates(int a[], int k, int n, int c[], int *ncandidates)
{
        int i;                          /* counter */
        bool in_perm[sz],tag=1;              /* who is in the permutation? */

        for (i=1; i<=n; i++) 
			in_perm[i] = true;

        for (i=1; i<k; i++) 
			in_perm[ a[i] ] = false;

        *ncandidates = 0;
		   
        for (i=1; i<=n; i++)
               if (in_perm[i] == true )				   
					   c[ (*ncandidates )++] = i; 
				  
			   
}

void backtrack(int a[], int k, int input)
{
        int c[sz];                   /* candidates for next position */
        int ncandidates;             /* next position candidate count */
        int i;                       /* counter */

        if (is_a_solution(a,k,input)) // is k == input
                process_solution(a,k);
        else
		{
                k = k+1;
                construct_candidates(a,k,input,c,&ncandidates);
                for (i=0; i<ncandidates; i++)
				{		
					if(i==0)
					{
                        a[k] = c[i];
                        backtrack(a,k,input);	
					}
					else if(str[c[i]-1]!=str[c[i-1]-1])
					{
                        a[k] = c[i];
                        backtrack(a,k,input);	
					}
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
