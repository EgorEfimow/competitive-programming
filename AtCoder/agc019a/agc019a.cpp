#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    ll q, h, s, d; 
    cin >> q >> h >> s >> d;
    ll n; cin >> n;

    ll qp = n * 4 * q;
    ll hp = n * 2 * h;
    ll sp = n * s;

    ll sd;
    if (n & 1) {
        sd = ((n - 1) * d) / 2;
        sd += min(4 * q, min(2 * h, s));
    }
    else sd = (n * d) / 2;

    cout << min(qp, min(hp, min(sp, sd))) << en;
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