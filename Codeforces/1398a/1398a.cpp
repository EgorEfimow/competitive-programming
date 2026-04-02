#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (int &e : v) cin >> e;

    int s = v[0] + v[1];

    auto it = lower_bound(all(v), s);

    if (it != v.end()) cout << 1 << " " << 2 << " " << it - v.begin() + 1<< en;
    else cout << -1 << en;
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