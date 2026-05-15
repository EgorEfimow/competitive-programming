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
    int n, tt, p; cin >> n >> tt >> p;
    vi v(n); for (int &e : v) cin >> e;
    sort(all(v), greater<>());

    int ans = 0, cnt = 0;
    for (int i = 0; i < n && cnt < p; ++i) {
        cnt++;
        if (v[i] > tt) continue;
        ans = max(ans, tt - v[i]);
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