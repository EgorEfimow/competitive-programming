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
    int n, d; cin >> n >> d;
    vi v(n);
    int s = 0, ans = 0;
    for (int &e : v) cin >> e;
    sort(all(v));

    for (int i = 0; i < n - 1; ++i) {
        v[i] += 10;
        ans += 2;
    }

    s = accumulate(all(v), 0);

    if (s > d) cout << -1 << en;
    else {
        cout << ans + (d - s) / 5 << en;
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