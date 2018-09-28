#include <stdio.h> 
long ways[7500];
void main()
{ 
      
   long value,i,j; 
   const long coin[5] = {50,25,10,5,1};
   ways[0] = 1; 
    for (i=0;i<5;i++) 
        for (j=coin[i];j<=7500;j++) 
            ways[j] += ways[j - coin[i]]; 

    while (scanf("%ld",&value)==1) 
        printf("%ld\n",ways[value]) ;
        
     
   
} 
