#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>
#define vpii vector<pii>

const int SIZE = 2e5 + 1;
bool used[SIZE];

void solve() {
    fill(used, used + SIZE, false);
    
    int n; cin >> n;
    vi v(n + 1); 
    for (int i = 1; i < n + 1; ++i) 
        cin >> v[i];
    vi ans(n + 1);
    string colors; cin >> colors;
    colors = "#" + colors;

    auto dfs = [&](int idx) {
        int node_idx = idx, cnt = 0;
        vi idxs;
        while (!used[node_idx]) {
            idxs.pb(node_idx);
            if (colors[node_idx] == '0') cnt++;
            used[node_idx] = true;
            node_idx = v[node_idx];
        }
        for (int &e : idxs) ans[e] = cnt;
    };

    for (int i = 1; i <= n; ++i) {
        if (!used[i]) {
            dfs(i);
        }
    }

    for (int i = 1; i < isz(ans); ++i) 
        cout << ans[i] << " ";
    cout << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}