#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    vll v(n);
    for (ll &e : v) cin >> e;

    vll p(n + 1);
    for (int i = 1; i < isz(p); ++i) {
        p[i] = p[i - 1] + v[i - 1];
    }

    ll ans = 1e18;
    for (int i = 1; i < isz(p) - 1; ++i) 
        ans = min(ans, abs((p.back() - p[i]) - p[i]));

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