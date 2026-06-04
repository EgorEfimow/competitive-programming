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
    int n, m; cin >> n >> m;
    vector<int> p(n); for (int &e : p) cin >> e;
    vector<int> v(m); for (int &e : v) cin >> e;

    sort(all(p));
    sort(all(v));

    ll ans = 0;

    // find min among 4 values (l - [i], l - [m - i - 1], and same for r)

    int lp = 0, rp = n - 1, lv = 0, rv = m - 1, cnt = 0;
    while (cnt < n) {
        ll leftleft = abs(p[lp] - v[lv]), leftright = abs(p[lp] - v[rv]);
        ll rightleft = abs(p[rp] - v[lv]), rightright = abs(p[rp] - v[rv]);

        if (leftleft >= leftright && leftleft >= rightleft && leftleft >= rightright) {
            lp++; lv++; ans += leftleft;
        }
        else if (leftright >= leftleft && leftright >= rightleft && leftright >= rightright) {
            lp++; rv--; ans += leftright;
        }
        else if (rightleft >= leftleft && rightleft >= leftright && rightleft >= rightright) {
            rp--; lv++; ans += rightleft;
        }
        else {
            rp--; rv--; ans += rightright;
        }
        cnt++;
    }

    cout << ans << en;
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