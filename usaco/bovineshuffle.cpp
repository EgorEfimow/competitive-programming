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
    vi v(n);
    for (int i = 0; i < n; ++i) {
        int e; cin >> e;
        e--; v[i] = e;
    }

    vector<string> vs(n);
    for (string &e : vs) cin >> e;

    vector<string> vsc(vs);

    vi aux(n); iota(all(aux), 0);

    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < n; ++i) {
            vs[i] = vsc[v[i]];
        }
        vsc = vs;
    }

    for (int i = 0; i < n; ++i) {
        cout << vs[aux[i]] << en;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shuffle.out", "w", stdout);
    freopen("shuffle.in", "r", stdin);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}