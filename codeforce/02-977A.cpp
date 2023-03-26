#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int array[n+10];
    array[0] = 1;
    for (size_t i = 1; i < n+1; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n +1 );
    
    cout << (array[k] != array[k+1] ? array[k] : -1);
}



