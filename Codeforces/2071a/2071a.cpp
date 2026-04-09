#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

bool bs(int v) {
    ll l = 1, r = 1e9 + 1;
    while (l < r) {
        ll mid = (l + r) / 2;
        ll nv = 1 + 3 * (mid - 1);
        if (1 + 3 * (mid - 1) == v) return true;
        if (nv > v) 
            r = mid;
        else
            l = mid + 1;
    }
    return false;
}

void solve() {
    int n; cin >> n;

    // if (n % 3 == 1) yes; else no

    if (bs(n)) cout << "yes" << en;
    else cout << "no" << en;
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