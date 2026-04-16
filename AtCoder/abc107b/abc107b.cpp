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

    set<int> r; set<int> c;

    vector<vector<char>> v(h);

    for (int i = 0; i < h; ++i) {
        string s; cin >> s;
        for (char &e : s)
            v[i].push_back(e);
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (find(all(v[i]), '#') == v[i].end()) {
                r.insert(i);
                break;
            }
        }
    }

    for (int i = 0; i < w; ++i) {
        int cnt = 0;
        for (int j = 0; j < h; ++j) {
            if (v[j][i] != '#') cnt++;
        }
        if (cnt == h) c.insert(i);
    }

    for (int i = 0; i < h; ++i) {
        if (find(all(r), i) != r.end()) continue;
        for (int j = 0; j < w; ++j) {
            if (find(all(c), j) != c.end()) continue;
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