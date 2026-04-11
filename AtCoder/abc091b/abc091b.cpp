#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        string q; cin >> q;
        mp[q]++;
    }
    int m; cin >> m;
    map<string, int> mp2;
    for (int i = 0; i < m; ++i) {
        string q; cin >> q;
        mp2[q]++;
    }
    int ans = 0;
    for (auto &[k, v] : mp) {
        ans = max(ans, v - mp2[k]);
    }
    cout << ans << en;
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