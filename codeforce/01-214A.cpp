#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,m, ans=0;
    cin >> n >> m;
    for (size_t a = 0; a*a <= n; a++)
    {
       int b = n-a*a;
       if (b*b+a==m and b>=0){
        ans++;
       }
    }
    cout << ans;
    
    

}
