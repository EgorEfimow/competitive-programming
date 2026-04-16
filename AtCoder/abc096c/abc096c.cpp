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

    vector<string> g(h + 2);

    for (int i = 1; i < h + 1; ++i) {
        string s; cin >> s;
        s = '.' + s + '.';
        g[i] = s;
    }

    g[0] = string(w + 2, '.');
    g.back() = string(w + 2, '.');

    vector<vector<char>> used(h + 2, vector<char>(w + 2, 0));

    auto bfs = [&](int x, int y) -> int {
        int cnt = 1;

        queue<pii> q;
        q.push({x, y});
        used[x][y] = 1;

        pii dir[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

        while (!q.empty()) {
            int posx = q.front().first, posy = q.front().second;
            q.pop();
            for (auto &[l, r] : dir) {
                int newx = posx + l, newy = posy + r;
                // cout << newx << " " << newy << en;
                if (g[newx][newy] == '.') continue;
                if (!used[newx][newy]) {
                    used[newx][newy] = 1;
                    q.push({newx, newy});
                    cnt++;
                }
            }
        }
        return cnt;
    };

    for (int i = 1; i < h + 1; ++i) {
        for (int j = 1; j < w + 1; ++j) {
            if (g[i][j] == '.' || used[i][j]) continue;
            int res = bfs(i, j);
            if (res < 2) {
                cout << "No" << en;
                return;
            }
        }
    }
    cout << "Yes" << en;
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