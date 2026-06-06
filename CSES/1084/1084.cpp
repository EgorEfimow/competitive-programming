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
    int n, m, k; cin >> n >> m >> k;
    vi app(n); vi f(m);
    for (int &e : app) cin >> e;
    for (int &e : f) cin >> e;

    sort(all(app));
    sort(all(f));

    int ans = 0;

    int l = 0, r = 0;
    while (l < m && r < n) {
        if (app[r] < f[l] - k) r++;
        else if (app[r] > f[l] + k) l++;
        else if (f[l] + k >= app[r] && app[r] >= f[l] - k) {
            ans++;
            l++;
            r++;
        }
    }

    cout << ans << en;
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