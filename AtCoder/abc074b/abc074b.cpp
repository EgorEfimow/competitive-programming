#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int &elem : v) cin >> elem;

    int ans = 0;

    for (int i = 0; i < n; ++i) ans += min(v[i], abs(k - v[i]));

    cout << ans * 2 << en;
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