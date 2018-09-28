#include<iostream.h>
int main()
{
    long i, pre, c[14], r[14], k = 1, h = 0;
    while( cin >> pre && pre >= 0 )
    {
           for(i = 1; i <= 12; i++)
               cin >> c[i];
           for(i = 1; i <= 12; i++)
               cin >> r[i];
           h = pre;
           cout << "Case " << k <<":" << endl;
           for(i = 1; i <= 12; i++)
           {
                 if(h >= r[i])
                 {
                     cout << "No problem! :D" << endl;
                     h = h - r[i];
                 }
                 else
                     cout << "No problem. :(" << endl;
                 h += c[i];
           }
           k++;
    }
    return 0;
}
