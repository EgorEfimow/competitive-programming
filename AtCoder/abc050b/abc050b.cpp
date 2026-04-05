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

    int s = accumulate(all(v), 0);

    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int p, x; cin >> p >> x;

        cout << s - v[p - 1] + x << en;
    }
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