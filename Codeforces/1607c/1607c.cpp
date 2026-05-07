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
    int n; cin >> n;
    vll v(n);
    for (ll &e : v) cin >> e;

    sort(all(v));
    ll ans = v[0], accum = 0;

    for (int i = 1; i < n; ++i) {
        v[i] -= v[i - 1] + accum;
        accum += v[i - 1];
        ans = max(ans, v[i]);
    }
    cout << ans << en;
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