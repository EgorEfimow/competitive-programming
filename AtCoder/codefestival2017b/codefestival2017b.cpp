#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

// int brute(int i, vi &g) {
//     if (i == isz(g)) {
//         // for (int &e : g) cout << e << " ";
//         // cout << en;
//         int ans = 1;
//         for (int &e : g) ans *= e;
//         return (ans % 2) == 0;
//     }

//     int init = g[i];
//     int m = 0, l = 0, r = 0;
//     g[i] = init;
//     m += brute(i + 1, g);
//     g[i] = init - 1;
//     l += brute(i + 1, g);
//     g[i] = init + 1;
//     r += brute(i + 1, g);

//     g[i] = init;

//     return m + l + r;
// }

void solve() {
    int n; cin >> n;
    vi v(n);
    int total = 1, bad = 1;
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        total *= 3;
        if (q % 2 == 0) bad *= 2;
    }
    cout << total - bad << en;

    // auto q = brute(0, v);

    // total 3^n combinations
    // bad comb (only odd numbers) = 2^(amount of even)
    // so if we remove bad from all well get good (atleast one even number -> even product)

    // cout << q << en;
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