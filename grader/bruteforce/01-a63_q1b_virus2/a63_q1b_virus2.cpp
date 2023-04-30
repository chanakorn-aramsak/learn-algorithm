#include "bits/stdc++.h"
using namespace std;

bool check_divoc(vector<int> array, int start, int stop){
    if (stop-start==2)return true;
    int count_left = 0, count_right = 0;
    int m = start + (stop-start)/2;
    for (size_t i = start; i < m; i++)
    {
        count_left+=array[i];
    }
    for (size_t i = m; i < stop; i++)
    {
        count_right+=array[i];
    }
    if (abs(count_left-count_right)<=1) return check_divoc(array,start,m) and check_divoc(array,m,stop);
    else return false;
    
    


}
int main()
{
    int n,k;
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n >> k;
    for (size_t i = 0; i < n; i++)
    {
        vector<int> v(pow(2,k));
        for (size_t i = 0; i < pow(2,k); i++)
        {
            cin >> v[i] ;
        }
        bool ans = true;
        if (check_divoc(v,0,v.size())){
            cout << "yes" << '\n';
        }else {
            cout << "no" << '\n';
        }
        
    }
    
}
