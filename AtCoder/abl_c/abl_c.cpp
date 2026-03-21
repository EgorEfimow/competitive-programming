#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void dfs(int node, vector<char> &vis, vector<vector<int>> &graph) {
    vis[node] = true;
    for (int i = 0; i < isz(graph[node]); ++i) {
        if (!vis[graph[node][i]])
            dfs(graph[node][i], vis, graph);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n, vector<int>());

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        g[a-1].push_back(b - 1);
        g[b-1].push_back(a - 1);
    }

    // have graph 
    // want to run dfs from every not visited node 
    int ans = 0;
    vector<char> visited(n);
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, visited, g);
            ans++;
        }
    }
    cout << ans - 1 << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}