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

    vi meat(n);
    vi mip(n + 1);

    mip[0] = 1e9;

    for (int i = 0; i < n; ++i) {
        int a, p; cin >> a >> p;
        meat[i] = a;
        mip[i + 1] = min(mip[i], p);
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        ans += mip[i + 1] * meat[i];
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