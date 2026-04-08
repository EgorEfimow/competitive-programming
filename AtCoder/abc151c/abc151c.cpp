#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 

bool check(vector<string> &v) {
    return find(all(v), "AC") != v.end();
}

void solve() {
    int n, m; cin >> n >> m;

    map<int, vector<string>> mp;

    for (int i = 0; i < m; ++i) {
        int q; cin >> q;
        string s; cin >> s;
        mp[q].push_back(s);
    }

    int p = 0, cnt = 0;;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (!check(it->second)) continue;
        cnt++;
        for (string &e : it->second) {
            if (e == "AC") break;
            p++; 
        }
    }
    cout << cnt << " " << p << en;
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