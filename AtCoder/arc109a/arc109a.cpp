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
    int a, b, x, y; cin >> a >> b >> x >> y;

    if (a == b) {
        cout << x << en;
        return;
    }

    if (a - b == 1) {
        cout << x << en;
        return;
    }

    ll ans = 0;
    if (a % 2 != b % 2) {
        ans += min(y, 2 * x);
        a = (a < b) ? ++a : --a;
    }

    if (a > b) {
        if (y <= 2 * x) cout << ans + (a - b - 1) * y + x << en;
        else cout << ans + (2 * (a - b) - 1) * x << en;
    }
    else {
        if (y <= 2 * x) cout << ans + (b - a) * y + x << en;
        else cout << ans + (2 * (b - a) + 1) * x << en;
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