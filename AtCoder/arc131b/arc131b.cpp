#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int h, w; cin >> h >> w;
    vector<string> m(h + 2);

    m[0] = string(w + 2, '.');
    m.back() = string(w + 2, '.');

    for (int i = 1; i < h + 1; ++i) {
        string q; cin >> q;
        q = "." + q + ".";
        m[i] = q;
    }

    bool n[6] = {};
    for (int i = 1; i < isz(m) - 1; ++i) {
        for (int j = 1; j < isz(m[i]) - 1; ++j) {
            if (m[i][j] != '.') continue;
            // left
            if (m[i][j - 1] != '.') n[m[i][j - 1] - '0'] = 1;
            // right
            if (m[i][j + 1] != '.') n[m[i][j + 1] - '0'] = 1;
            // top
            if (m[i - 1][j] != '.') n[m[i - 1][j] - '0'] = 1;
            // bot
            if (m[i + 1][j] != '.') n[m[i + 1][j] - '0'] = 1;

            for (size_t k = 1; k < size(n); k++) {
                if (n[k] == 0) {
                    m[i][j] = k + '0';
                    break;
                }
            }
            fill(n, n + sizeof(n), 0);
        }
    }
    for (int i = 1; i < isz(m) - 1; ++i) {
        for (int j = 1; j < isz(m[i]) - 1; ++j) {
            cout << m[i][j];
        }
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