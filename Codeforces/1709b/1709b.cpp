#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    ll n, m; cin >> n >> m;

    vll v(n);
    vll pref(n);
    vll rpref(n + 1);
    for (ll &e : v) cin >> e;

    for (ll i = 1; i < n; ++i) {
        pref[i] = pref[i - 1] + max(0ll, v[i - 1] - v[i]);
    }

    for (ll i = n - 1; i > 0; i--) {
        rpref[i] = rpref[i + 1] + max(0ll, v[i] - v[i - 1]);
    }

    for (int i = 0; i < m; ++i) {
        ll s, t; cin >> s >> t;
        t--; s--;
        ll res = (s < t) ? (pref[t] - pref[s]) : (rpref[t + 1] - rpref[s + 1]);
        cout << res << en;
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