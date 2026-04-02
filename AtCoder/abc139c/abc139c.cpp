#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    int ans = 1, prev, curmax = 1;
    cin >> prev;

    for (int i = 0; i < n - 1; ++i) {
        int v; cin >> v;
        if (v <= prev) {
            curmax++;
            ans = max(ans, curmax);
        }
        else
            curmax = 1;
        prev = v;
    }
    cout << ans - 1 << en;
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