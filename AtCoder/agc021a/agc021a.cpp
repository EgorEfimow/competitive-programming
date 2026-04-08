#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    string n; cin >> n;

    auto sum = [](ll v) {
        ll s = 0;
        while (v) {
            s += v % 10;
            v /= 10;
        }
        return s;
    };

    ll ans = sum(stoll(n));
    ll f = (isz(n) - 1) * 9 + (n[0] - '1');
    if (isz(n) == 1) cout << n << en;
    else cout << max(ans, f) << en;

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