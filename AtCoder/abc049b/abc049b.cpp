#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int h, w; cin >> h >> w;
    vector<vector<char>> v(h * 2, vector<char>(w));

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            char c; cin >> c;
            v[i * 2][j] = c; v[i * 2 + 1][j] = c;
        }
    }

    for (auto &e : v) {
        for (char c : e) cout << c;
        cout << en;
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