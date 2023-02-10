#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, h, g, ans;
    cin >> n;
    unordered_map<int, int> homes, guests;
    while (n--)
    {
        cin >> h >> g;
        ans += homes[g] + guests[h];
        homes[h]++;
        guests[g]++;
    }

    cout << ans;

    return 0;
}
