#include "bits/stdc++.h"
using namespace std;

int main(){
    size_t n,m;
    cin >> n >> m;
    int diff[n+10];
    size_t sum = 0;
    size_t a,b;
    for (size_t i = 0; i < n; i++)
    {
        
        cin >> a>> b;
        diff[i] = (a-b);
        sum += a;
    }
    sort(diff,diff+n);
    size_t compressed =0 ;
    for (long long i = n - 1; i >= 0; i--)
    {
        
        if (sum<=m) break;
        compressed++;
        sum-=diff[i];

        
    }
    
    
    
    if (sum<=m)
        cout << compressed;
    else    
        cout << -1;
    

}
