#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int &e : a) cin >> e;

    sort(all(a));

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= x && i != n - 1) {
            ans++;
            x -= a[i];
        }
        else if (i == n - 1 && x == a[i]) ans++;
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