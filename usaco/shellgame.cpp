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
    int n; cin >> n;

    vii v(n, vector<int>(3));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            int q; cin >> q;
            v[i][j] = q;
        }
    }

    int ans = 0;
    for (int init = 1; init <= 3; ++init) {
        int pos = init, local = 0;
        for (int i = 0; i < n; ++i) {
            int l = v[i][0], r = v[i][1], g = v[i][2];
            if (l == pos) pos = r;
            else if (r == pos) pos = l;
            if (pos == g) local++;
            ans = max(ans, local);
        }
    }
    cout << ans << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shell.out", "w", stdout);
    freopen("shell.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}