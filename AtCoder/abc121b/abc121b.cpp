#include <bits/stdc++.h>
#include <numeric>
#include <vector>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    int ans = 0;
    for (int &elem : b) cin >> elem;
    for (int i = 0; i < n; ++i) {
        vector<int> a(m);
        for (int &elem : a) cin >> elem;
        int res = inner_product(b.begin(), b.end(), a.begin(), 0) + c;
        if (res > 0) ans++;
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