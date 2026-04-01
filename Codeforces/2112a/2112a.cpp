#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int a, x, y;
    cin >> a >> x >> y;

    int lg = min(x, y), rg = max(x, y);

    int l = abs(a - lg), r = abs(a - rg);
    for (int i = lg; i <= rg; ++i) {
        if (i == a) continue;
        if (abs(i - lg) < l && abs(i - rg) < r) {
            cout << "Yes" << en;
            return;
        }
    }
    cout << "No" << en;

    // if x < a < y cout << no << en;
    // else cout << yes << en;
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