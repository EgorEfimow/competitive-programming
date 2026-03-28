#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(m);

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        v[a - 1].first--; v[b - 1].second++;
    }

    for (int i = 0; i < m; ++i) {
        cout << v[i].second + v[i].first << en;
    }
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