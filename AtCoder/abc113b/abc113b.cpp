#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    int t, a; cin >> t >> a;

    double d = 1e9;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int val; cin >> val;
        if (abs(a - (t - val * 0.006)) < d) {
            ans = i + 1;
            d = abs(a - (t - val * 0.006));
        }
    }
    cout << ans << en;
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