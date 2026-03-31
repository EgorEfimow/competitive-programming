#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, m; 
    cin >> n >> m;

    int sl, sr, l, r;
    cin >> sl >> sr;

    for (int i = 0; i < m - 1; ++i) {
        cin >> l >> r;
        if (r < sl || l > sr) {
            cout << 0 << en;
            return;
        }
        sl = max(sl, l); 
        sr = min(sr, r);
    }

    cout << sr - sl + 1 << en;
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