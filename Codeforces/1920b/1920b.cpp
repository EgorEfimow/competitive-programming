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
#define vpii vector<pii>

void solve() {
    int n, k, x; cin >> n >> k >> x;
    vi v(n); for (int &e : v) cin >> e;

    sort(all(v));

    vi pref(n + 1);
    for (int i = 1; i < isz(pref); ++i) {
        pref[i] = v[i - 1] + pref[i - 1];
    }

    int ans = -1e9;
    for (int i = 0; i <= k; ++i) {
        // revert sum of last X elements
        int val;
        if (isz(pref) - i <= x) {
            val = -pref[isz(pref) - i - 1];
        }
        else {
            int sz = isz(pref);
            int take = pref[sz - i - 1] - pref[sz - i - x - 1];
            int q1 = pref[sz - i  - x - 1]; // total sum of the remaining array
            val = q1 - take;
        }

        ans = max(ans, val);
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