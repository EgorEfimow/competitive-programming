#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

// void check(vi &p, vi &q) {
//     vi prefq(isz(q) + 1);
//     vi prefp(isz(q) + 1);
//     for (int i = 1; i < isz(prefq); ++i)
//         prefq[i] = prefq[i - 1] + q[i - 1];
//     for (int i = 1; i < isz(prefp); ++i)
//         prefp[i] = prefp[i - 1] + p[i - 1];

//     for (int i = 0; i < isz(p); ++i) {
//         for (int j = i; j < isz(p); ++j) {
//             int dp = prefp[j + 1] - prefp[i];
//             int dq = prefq[j + 1] - prefq[i];
//             if (dp == dq) {
//                 cout << i << " " << j << en;
//                 cout << dp << " " << dq << en;
//             }
//         }
//     }
// }

void solve() {
    int n; cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        if (v == n) cout << 1 << " ";
        else cout << (v + 1) % (n + 1) << " ";
    }
    cout << en;
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