#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    vector<pii> v;
    for (int i = 0; i < n; ++i) {
        int val; cin >> val;
        v.emplace_back(i + 1, val);
    }

    int cnt = 0;
    for (auto &e : v)
        if (e.second != e.first - cnt) cnt++;

    if (cnt == n) cout << -1 << en;
    else cout << cnt << en;
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