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
    vll v(n); vll b(n);
    for (ll &e : v) cin >> e;
    for (ll &e : b) cin >> e;

    ll cnt = 0, mi = 1e9 + 1, pos = -1;
    for (int i = 0; i < n; ++i) {
        if (b[i] > v[i]) {
            cnt++;
            pos = i;
        }
        else mi = min(mi, v[i] - b[i]);
    }
    if (cnt == 0) cout << "yes" << en;
    else if (cnt == 1 && b[pos] - v[pos] <= mi) cout << "yes" << en;
    else cout << "no" << en;
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