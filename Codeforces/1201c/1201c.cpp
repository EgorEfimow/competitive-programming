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
    ll n, k; cin >> n >> k;
    vi v(n); for (int &e : v) cin >> e;

    sort(all(v));

    int pos = n / 2;

    auto check = [&](int op) -> bool {
        ll val = v[n / 2] + op, s = 0;
        for (int i = pos; i < n; ++i) {
            if (v[i] > val) continue;
            s += abs(v[i] - val);
        }
        return s <= k;
    };

    auto bs = [&]() -> int {
        ll lo = -1, hi = 1e9 + 1;
        while (lo < hi - 1) {
            ll mi = (lo + hi) / 2;
            if (check(mi)) lo = mi;
            else hi = mi;
        }
        return lo;
    };
    cout << v[pos] + bs() << en;
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