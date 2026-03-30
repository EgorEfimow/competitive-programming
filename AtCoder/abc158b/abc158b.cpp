#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll s = a + b;
    ll cnt = n / s; // how much full series we can put inside
    

    cout << cnt * a + min(n % s, a) << en;
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