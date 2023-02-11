#include "bits/stdc++.h"
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int array[n];
    memset(array,0,n*sizeof(int));
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int max_sum = -1;
    int s;
    for (size_t i = 0; i < n; i++)
    {   
        s+=array[i];
        if (s<0){
            s=0;
            continue;
        }
        if (s>max_sum){
            max_sum=s;
        }
    }
    cout << max_sum;
    
    

}
