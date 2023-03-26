#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int, int> m;
    int tmp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> tmp;
        m[tmp]++; 
    }
    int max_h = INT_MIN;
    for(auto &e:m){
        int h = e.second;
        max_h = max(h,max_h);
    }
    cout << max_h << ' ' << m.size();
    
    
    

}
