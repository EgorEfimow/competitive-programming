#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int s;
    cin >> s;

    int ans = 0;
    if (s == 1 || s == 2) {
        cout << 4 << en;
        return;
    }
    for (int i = 0; i < 1e7; ++i) {
        if (s == 4) {
            ans = i;
            break;
        }
        if (s & 1) s = 3*s + 1;
        else s /= 2;
    }
    cout << ans + 4 << en;
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