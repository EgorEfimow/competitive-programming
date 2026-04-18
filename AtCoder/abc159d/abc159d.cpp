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
    map<ll, ll> mp;
    vi v(n);
    for (int i = 0; i < n; ++i) {
        ll q; cin >> q;
        v[i] = q;
        mp[q]++;
    }

    ll ans = 0;
    for (auto &[k, val] : mp) {
        if (val >= 2) ans += val * (val - 1);
    }

    for (int i = 0; i < n; ++i) {
        ll a = ans;
        mp[v[i]]--;
        a = ans - 2 * mp[v[i]];
        cout << a / 2 << en;
        mp[v[i]]++;
    }
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