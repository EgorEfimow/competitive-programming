#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    ll n, k; cin >> n >> k;

    vector<ll> v(n);
    for (ll &e : v) cin >> e;

    sort(all(v));

    ll ans = 1e10;
    for (int i = k - 1; i < isz(v); ++i) 
        ans = min(ans, v[i] - v[i - (k - 1)]);

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