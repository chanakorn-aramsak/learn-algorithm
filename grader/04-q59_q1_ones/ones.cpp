#include "bits/stdc++.h"
using namespace std;
int ones[9];
int r;
void count_ones(int n, int left, int right)
{
    cout << "n=" << n << endl;
    if (n <= 11)
    {
       if ( n <= 6 )   r+=n;
        else    r += (13-n);
        return;
    }

    int m = left + (right - left) / 2;
    cout << ones[m] << "= current middle" << endl;
    
    if (abs(n / ones[m]) > 0 and n / ones[m + 1] == 0)
    {
        int num = ones[m];
        int c=0;
        while (num > 0)
        {
            c += 1;
            num /= 10;
        }
        r+=(c*(abs(n / ones[m])));
        cout << ones[m] << "= correct middle" << endl;
        count_ones(n % ones[m], left, m);
    }
    else if (abs(n / ones[m]) > 0 and abs(n / ones[m + 1]) > 0)
    {
        cout << ones[m] << " = call right" << endl;
        count_ones(n, m + 1, right);
    }
    else
    {
        cout << ones[m] << " = call left" << endl;
        count_ones(n, left, m - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int first = 1;
    for (size_t i = 0; i < 9; i++)
    {
        ones[i] = first;
        first *= 10;
        first += 1;
    }
    r = 0;
    count_ones(n, 0, 9);
    cout << r;
}
