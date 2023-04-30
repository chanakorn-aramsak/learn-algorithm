#include "bits/stdc++.h"
using namespace std;
bool have_trpsum(int array[], int n, int value)
{
    for (size_t i = 0; i < n; i++)
    {
        int l = i+1;
        int r = n-1;
        while (l<r){
            if (value==array[i]+array[l]+array[r]) return true;
            else if (value<array[i]+array[l]+array[r]) {
                r--;
            }else {
                l++;
            }
        
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int q;
    while (m--)
    {
        cin >> q;
        cout << (have_trpsum(array,n,q)? "YES\n" : "NO\n");
    }
}
