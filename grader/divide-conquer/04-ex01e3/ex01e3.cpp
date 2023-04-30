#include "bits/stdc++.h"
using namespace std;

int bs_n(vector<int> &v, int start, int stop, int k)
{
    if (start > stop)
    {
        return stop < 0 ? -1 : v[stop];
    }
    int m = start + (stop - start) / 2;
    if (v[m] <= k)
        return bs_n(v, m + 1, stop, k);
    else
        return bs_n(v, start, m - 1, k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, tmp, i = 0;
    cin >> n >> m;
    vector<int> v(n);
    while (n--)
    {
        cin >> tmp;
        v[i++] = tmp;
    }
    int q;
    while (m--)
    {
        cin >> q;
        cout << bs_n(v, 0, v.size() - 1, q) << '\n';
    }
    return 0;
}