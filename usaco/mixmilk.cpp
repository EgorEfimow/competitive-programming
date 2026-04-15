#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>

void solve() {
    vi v(3);
    vi cap(3);

    int iter = 100;

    for (int i = 0; i < 3; ++i) {
        int q, w; cin >> q >> w;
        v[i] = w; cap[i] = q;
    }

    for (int i = 0; i < iter; ++i) {
        if (v[i % 3] + v[(i + 1) % 3] > cap[(i + 1) % 3]) {
            v[i % 3] -= cap[(i + 1) % 3] - v[(i + 1) % 3];
            v[(i + 1) % 3] = cap[(i + 1) % 3];
        }
        else {
            v[(i + 1) % 3] += v[i % 3];
            v[i % 3] = 0;
        }
    }
    for (int &e : v) cout << e << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mixmilk.out", "w", stdout);
    freopen("mixmilk.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}