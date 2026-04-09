#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    ll n; cin >> n;

    ll ans = 1e18;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i) continue;
        ans = min(ans, i - 1 + (n / i) - 1);
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