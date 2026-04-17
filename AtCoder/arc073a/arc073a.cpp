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
    ll n, t; cin >> n >> t;
    vll v(n);

    for (ll &e : v) cin >> e;

    v.push_back(1e18);

    ll ans = 0;
    for (int i = 1; i < isz(v); ++i) {
        if (v[i] >= v[i - 1] + t) ans += t;
        else ans += v[i] - v[i - 1];
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