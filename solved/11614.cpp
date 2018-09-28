#include<iostream.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long long n, cas, sq;
    cin >> cas;
    while(cas--)
    {
        cin >> n;
        sq = sqrtl(1+8*n) - 1;
        cout << sq/2 << endl;
    }
    return 0;
}
