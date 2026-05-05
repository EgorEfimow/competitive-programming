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

    ll left = 0;

    ll sum = 0, ans = 1e18;
    for (ll right = 0; right < n; ++right) {
        sum += v[right];
        while (sum - v[left] >= s) {
            sum -= v[left];
            left++;
        }
        if (sum >= s)
            ans = min(ans, right - left + 1ll);
    }
    if (ans == 1e18) cout << -1 << en;
    else cout << ans << en;
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