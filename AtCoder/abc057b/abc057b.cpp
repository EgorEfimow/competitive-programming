#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n, m; cin >> n >> m;
    vector<pii> v(n);
    for (auto &e : v) {
        cin >> e.first >> e.second;
    }
    vector<pii> q(m);
    for (auto &e : q) {
        cin >> e.first >> e.second;
    }

    for (int i = 0; i < n; ++i) {
        int dist = 1e9, p;
        for (int j = 0; j < m; ++j) {
            int d = abs(v[i].first - q[j].first) + abs(v[i].second - q[j].second);
            if (d < dist) {
                dist = d;
                p = j;
            }
        }
        cout << p + 1 << en;;
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