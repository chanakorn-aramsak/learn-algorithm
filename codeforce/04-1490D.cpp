#include "bits/stdc++.h"
using namespace std;
void check_depth(int array[], int start, int stop, int d, int ans[])
{
    if (start <= stop)
    {
        int max_value = INT_MIN;
        int max_idx = 0;
        for (size_t i = start; i <= stop; i++)
        {
            if (array[i] > max_value)
            {
                max_idx = i;
                max_value = array[i];
            }
        }
        ans[max_idx] = d;
        // cout << "MAXVALUE="<<max_value <<" MAX_IDX=" << max_idx << endl;
        check_depth(array, start, max_idx - 1, d + 1, ans);
        check_depth(array, max_idx + 1, stop, d + 1, ans);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int array[n];
        int ans[n];
        memset(ans, 0, n * sizeof(int));
        for (size_t i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        check_depth(array, 0, n - 1, 0, ans);
        for (size_t i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}
