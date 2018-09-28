#include <stdio.h>
#include <math.h>

#define NMAX 10
#define MAXCANDIDATES 10

long max_sum ;

struct data
{
	int i, j, chess[10][10] ;
} ;

bool is_a_solution ( int k, int n )
{
        return ( k == n ) ;
}

void process_solution ( int a[], int k, data input )
{
        int i, sum ;                          /* counter */

        for ( i = 1, sum = 0; i <= k; i++ )
		{
			sum += input.chess[ a[i] ][i] ;
		}
		
		if ( sum > max_sum ) max_sum = sum ;
		return ;
}

void construct_candidates ( int a[], int k, int n, int c[], int *ncandidates )
{
        int i, j ;
		bool legal_move ;

		*ncandidates = 0 ;

		for ( i = 1; i <= n; i++ )
		{							  // j = row of sol_vectors
			legal_move = true ;		  // i = column for candidates
									  // a[j] = column of sol_vectors
			for ( j = 1; j < k; j++ ) // k = current_depth = candidate's_row
			{
				if ( abs ( k - j ) == abs ( i - a[j] ) ) legal_move = false ;
				if ( i == a[j] ) legal_move = false ;
			}
			if ( legal_move )
			{
				c[ (*ncandidates)++ ] = i ;
			}
		}
		return ;
}

void backtrack ( int a[], int k, int n, data input )
{
        int c[MAXCANDIDATES] ;        /* candidates for next position */
        int ncandidates ;             /* next position candidate count */
        int i ;                       /* counter */

        if ( is_a_solution ( k, n ) )

                process_solution ( a, k, input ) ;
        else
		{
                k = k + 1 ;
                construct_candidates ( a, k, n, c, &ncandidates ) ;

                for ( i = 0; i < ncandidates; i++ )
				{
                        a[k] = c[i] ;

                        backtrack ( a, k, n, input ) ;
                }
        }
		return ;
}

void solve_n_queens_problem ( int n, data input )
{
        int a[NMAX] ;                    /* solution vector */

        backtrack ( a, 0, n, input ) ;

		return ;
}

void main ()
{
	data input ;
	int i, j, T ;

	scanf ( "%d", &T ) ;

	while ( T-- )
	{
		for ( i = 1; i <= 8; i++ )
		{
			for ( j = 1; j <= 8; j++ )
			{
				scanf ( "%d", &input.chess[i][j] ) ;
			}
		}

		max_sum = 0 ;

		solve_n_queens_problem ( 8, input ) ;

		printf ( "%5ld\n", max_sum ) ;
	}
}
