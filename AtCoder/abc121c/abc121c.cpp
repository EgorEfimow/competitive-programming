#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    ll n, m; cin >> n >> m;
    vector<pii> v(n);
    for (auto &[l, r] : v) cin >> l >> r;
    
    sort(all(v), [&](auto l, auto r) {
        return l.first < r.first;
    });

    ll ans = 0;
    for (int i = 0; i < n && m > 0; ++i) {
        if (m >= v[i].second)
            ans += 1ll* v[i].second * v[i].first;
        else 
            ans += 1ll* m * v[i].first;
        m -= v[i].second;
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