#include "bits/stdc++.h"

using namespace std;
void dfs(vector<vector<int>> &v, int i, int j){
    if (v[i][j] == 0 or i<0 or j<0 or i>=v.size() or j>=v[0].size())
    return;
    
}
int main(){
    int T;
    cin >> T;
    while (T--){
        int N, E;
        cin >> N >> E;
        vector<vector<int>> v(N, vector<int> (E));
        for(int i =0;i<E;i++){
            int s, e;
            cin >> s >> e;
            v[s][e] = 1;
        }
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < E; j++)
            {
                if (v[i][j]==1){

                }
            }
            
        }
        
    }
    return 0;
}