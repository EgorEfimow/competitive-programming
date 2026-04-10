#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int cnt = 0;
    for (int i = 0; i < 4; ++i) {
        int v; cin >> v;
        if (v == 1) cnt++;
    }
    if (cnt == 0) cout << 0 << en;
    else if (cnt < 4) cout << 1 << en;
    else cout << 2 << en;
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