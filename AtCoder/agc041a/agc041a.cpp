#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    ll n, a, b; cin >> n >> a >> b;

    if ((a % 2) == (b % 2)) cout << abs(a - b) / (2*1ll) << en;
    else cout << min(a - 1, n - b) + 1 + (b - a) / (2*1ll) << en;
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