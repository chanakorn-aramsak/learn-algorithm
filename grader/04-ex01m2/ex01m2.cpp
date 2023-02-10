#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, ans=0 ;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            if (v[i]>v[j]) ans++;
        }
        
    }
    cout << ans;
    
    

}
