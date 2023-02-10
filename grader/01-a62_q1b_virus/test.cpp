#include "bits/stdc++.h"
using namespace std;

bool is_DIVOC(vector<int> &v)
{
    if (v.size() == 2)
    {
        return v[0] == 0 and v[1] == 1;
    }
    vector<int> a(v.size() / 2), b(v.size() / 2);
    int a_i = 0;
    int b_i = (v.size() - 1) / 2 + 1;
    for (size_t i = 0; i < v.size() / 2; i++)
    {
        a[i] = v[a_i++];
        b[i] = v[b_i++];
    }
    bool ans1 = is_DIVOC(a) and is_DIVOC(b);
    reverse(a.begin(),a.end());
    bool ans2 = is_DIVOC(a) and is_DIVOC(b);
    return ans1 or ans2;

}

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(pow(2, k));
        for (int j = 0; j < int(pow(2, k)); j++)
        {
            int x;
            cin >> v[j];
        }
        if (is_DIVOC(v))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
