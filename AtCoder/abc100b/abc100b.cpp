#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int d, n; cin >> d >> n;
    if (d == 0) {
        if (n == 100) cout << 101 << en;
        else cout << n << en;
    }
    else if (d == 1) {
        if (n == 100) cout << 100 * 101 << en;
        else cout << n * 100 << en;
    }
    else {
        if (n == 100) cout << 100 * 100 * 101 << en;
        else cout << 100 * 100 * n << en;
    }
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