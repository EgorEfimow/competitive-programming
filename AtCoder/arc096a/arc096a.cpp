#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int a, b, c, n, k;
    cin >> a >> b >> c >> n >> k;

    int ans = 0;

    if (2 * c > a + b) ans += a * n + b * k;
    else {
        int both = min(n, k);
        ans += both * c * 2;
        int remn = n - both, remk = k - both;

        ans += remn * a + remk * b;
    }

    int ab = 2 * c * max(k, n);
    
    cout << min(ans, ab) << en;
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