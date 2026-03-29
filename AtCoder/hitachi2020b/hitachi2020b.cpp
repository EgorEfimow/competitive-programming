#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll a, b, m;
    cin >> a >> b >> m;

    vector<ll> va(a);
    vector<ll> vb(b);

    ll am = 1e9, bm = 1e9;

    // need indexes so no sorting
    for (ll &e : va) {
        cin >> e;
        am = min(am, e);
    }
    for (ll &e : vb) {
        cin >> e;
        bm = min(bm, e);
    }

    ll ans = am + bm;

    for (ll i = 0; i < m; ++i) {
        ll x, y, c;
        cin >> x >> y >> c;
        ans = min(ans, va[x - 1] + vb[y - 1] - c);
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