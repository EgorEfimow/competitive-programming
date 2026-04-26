#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    ll x, y; cin >> x >> y;
    ll s = x, d;
    ll ans = 0, cnt = 1; 
    for (int i = 1; i < abs(x - y) * 10; i *= 2, cnt++) {
        if (cnt % 2) d = x + i;
        else d = x - i;

        if (y >= min(d, s) && y <= max(d, s)) {
            ans += (i  % 2) ? abs(y - d) : abs(y - s);
            break;
        }
        else {
            ans += abs(d - s);
            s = d;
        }
    }
    cout << ans << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("lostcow.out", "w", stdout);
    // freopen("lostcow.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}