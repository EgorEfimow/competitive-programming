#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define en '\n'
#define ll long long 

void solve() {
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> a(n);
    for (int &e : a) cin >> e;

    vector<pair<int, int>> pi;

    for (int i = 0; i < m; ++i) {
        int b, c;
        cin >> b >> c;
        pi.emplace_back(b - 1, c);

        a[b - 1] += c;

        if (a[b - 1] > h) {
            while (isz(pi)) {
                a[pi[isz(pi) - 1].first] -= pi[isz(pi) - 1].second;
                pi.pop_back();
            }
        }
    }
    for (int &e : a) cout << e << " ";
    cout << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}