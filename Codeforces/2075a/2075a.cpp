#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

// int slow(int n, int k) {
//     int ans = 0;
//     while (n > 0) {
//         if (n & 1) n -= k;
//         else n -= k - 1;
//         ans++;
//     }
//     return ans;
// }

void solve() {
    int n, k; cin >> n >> k;

    int ans = (n & 1) ? (1 + (n - 2) / (k - 1)) : ((n + k - 2) / (k - 1));

    // int sl = slow(n, k);

    // if (sl != ans) {
    //     cout << "assertion failed" << en;
    //     cout << "expected: " << sl << " got: " << ans << en;
    //     return;
    // }

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