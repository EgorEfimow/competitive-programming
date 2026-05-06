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

bool check(vll &h, vll &g, const ll radius) {
    int l = 0, r = 0;
    int sh = isz(h), st = isz(g);
    while (l < sh && r < st) {
        while (l < sh && h[l] >= g[r] - radius && h[l] <= g[r] + radius) {
            l++;
        }
        r++;
    }
    if (l == sh)
        return true;
    return false;
}

void solve() {
    ll n, m; cin >> n >> m;
    vll v(n); vll b(m);
    for (ll &e : v) cin >> e;
    for (ll &e : b) cin >> e;

    auto bs = [&]() {
        ll lo = -1, hi = 2e9;
        while (lo < hi - 1) {
            ll mi = (lo + hi) / 2;
            if (!check(v, b, mi)) {
                lo = mi;
            }
            else hi = mi;
        }
        return hi;
    };
    cout << bs() << en;
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