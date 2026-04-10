#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    ll n; cin >> n;
    vector<ll> v(n + 1);
    for (ll &e : v) cin >> e;
    vector<ll> h(n);
    for (ll &e : h) cin >> e;

    ll ans = 0;
    for (ll i = 1; i < isz(v); ++i) {
        if (v[i - 1] <= h[i - 1]) {
            ans += v[i - 1];
            h[i - 1] -= v[i - 1];
            v[i - 1] = 0;
        }
        else {
            ans += h[i - 1];
            continue;
        }

        if (v[i] <= h[i - 1]){
            ans += v[i];
            h[i - 1] -= v[i];
            v[i] = 0;
        }
        else {
            ans += h[i - 1];
            v[i] -= h[i - 1];
        }
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