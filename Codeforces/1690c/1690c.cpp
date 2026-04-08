#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    vector<int> f(n);
    vector<int> d(n);
    for (int &e : v) cin >> e;
    for (int &e : f) cin >> e;

    d[0] = f[0] - v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] <= f[i - 1]) d[i] = f[i] - f[i - 1];
        else d[i] = f[i] - v[i];
    }
    for (int &e : d) cout << e << " ";
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