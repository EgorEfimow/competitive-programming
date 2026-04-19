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
    int n; cin >> n;
    vi v(n);
    for (int i = 0; i < n; ++i) {
        int e; cin >> e;
        v[i] = e;
    }

    if (n <= 2) {
        cout << 1 << en;
        return;
    }

    int ans = 0;
    int idx = 0;
    while (idx < n) {
        ans++;
        int q = idx, w = idx;
        for (int i = idx + 1; i < isz(v); ++i) {
            if (v[i] >= v[i - 1]) {
                q++;
            }
            else break;
        }
        for (int i = idx + 1; i < isz(v); ++i) {
            if (v[i] <= v[i - 1]) {
                w++;
            }
            else break;
        }
        idx = max(q, w) + 1;
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