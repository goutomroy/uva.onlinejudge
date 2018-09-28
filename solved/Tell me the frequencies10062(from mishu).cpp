//10062            
#include <stdio.h>
//#include <conio.h>


int main()
{

char c;
long a[97], cn1, cn2, temp, t1, loc[97], tag[97], start, tg=0;

//freopen("fin.txt", "r", stdin);
//freopen("f3.txt", "w", stdout);

again :

for( cn1=0;cn1<97; cn1++)
      {
       a[cn1]=0;
       tag[cn1]=0;
       loc[cn1]=-1;
      }

while(scanf("%c", &c)==1)
	{
	if((c>=32)&&(c<=127))
       a[c-32]++;

   else

      if((c=='\n')||(c=='\r'))
        {

        for( cn2=0; cn2<97; cn2++)                  //max2low
       		{
       		for( cn1=0, t1=-1, temp=0; cn1<97; cn1++)
          		{
          		if((temp<a[cn1])&&(tag[cn1]==0))
            		{
            		 //tag[cn1]=1;
            		 temp=a[cn1];
                   t1=cn1;
            		}
         		 }
         if(cn2!=0)
        		if(loc[cn2-1]!=t1)
         	   {
          		loc[cn2]=t1;
          		tag[t1]=1;
              // printf("loc=%ld\n", t1);
          		}
        		else
            	{
               start=cn2-2;
          		break;

               }


         else
             if(t1==-1)
              	{
             	start=0;
             	loc[cn2]=t1;
             	break;
               }
       		}
            if(tg==1)
            	printf("\n");
            tg=1;
      		for( cn2=start; 0<cn2+1; cn2--)            //print
         		{
          		if(loc[cn2]==-1)
             		break;
        		   else
            		if(a[loc[cn2]]>0)
             		  	printf("%ld %ld\n", loc[cn2]+32, a[loc[cn2]]);
                }

         //printf("\n");
         goto again;
        }

   }
//getch();
return 0;
}