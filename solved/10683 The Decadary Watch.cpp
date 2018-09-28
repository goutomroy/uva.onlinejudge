#include<stdio.h>

int main(void) 
{ 
   char line[20]; 
   long h, m, s, c, total, o_h, o_m, o_s, o_c  ; 
	double temp ;

   freopen("a.in","r",stdin); 

   while( scanf(" %s",line)==1 ) 
   { 
      h = m = s = c = 0 ; 

      h = h*10 + line[0]-'0'; h = h*10 + line[1]-'0' ; 

      m = m*10 + line[2]-'0'; m = m*10 + line[3]-'0' ; 

      s = s*10 + line[4]-'0'; s = s*10 + line[5]-'0' ; 

      c = c*10 + line[6]-'0'; c = c*10 + line[7]-'0' ; 

      total = (h*3600 + m*60 + s)*100 +c ; 

      o_h = total / 864000 ; 

      total = total % 864000 ; 

      o_m = total / 8640 ; 

      total = total % 8640 ; 

      o_s = total*10 / 864 ; 

      o_c = (total*10)%864 ; 

      o_c = o_c*100/864 ; 

      printf("%ld",o_h); 

      if( o_m<10) printf("0"); 
      printf("%ld",o_m); 

      if( o_s<10) printf("0"); 
      printf("%ld",o_s); 

      if(o_c<10) printf("0"); 
      printf("%ld\n",o_c); 

   } 
   return 0; 
}