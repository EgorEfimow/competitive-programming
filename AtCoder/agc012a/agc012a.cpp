#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    ll n; cin >> n;
    vector<ll> v(3 * n);
    for (ll &e : v) cin >> e;

    sort(all(v));

    ll s = 0; 
    for (ll i = isz(v) - 2; i >= n; i -= 2) {
        s += v[i];
    }
    cout << s << en;
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