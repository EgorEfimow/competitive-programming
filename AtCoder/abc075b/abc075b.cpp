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
    vector<vector<char>> v(h + 2, vector<char>(w + 2, '-'));
    for (int i = 0; i < h; ++i) {
        string s; cin >> s;
        for (int j = 0; j < isz(s); ++j) {
            v[i + 1][j + 1] = s[j];
        }
    }

    pii dir[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1},
                  {1, 0}, {1, -1}, {0, -1}};

    for (int i = 1; i < h + 1; ++i) {
        for (int j = 1; j < w + 1; ++j) {
            if (v[i][j] == '#') continue;
            int cnt = 0;
            for (auto &d : dir) {
                if (v[i + d.first][j + d.second] == '#') cnt++;
            }
            v[i][j] = cnt + '0';
        }
    }

    for (int i = 1; i < h + 1; ++i) {
        for (int j = 1; j < w + 1; ++j) {
            cout << v[i][j];
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