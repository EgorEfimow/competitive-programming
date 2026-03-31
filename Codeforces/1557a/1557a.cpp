#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    vector<ll> q(n + 1);
    for (ll &e : v) cin >> e;

    sort(all(v));

    for (int i = 1; i < n + 1; ++i) q[i] = v[i - 1] + q[i - 1];

    double ans = -1e10;
    for (int i = 1; i < n; ++i) {
        ll cl = i, cr = n - i;
        ll sl = q[i], sr = q[isz(q) - 1] - q[i];
        ans = max(ans, (1.0 * sl * cr + 1.0 * sr * cl) / (cr * cl)); 
    }
    cout << fixed << setprecision(7) << ans << en; 
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