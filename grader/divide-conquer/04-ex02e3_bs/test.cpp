#include "bits/stdc++.h"

using namespace std;
int binary_search(vector<int> &v, int start, int stop, int k){
    if (start > stop){
        return stop;
    }
    int m = start+(stop-start)/2;
    if (v[m] <= k) return binary_search(v,m+1,stop,k);
    else return binary_search(v,start,m-1,k);
}
int main(){
    int n,m, i=0,tmp;
    cin >> n>> m;
    vector<int> array(n);
    while (n--){
        cin >> tmp;
        array[i++]=tmp;        
    }
    int q;
    while (m--){
        cin >> q;
        cout << binary_search(array,0,array.size()-1,q) << '\n';
    }
}