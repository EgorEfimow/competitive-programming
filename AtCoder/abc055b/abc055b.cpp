#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

ll MOD = 1e9 + 7;

void solve() {
    ll n; cin >> n;

    ll fac = 1;

    for (ll i = 1; i <= n; ++i) {
        fac = (fac * i) % MOD;
    }

    cout << fac << en;
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