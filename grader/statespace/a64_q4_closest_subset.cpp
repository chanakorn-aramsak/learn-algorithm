#include "bits/stdc++.h"
using namespace std;
int find_sum(int a[], int n){
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
    
}
int gen(int a[], int n, int k, int len, vector<int> &ans){
    if (len==n){
        ans.push_back(find_sum(a,n)) ;
    }else{
        a[len]
        gen(a,n,k,len+1,ans);

    }
}
int main(){
    int n,m,k;
    cin >> n >> m>> k;
    int a[n];
    int i =0;
    while (n--){
        cin >> a[i++];
    }
}
