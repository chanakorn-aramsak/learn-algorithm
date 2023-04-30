#include <bits/stdc++.h>
using namespace std;
bool check_consec(vector<int> &v, int k);
void print(vector<int> &v);
void consec1(vector<int> &v, int n, int k, int len)
{
    if (len < n)

    {
        v[len] = 0;
        consec1(v, n, k, len + 1);

        v[len] = 1;
        consec1(v, n, k, len + 1);
    }
    else
    {
        if (check_consec(v, k))
        {
            print(v);
        }
    }
}
void print(vector<int> &v)
{
    for (auto &e : v)
    {
        cout << e;
    }
    cout << '\n';
}
bool check_consec(vector<int> &v, int k)
{
    int count = 0;
    int max_count = 0;

    for (auto &e : v)
    {
        if (e == 1)
        {
            count++;
            max_count = max(count, max_count);
        }
        else
        {
            count = 0;
        }
    }
    return max_count >= k;
}
int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> array(n);
    consec1(array, n, k, 0);

    return 0;
}
