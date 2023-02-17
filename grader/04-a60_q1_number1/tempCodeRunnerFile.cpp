#include "bits/stdc++.h"
using namespace std;
int r;
void make1(vector<int> &v, int n)
{
    if (v.size() < r)
    {
        int n1 = n / 2;
        int n2 = n % 2;
        int n3 = n1;
        // cout << "n1=" << n1 << "\nn2=" << n2 << '\n';
        if (n1 > 1)
        {
            make1(v, n1);
        }
        else
        {
            v.push_back(n1);
        }
        if (n2 > 1)
        {
            make1(v, n2);
        }
        else
        {
            v.push_back(n2);
        }

        if (n3 > 1)
        {
            make1(v, n3);
        }
        else
        {
            v.push_back(n3);
        }
        // if (n1<=1) {
        //     cout << n1 << ' ';
        // }
        // if (n2<=1) {
        //     cout << n2 << ' ';
        // }
    }
}

int main()
{
    int n, l;
    cin >> n >> l >> r;
    vector<int> v;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    make1(v, n);
    // for (auto &i : v)
    // {
    //     cout << i << ' ';
    // }
    // cout << endl;
    int cnt = 0;
    for (size_t i = l - 1; i < r; i++)
    {
        cnt += v[i];
    }
    cout << cnt;
}
