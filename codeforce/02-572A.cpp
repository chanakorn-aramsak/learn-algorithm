#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int na, nb;
    int k, m;
    cin >> na >> nb;
    cin >> k >> m;

    int a[na];
    int b[nb];

    for (size_t i = 0; i < na; i++) {
        cin >> a[i];
    }

    for (size_t i = 0; i < nb; i++) {
        cin >> b[i];
    }

    if (a[k-1] < b[nb-m]) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
