#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define pii pair<int, int>

void solve() {
    int a, b, n, m; cin >> a >> b >> n >> m;

    if (b < a && (abs(b - a) > 1 || a % 2 == 0)) {
        cout << -1 << en;
        return;
    }
    // if a % 2 - a ^ 1 == a - 1
    // if a % 2 == 0 - a ^ 1 == a + 1
    // if (y < x) 
    // 1) if a is odd +1; ^1; +1; ^1; ...
    // 2) else ^1; +1; ^1; +1; ...
    // else always +1;
    if (b < a) {
        cout << m << en;
        return;
    }

    int ans = 0;
    if (m < n && a % 2) ans = (b - a + 1) / 2 * n + (b - a) / 2 * m;
    else if (m < n && a % 2 == 0) ans = (b - a + 1) / 2 * m + (b - a) / 2 * n;
    else ans = (b - a) * n;

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