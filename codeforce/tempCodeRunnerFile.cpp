#include "bits/stdc++.h"
using namespace std;

int main()
{
    int na, nb;
    int k, m;
    cin >> na >> nb;
    cin >> k >> m;
    int a[na];
    int b[nb];
    for (size_t i = 0; i < na; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < nb; i++)
    {
        cin >> b[i];
    }
    bool found = false;
    for (size_t i = 0; i < k; i++)
    {
        if (a[i] > b[0])
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "NO";
    else
        cout << "YES";
}
