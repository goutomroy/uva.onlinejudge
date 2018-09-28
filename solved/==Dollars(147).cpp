
#include <stdio.h> 
long long  ways[40001];
void main()
{ 
      
   long i,j,result; 
   long double value;
   const long  coin[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
   ways[0] = 1; 
    for (i=0;i<11;i++) 
        for (j=coin[i];j<=30001;j++) 
            ways[j] += ways[j - coin[i]]; 

    while (scanf("%Lf",&value)==1 && value!=0) 
	{
		result=(long)((value*100)+0.5);
        printf("%6.2Lf%17lld\n",value,ways[result]);
	}
        
     
   
} 















		