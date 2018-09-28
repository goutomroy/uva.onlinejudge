#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std; 
long long store[1000], c = 0;

long long  bi_searching(long long n)
{
    long long  beg = 0, end = c-1, mid;
    mid = (beg + end)/2;
    while(beg != mid)
    {
          if(store[mid] < n)
              beg = mid;
          else
              end = mid;
          mid = (beg + end) / 2;              
    }
    return (store[mid+1]);
}

int main()
{
    long long n, i, j, big, t;
    
    big = powl(2,31);
    
    for(i = 0; i <= 31; i++)
        for(j = 0; j <= 19; j++)
        {
              t = powl(2,i)*powl(3,j); 
              if(t <= big)
                  store[c++]=t;  
              else
                  break;   
        }
        
        stable_sort(store,store+c);
        
        while(cin >> n && n!=0 )
        {
            if(n==1)
                cout << "1" << endl;
            else
                cout << bi_searching(n) << endl;
        }
        
    return 0;
}
