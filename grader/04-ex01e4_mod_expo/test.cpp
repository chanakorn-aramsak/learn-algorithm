#include <bits/stdc++.h>

using namespace std;
int modexpo(int a, int n, int k)
{
    if (n == 1)
        return a % k;
    else if (n % 2 == 0)
    {
        int num = modexpo(a, n / 2, k);
        num = (num * num) % k;
        return num;
    }
    else
    {
        int num = modexpo(a, n / 2, k);
        num = (num * num) % k;
        return (num * (a % k)) % k;
    }
}
int main()
{
    int a, n, k;
    cin >> a >> n >> k;
    cout << modexpo(a, n, k);
    return 0;
}