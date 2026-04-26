#include <algorithm>
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
    ll n, m; cin >> n >> m;
    vll v(n);

    for (ll &e : v) cin >> e;

    ll mx = *max_element(all(v));

    for (int i = 0; i < m; ++i) {
        char sign; int l, r;
        cin >> sign >> l >> r;

        if (l <= mx && r >= mx) {
            if (sign == '+') mx++;
            else mx--;
        }

        cout << mx << " ";
    }
    cout << en;
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