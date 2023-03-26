#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            if (w == 1) {
                cnt1++;
            } else {
                cnt2++;
            }
        }

        if ((cnt1+2*cnt2)%2==0){
            if (cnt1%2==0){
                cout << "YES\n";
            }else {
                if (cnt2%2==0){
                    cout << "NO\n";
                }else {
                    cout << ""
                }
            }
        
        }else {
            cout << "NO\n";
        }
    }

    return 0;
}
