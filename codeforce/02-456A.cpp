#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool found = false;
    map<int, int> a;
    map<int ,int> b;
    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        a[ai] = i;
        b[bi] = i;
    }
    
    auto it1 = a.begin();
    auto it2 = b.begin();
    while (it1 != a.end())
    {   
        // cout << "IT="<<it1->first<<","<<it1->second <<" B="<< it2->second << endl;
        if (it1->second != it2->second)
        {
            found = true;
            break;
        }
        it1++;it2++;
    }

    if (!found)
        cout << "Poor Alex";
    else
        cout << "Happy Alex";
        

    return 0;
}
