#include "bits/stdc++.h"

using namespace std;
void dfs(vector<int> graph[], int visited[], int node){
    visited[node] = 1;
    for (size_t i = 0; i < graph[node].size(); i++)
    {int neighbor = graph[node][i];
        if (!visited[neighbor] )
        
        dfs(graph, visited, neighbor);
    }
    
}
int main(){
    int v,e;
    cin >> v >> e;
    vector<int> graph[v+1];
    for (size_t i = 0; i < e; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int visited[v+1];
    memset(visited, 0, sizeof(visited));

    int ans = 0;
    for (size_t i = 1; i < v+1; i++)
    {
        if (!visited[i]){
            ans++;
            dfs(graph,visited,i);
        }
        

    }
    cout << ans << endl;
    
    
    return 0;
}