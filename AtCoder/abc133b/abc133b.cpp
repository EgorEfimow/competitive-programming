#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, d; cin >> n >> d;

    vector<vector<int>> vvi(n, vector<int>(d));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < d; ++j) {
            int v; cin >> v;
            vvi[i][j] = v;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int product = 0;
            for (int k = 0; k < d; ++k) {
                product += abs(vvi[i][k] - vvi[j][k]) * abs(vvi[i][k] - vvi[j][k]);
            }
            if ((int)sqrt(product) * (int)sqrt(product) == product) ans++;
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