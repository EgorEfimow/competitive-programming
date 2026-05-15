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
    ll n, k, cnt = 0, mi = 1e18, ma = -1e18; cin >> n >> k;
    vll a(n), b(n);
    for (ll &e : a) {
        cin >> e;
        mi = min(mi, e);
        ma = max(ma, e);
    }
    for (ll &e : b) {
        cin >> e;
        if (e == -1) cnt++;
    }
    if (cnt == n) {
        cout << k + mi - ma + 1 << en;
        return;
    }
    ll tmp = -1;
    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            tmp = b[i] + a[i];
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (tmp - a[i] < 0) {
            cout << 0 << en;
            return;
        }
        if (b[i] == -1) {
            b[i] = tmp - a[i];
        }
    }

    vll sumA(all(a));
    for (int i = 0; i < n; ++i) {
        sumA[i] += b[i];
    }
    set<ll> st(all(sumA));
    for (int i = 0; i < n; ++i) {
        if (a[i] > k || b[i] > k) {
            cout << 0 << en;
            return;
        }
    }
    if (isz(st) == 1) cout << 1 << en;
    else cout << 0 << en;
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