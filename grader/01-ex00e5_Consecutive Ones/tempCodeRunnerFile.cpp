#include <bits/stdc++.h>
using namespace std;
void consec1(vector<int> &v, int n, int k, int chosen, int len)
{
    if (len < n)

    {
        v[len] = 0;
        consec1(v, n, k, chosen, len + 1);
        if (chosen < k)
        {
            v[len] = 1;
            consec1(v, n, k, chosen + 1, len + 1);
        }
    }
    else
    {
        for (auto &e : v)
        {
            cout << e;
        }
        cout << '\n';
    }
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> array(n);
    consec1(array, n, k, 0, 0);

    return 0;
}
