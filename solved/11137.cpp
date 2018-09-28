
#include <stdio.h>
#include<math.h>
long long  ways[10200],coin[50];
void main()
{ 
      
   long long i,j; 
   long long value;
  for(i=1,j=0;i<=21;i++)
	  coin[j++]=pow(i,3);
   ways[0] = 1; 
    for (i=0;i<21;i++) 
        for (j=coin[i];j<=10004;j++) 
            ways[j] += ways[j - coin[i]]; 

    while (scanf("%lld",&value)==1) 
        printf("%lld\n",ways[value]);
	
        
     
   
} 















		