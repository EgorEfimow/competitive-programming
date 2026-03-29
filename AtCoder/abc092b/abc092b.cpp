#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, d, x;
    cin >> n >> d >> x;

    vector<int> a(n);
    for (int &e : a) cin >> e;

    int ans = 0;
    // O(n^2) but small constraints
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= d; j += a[i]) ans++;
    }
    // (d - 1) / a[i] + 1 // + 1 because we always eat at day 1 - O(n)
    cout << x + ans << en;
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