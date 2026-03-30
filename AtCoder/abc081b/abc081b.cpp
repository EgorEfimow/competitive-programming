#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n;
    cin >> n;
    int m = 1e9;

    for (int i = 0; i < n; ++i) {
        int v; cin >> v;

        int ans = 0;
        while (v % 2 == 0) {
            ans++;
            v /= 2;
        }
        m = min(m, ans);
    }
    cout << m << en;
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