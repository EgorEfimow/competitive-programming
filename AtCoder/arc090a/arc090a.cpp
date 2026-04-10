#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<vector<int>> v(2, vector<int>(n));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            int q; cin >> q;
            v[i][j] = q;
        }
    }

    vector<vector<int>> dp(2, vector<int>(n, 0));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j] = max(dp[i][max(0, j - 1)] + v[i][j], dp[max(0, i - 1)][j] + v[i][j]);
        }
    }
    cout << dp[1][n - 1] << en;
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