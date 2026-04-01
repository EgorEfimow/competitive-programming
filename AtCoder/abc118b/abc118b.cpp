#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[30] = {};
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        for (int j = 0; j < k; ++j) {
            int v; cin >> v;
            arr[v - 1]++;
        }
    }
    int ans = 0;
    for (int &e : arr) {
        if (e == n) ans++;
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