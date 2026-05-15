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
    ll a, b, c; cin >> a >> b >> c;

    if (c <= b) {
        cout << 2 * c + b - c << en;
        return;
    }
    ll ans = 2 * b;
    c -= b;
    ans += min(a, c); c -= min(a, c);
    if (c > 0) ans += 1;
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