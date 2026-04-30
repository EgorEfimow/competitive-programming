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
    // minimize max OR maximize min
    int n; cin >> n;
    vll v(n);

    for (ll &e : v) cin >> e;

    sort(all(v));

    ll res = 1e18;

    // remove min
    res = min(res, v.back() - v[1]);
    // remove max
    res = min(res, v[isz(v) - 2] - v[0]);

    cout << res << en;
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