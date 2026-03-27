#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll n, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for (ll &e : v) cin >> e;

    for (int i = 1; i < n; ++i)
        if (v[i] < v[i - 1]) {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
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