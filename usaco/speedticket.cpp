#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    int n, m; cin >> n >> m;
    vector<pii> r(n);
    vector<pii> s(m);
    for (auto &e : r) cin >> e.first >> e.second;
    for (auto &e : s) cin >> e.first >> e.second;

    int rs = 0, ss = 0, w = 0;
    for (int i = 0; i <= 100; ++i) {
        if (i > r[rs].first) {
            rs++;
            r[rs].first += r[rs - 1].first;
        }
        if (i > s[ss].first) {
            ss++;
            s[ss].first += s[ss - 1].first;
        }
        if (s[ss].second > r[rs].second) w = max(w, s[ss].second - r[rs].second);
    }
    cout << w << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.out", "w", stdout);
    freopen("speeding.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}