#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all (x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll n, k;
    cin >> n >> k;

    cout << min(n % k, abs((n % k) - k)) << en;
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