#include "bits/stdc++.h"
using namespace std;

int main(){
    int mn=INT_MAX, mx=INT_MIN;
    int n, tmp;
    cin >> n;
    int cnt=0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> tmp;
        if (i==0) {
            mn = tmp;
            mx = tmp;
            continue;
        }
        if (tmp<mn){
            cnt++;
            mn = tmp;
        }
        if (tmp>mx){
            cnt++;
            mx=tmp;
        }
    }
    cout << cnt;

}
