#include "bits/stdc++.h"
using namespace std;

int u, v, w, p;
int val[2][2];
long long mt(long long r, long long c, long long sz)
{
    if (sz == 2) return val[r][c];
    int m = sz>>1; // = sz/2
    if (r<m and c<m)
        return mt(r%m,c%m,m);
    else if (r<m and c>=m)
        return mt(c%m, r%m, m);
    else if (r>=m and c<m)
        return -mt(r%m, c%m, m);
    else 
        return -mt(c%m, r%m, m);
    
}

int main()
{
    int n, m;
    cin >> n >> m;
    long long sz = 1 << n;
    cin >> u >> v >> w >> p;
    val[0][0] = u;
    val[0][1] = v;
    val[1][0] = w;
    val[1][1] = p;
    long long r, c;
    for (int i = 0; i < m; i++)
    {
        cin >> r >> c;
        // cout << "N=" << sz << endl;
        cout << mt(r-1, c-1, sz) << endl;
    }
    return 0;
}