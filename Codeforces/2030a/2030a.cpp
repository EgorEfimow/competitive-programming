#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    int mx = 0, mn = 1e9;

    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        mx = max(mx, v);
        mn = min(mn, v);
    }
    cout << (mx - mn) * (n - 1) << en;
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