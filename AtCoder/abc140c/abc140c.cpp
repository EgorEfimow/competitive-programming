#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<int> v(n - 1);
    for (int &e : v) cin >> e;

    int ans = 0;
    for (int i = 1; i < isz(v); ++i) {
        ans += min(v[i], v[i - 1]);
    }
    cout << ans + v[0] + v.back() << en;
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