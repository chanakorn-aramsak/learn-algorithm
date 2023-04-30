#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[], bool visited[], int node) {
    visited[node] = true;
    for(int i=0; i<graph[node].size(); i++) {
        int neighbor = graph[node][i];
        if(!visited[neighbor]) {
            dfs(graph, visited, neighbor);
        }
    }
}

int main() {
    int v, e;
    cin >> v >> e;

    vector<int> graph[v+1];

    for(int i=0; i<e; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bool visited[v+1];
    memset(visited, false, sizeof(visited));

    int count = 0;

    for(int i=1; i<=v; i++) {
        if(!visited[i]) {
            count++;
            dfs(graph, visited, i);
        }
    }

    cout << count << endl;

    return 0;
}
