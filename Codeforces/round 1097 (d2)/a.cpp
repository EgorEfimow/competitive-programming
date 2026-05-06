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
    ll n; cin >> n;
    vll v(n);
    for (ll &e : v) cin >> e;

    ll ans = 0;
    for (ll i = n - 1; i > 0; --i) {
        if (v[i] < 0) continue;
        if (v[i - 1] + v[i] > 0) {
            v[i - 1] += v[i];
        }
    }

    for (ll &e : v) if (e > 0) ans++;
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