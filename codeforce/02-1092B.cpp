#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n+2];
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array+n);
    
    int i = 0;
    int j = 1;
    int count = 0;
    while (j<n){
        count+= (array[j]-array[i]);
        j+=2;
        i+=2;
    }
    cout << count;
    

}
