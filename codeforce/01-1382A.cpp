#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m,b;
        vector<int> v(1001,0);
        cin >> n>>m;
        int found = 0;
        for (size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[a]=1;
        }
        for (size_t i = 0; i < m; i++)
        {
            cin >> b;
            if (v[b]) //b in a
                found = b;
        }
        if (found){
            cout << "YES\n1 " << found << '\n';
        }else {
            cout << "NO\n";
        }
                
    }
}
