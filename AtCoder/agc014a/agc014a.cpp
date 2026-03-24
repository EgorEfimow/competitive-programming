#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c && a % 2 == 0) cout << -1 << en;
    else {
        int ans = 0;
        while (!(a&1) && !(b&1) && !(c&1)) {
            ans++;
            a = a / 2; b = b / 2; c = c / 2;
            int tmp = a;
            a += b; b += c; c += tmp;
        }
        cout << ans << en;
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