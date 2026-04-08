#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;

    int ans = 1;
    for (int i = 1; i < 33; ++i) {
        for (int j = 2; j < 11; ++j) {
            if (pow(i, j) <= n)
                ans = max(ans, (int)pow(i, j));
            else break;
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