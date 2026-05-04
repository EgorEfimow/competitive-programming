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
    ll n, s; cin >> n >> s;
    vll v(n);

    for (ll &e : v) cin >> e;

    int left = 0;
    ll ans = 0ll, q = 0ll;
    for (int r = 0; r < n; ++r) {
        q += v[r];
        while (q > s) {
            q -= v[left];
            left++;
        }
        ans = max(ans, r - left + 1ll);
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