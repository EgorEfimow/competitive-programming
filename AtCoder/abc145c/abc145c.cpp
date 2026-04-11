#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'
#define ll long long 
#define vi vector<int>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    vector<pii> v(n);

    for (auto &[l, r] : v)
        cin >> l >> r;

    vi q(n); iota(all(q), 0);

    auto distance = [&](vi &g) -> double {
        double path = 0;
        for (int i = 1; i < isz(g); ++i) {
            double x = v[g[i]].first - v[g[i - 1]].first;
            double y = v[g[i]].second - v[g[i - 1]].second;
            path += sqrt(x*x + y*y);
        }
        return path;
    };

    int cnt = 0;
    double ans = 0;

    do {
        cnt++;
        ans += distance(q);
    } while (next_permutation(all(q)));

    cout << fixed << setprecision(15) << ans / cnt << en;
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