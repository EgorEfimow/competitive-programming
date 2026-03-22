#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define en '\n'
#define ll long long 

void solve() {
    ll h, w;
    cin >> h >> w;
    if (h == 1 || w == 1) cout << 1 << en;
    else
        cout << (((h * w) % 2) ? (h * w) / 2 + 1 : (h * w) / 2) << en;
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