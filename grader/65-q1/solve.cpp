#include <bits/stdc++.h>
#define ll long long
using namespace std;

int val[2][2];

int solve(ll x, ll y, ll n) {
  if (n == 2) return val[y][x];

  ll m = n >> 1;

  int result = x < m ? solve(x % m, y % m, m) : solve(y % m, x % m, m); //สลับy,x คือ transpose
  return y < m ? result : -result;
}

int main() {
  int n, q;
  cin >> n >> q;
  cin >> val[0][0] >> val[0][1] >> val[1][0] >> val[1][1];
  while (q--) {
    ll x, y;
    cin >> y >> x;
    printf("%d\n", solve(x - 1, y - 1, 1LL << n));
  }
}

