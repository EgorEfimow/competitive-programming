#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int ans = 0;
    int l = 0, r = 0, thr = min(n, m);

    while (l < thr && r < m) {
        if (b[r] != a[l]) r++;
        else {
            r++; l++; ans++;
        }
    }
    cout << ans << en;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
