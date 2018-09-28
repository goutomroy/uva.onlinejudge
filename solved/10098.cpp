#include<stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std ;

void main()
{
    int t,i,l;

	char a[1000000];

	typedef vector<char> StrVector ;

	typedef StrVector::iterator StrVectorIt ;

	scanf("%d",&t);		

	while(t--)
	{
		scanf(" %[^\n]s",a);

		l=strlen(a);

		StrVector Pattern(l) ;
		
		StrVectorIt start,end ;
		
		start=Pattern.begin() ; 	
		
		end=Pattern.end() ;  

		for(i=0;i<l;i++)	Pattern[i]=a[i];
		
		sort(start,end,less<char>()) ;
		
		for(i=0;i<l;i++)	printf("%c",Pattern[i]) ;	
		
		printf("\n") ;		
		
		while(next_permutation(start,end,less<char>()))
		{
			for(i=0;i<l;i++)	
				printf("%c",Pattern[i]) ;			
			
			printf("\n") ;				
		}

		printf("\n") ;
	}
}