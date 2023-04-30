#include "bits/stdc++.h"
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int max_sum = -1;
    int s=0;
    for (size_t i = 0; i < n; i++)
    {   
        s+=array[i];
        
        if (s>max_sum){
            max_sum=s;
        }
        if (s<0){
            s=0;
            continue;
        }
    }
    cout << max_sum;
    
    

}
