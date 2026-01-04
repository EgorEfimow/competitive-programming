#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'

void solve() {
    double ans = 0;
    vector<int> counts(100, 0);
    vector<int> sums(100, 0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        sums[a - 1] += b;
        counts[a - 1]++;
    }
    for (int i = 0; i < m; ++i) {
        ans = (1.0*sums[i]) / counts[i];
        cout << setprecision(16) << fixed << ans << en;
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