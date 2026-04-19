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
    int n, k; cin >> n >> k;

    vi p(n);
    for (int &e : p) cin >> e;

    vector<ll> v(n + 1, 0);

    for (int i = 1; i < n + 1; ++i) {
        v[i] += (p[i - 1] + 1) + v[i - 1];
    }

    ll ans = 0;
    for (int i = 1; i < isz(v) - k + 1; ++i) {
        ans = max(ans, v[i + k - 1] - v[i - 1]);
    }
    cout << fixed << setprecision(15) << ans / 2.0 << en;
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