#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int T[1005];

// Function that performs binary search(search equal)
ll bs(ll n, ll low, ll high, int T[], ll X){
    // Check if low and high meet, meaning that the desired value has been found
    if (low == high) return low;

    // Calculate the middle value of low and high
    ll m = low + (high-low)/2;
    ll q = n;
    
    // Calculate the number of tasks completed at time m
    for (size_t i = 0; i < n; i++) {
        q += m / T[i];
    }
    
    // If the number of completed tasks is less than or equal to the customer number, the answer is in the lower half of the search range
    if (X <= q) return bs(n, low, m, T, X);
    // If the number of completed tasks is greater than the customer number, the answer is in the upper half of the search range
    else return bs(n, m + 1, high, T, X);
}

int main(){
    // Read in the number of tasks and the number of customers
    ll n, a;
    cin >> n >> a;

    // Read in the time required for each task
    for (ll i = 0; i < n; i++) {
        cin >> T[i];
    }

    // For each customer, find the answer using binary search
    for (ll i = 0; i < a; i++) {
        ll c;
        cin >> c;
        cout << bs(n, 0, 1e16, T, c) << '\n';
    }
}
