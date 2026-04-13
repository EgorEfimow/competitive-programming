#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n, k; cin >> n >> k;

    vi v(n);
    for (int &e : v) cin >> e;

    if (k == 1) {
        if (n % 2) cout << (n - 1) / 2 << en;
        else cout << (n - 2) / 2 << en;
        return;
    }
    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (v[i] > v[i + 1] + v[i - 1]) ans++;
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