#include<iostream.h>
#define sz 15

char s[sz][sz]; 
int n;

bool check(int x, int y, char ch)
{
    int i, j;
    if(s[x-1][y] != ch && s[x][y-1] != ch && s[x+1][y] != ch && s[x][y+1] != ch )
        return 1;
    return 0;
}

void show()
{
     int i, j, k;
     for( i = 1; i <= n; i++ )
     {
          for( j = 1; j <= n; j++ )
          {
               if( s[i][j] != '.' )
               {
                   cout << s[i][j] ; 
                   continue;
               }
               for( k = 0; k < 26; k++)
                   if(check(i, j, k+'A'))
                   {
                       s[i][j] = k+'A'; 
                       cout << s[i][j];
                       break;     
                   }
          }
          cout << endl;
     }
}

int main()
{
    int cas, i, k;
    cin >> cas;
    for(k = 1; k <= cas; k++)
    {
         cin >> n;
         for( i = 1; i <= n; i++ )
             cin >> s[i]+1;
         for( i = 0; i <= n+1; i++ )
             s[0][i] = s[i][0] = s[i][n+1] = s[n+1][i] = '0' ;
             cout << "Case " << k << ":" << endl;
         show();     
    }
    return 0;
}
